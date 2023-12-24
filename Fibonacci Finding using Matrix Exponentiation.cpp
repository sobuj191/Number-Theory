#include<bits/stdc++.h>
using namespace std;
long long b[2][2],I[2][2];
void mul(long long M[][2],long long IM[][2]){
  long long ans[2][2],x;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      x=0;
      for(int k=0;k<2;k++){
        x+=(M[i][k]*IM[k][j])%(1000000000+7);
        x%=(1000000000+7);
      }
      ans[i][j]=x;
    }
  }
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      M[i][j]=ans[i][j];
    }
  }
}
void power(long long b[][2],long long I[][2],long long f0,long long f1,long long n){
  while(n){
    if(n%2){
      mul(I,b);
      n--;
    }
    else{
      mul(b,b);
      n/=2;
    }
  }
  cout<<((f0*I[0][1])+(f1*I[1][1]))%(1000000000+7)<<endl;
}
int main(){
  int t;cin>>t;
  while(t--){
  long long f0,f1,n;cin>>f0>>f1>>n;
  b[0][0]=0;
  b[0][1]=1;
  b[1][0]=1;
  b[1][1]=1;
  I[0][0]=1;
  I[0][1]=0;
  I[1][0]=0;
  I[1][1]=1;
  power(b,I,f0,f1,n-1);
  }
}
