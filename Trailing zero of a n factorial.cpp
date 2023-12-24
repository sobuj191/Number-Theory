#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,ans=0;
cin>>n;
long long i=5;
while(n>=i){
   ans+=n/i;
   i*=5;
}
cout<<ans<<endl;
}
