#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 string s;
 long long int t,n,m;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 if(n==1){
  cout<<vect[0]<<endl;}
 else{
 sort(vect.begin(),vect.end());
 vector<long long int>dp1(n);
 dp1[n-1]=vect[n-1];
 for(long long int i(n-2);i>=0;i--){
  dp1[i]=dp1[i+1];
  dp1[i]+=vect[i];}
 long long int som=0;
 som+=dp1[0];
 for(long long int i(0);i<(n-1);i++){
  som+=(vect[i]);
  if(i<(n-1)){
  som+=dp1[i+1];}
  }
 cout<<som<<endl;
}
    
    
 
    
    
return 0;}