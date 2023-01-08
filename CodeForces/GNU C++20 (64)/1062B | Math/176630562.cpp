#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 long long int n,x,m,t,l,r;
 cin>>n;
 set<int>res;
  bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 for(long long int i(2);i*i<=n;i++){
  if(n%i==0){
  if(prime[i]){
   res.insert(i);}
  if(prime[n/i]){
   res.insert(n/i);}}}
 long long int p=1;
 for(auto v:res){
  p=p*v;}
 if(prime[n])p=n;
 vector<long long int>res2;
 for(auto v:res){
  long long int n1=n;
  long long int som=0;
  while(n1%v==0){
   som++;
   n1/=v;
   }
  res2.push_back(som);
  }
 long long int p2=1;
 vector<long long int>res3;
 while(p2<=n){
  res3.push_back(p2);
  p2*=2;}
long long int ans=0;
long long int ans1=0;
for(auto v:res2){
 auto it=lower_bound(res3.begin(),res3.end(),v);
 ans=max(ans,it-res3.begin());
 ans1=max(ans1,*it);}
long long som=0;
for(auto v:res2){
 
 if(v!=ans1){som++;break;}}
 
cout<<p<<" "<<(ans+som)<<endl;
   
 
  
  
  
 
 
  
  
 
 
 
 
 
 
    
return 0;} 