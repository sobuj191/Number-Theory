#include<bits/stdc++.h>
using namespace std;
vector<int>s;
void sieve(long long n){
  long long a[n+1];//size 1 beshi nete hobe, karon memset 0 index thekey count kore.
  memset(a, 0, sizeof a);
  s.push_back(2);
  for(int i=3;i*i<100000;i+=2){
    if(a[i]==0){
      for(int j=i*i;j<100000;j+=2*i){
        a[j]=1;
      }
    }
  }
  for(int i=3;i<100000;i+=2){
    if(a[i]==0)s.push_back(i);
  }
}
void prime(long long l,long long r){
  if(l==1)l++;
long long k=r-l+1;
long long p[k+1];
memset(p,0,sizeof p);
for(int i=0;i<s.size();i++){
  if(s[i]*s[i]<=r){
    long long f=(l/s[i])*s[i];
    if(f<l)f+=s[i];
    for(;f<=r;f+=s[i]){
      if(s[i]!=f)
      p[f-l]=1;
    }
  }
}
for(int i=0;i<k;i++){
  if(p[i]==0)cout<<i+l<<endl;
}
}
int main(){
  sieve(100000);
  int t;cin>>t;
  while(t--){
    long long l,r;cin>>l>>r;
    prime(l,r);
    cout<<endl;
  }
}
