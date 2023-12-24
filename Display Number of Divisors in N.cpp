#include<bits/stdc++.h>
using namespace std;
void divisor(long long n, long long k){
  set<int>s;
  vector<int>v;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      s.insert(i);
      s.insert(n/i);
    }
  }
  //cout<<"Total divisor: "<<s.size()<<endl;
  //for(auto i: s)cout<<i<<" ";
  //cout<<endl;
v.assign(s.begin(),s.end());
  if(v.size()<k)cout<<-1<<endl;
  else
  cout<<v[k-1]<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    divisor(n,k);
  }
}
