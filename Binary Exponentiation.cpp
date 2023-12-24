#include<bits/stdc++.h>
using namespace std;
int power(long long b, long long p){
  long long res=1;
  while(p){
    if(p & 1){ //This statements means Odd number
      res*=b;
      p-=1;
    }
    else{
      b*=b;
      p/=2;
    }
  }
  return res;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long b,p;
    cin>>b>>p;
    cout<<power(b, p)<<endl;
  }
}
