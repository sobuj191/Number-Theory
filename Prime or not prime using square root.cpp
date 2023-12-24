#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long sqrn=sqrt(n),f=0;
    if(n<2)cout<<"Not prime"<<endl;
    else if(n<=3)cout<<"Prime"<<endl;
    else if(n%2==0)cout<<"Not prime"<<endl;
    else{
    for(int i=3;i<=sqrn;i+=2){

      if(n%i==0){
      cout<<"Not prime"<<endl;
      f++;
      break;
    }
  }
   if(f==0)cout<<"Prime"<<endl;
    }
}
}
