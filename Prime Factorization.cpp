#include<bits/stdc++.h>
using namespace std;
void prime_factor(long long n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      int cnt=0;
      while(n%i==0){
        cnt++;
        n/=i;
      }
      cout<<i<<"^"<<cnt;
      if(n>1)cout<<"*";
    }
  }
  if(n>1)cout<<n<<"^"<<1;
  cout<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    prime_factor(n);
  }
}
