#include<bits/stdc++.h>
using namespace std;
bool a[90000000];
vector<long long>p;
void prime(long long n){
  //long long a[n];
  p.push_back(2);
  //memset(a, 0, sizeof(a));
  for(int i=3;i*i<=n;i+=2){
    if(a[i]==0){
      for(int j=i*i;j<=n;j+=2*i){
        a[j]=1;
      }
    }
  }
  for(int i=3;i<=n;i+=2){
    if(a[i]==0)p.push_back(i);
  }
  // cout<<"Total prime number: "<<p.size()<<endl<<"Prime numbers are:"<<endl;
  // for(int i=0;i<p.size();i++)cout<<p.at(i)<<" ";
}
int main(){
  prime(90000000);
  int t;
  cin>>t;
  while(t--){
    //long long n;
    //cin>>n;
    long long n;
    cin>>n;
    //cout<<endl;
    cout<<p.at(n-1)<<endl;
  }
}
