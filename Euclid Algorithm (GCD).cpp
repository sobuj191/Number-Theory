#include<bits/stdc++.h>
using namespace std;
int GCD(long long a, long long b){
  if(b==0)return a;
  return GCD(b, a%b);
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    long long ans=GCD(a,b);
    cout<<ans<<endl;
  }
}
