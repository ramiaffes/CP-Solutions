#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,k1,k2;
 cin>>n>>k1>>k2;
 vector<long long int>vect(n);
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++){cin>>vect[i];}
 for(long long int i(0);i<n;i++){cin>>vect1[i];}
 vector<long long int>res(n);
 for(long long int i(0);i<n;i++){
  res[i]=(abs(vect[i]-vect1[i]));
  }
sort(res.begin(),res.end());
long long int val=1;
long long int val2=0;
long long int som=0;
for(long long int i(n-2);i>=0;i--){
 som+=val*(res[i+1]-res[i]);
 if(som>(k1+k2)){som-=val*(res[i+1]-res[i]);val2=i+1;break;}
 val++;}
for(long long int i(val2+1);i<(n);i++){
 res[i]=res[i-1];
 }
long long int som33=0;
bool test32=false;
if((k1+k2)>som){
 bool test=true;
while((test==true)){
 test=false;
for(long long int i(val2);i<n;i++){
 if(res[i]!=0){res[i]--;som33++;test=true;}
 if(som33==((k1+k2)-som)){break;}}if(som33==((k1+k2)-som)){break;}}
if(((k1+k2-som-som33)>0)and(res[n-1]==res[0])){
 if(((k1+k2)-som-som33)%2!=0){
  cout<<1<<endl;test32=true;}
 }}
if(test32==false){
long long int som12=0;
for(auto v:res){
 som12+=v*v;}
cout<<som12<<endl;}
 
 
 
 
 
 
 
return 0;}