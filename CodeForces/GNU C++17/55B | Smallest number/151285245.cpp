#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
long long int ans=1e14;
 void func(vector<char>s,vector<long long int>vect,long long int i){
  if(vect.size()==1){
  ans=min(ans,vect[0]); return;}
  for(long long int d(0);d<(vect.size()-1);d++){
   for(long long int d1(d+1);d1<vect.size();d1++){
    long long int val=vect[d];
    long long int val1=vect[d1];
    vector<long long int>vect1(vect.begin(),vect.end());
    vect1.erase(vect1.begin()+d1);
    vect1.erase(vect1.begin()+d);
    if(s[i]=='+'){
     vect1.push_back(val1+val);}
   else{
    vect1.push_back(val1*val);}
   func(s,vect1,i+1);}}
  }
int main()
{
 fast; 
 vector<char>s(3);
 long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<long long int>vect(4);
    vect[0]=a;
    vect[1]=b;
    vect[2]=c;
    vect[3]=d;
    for(long long int i(0);i<3;i++)
    cin>>s[i];
    func(s,vect,0);
    cout<<ans<<endl;
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}