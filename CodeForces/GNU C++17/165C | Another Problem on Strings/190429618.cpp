#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
int main()
{
 fast;
 long long int k;
 string s;
 string s1;
 cin>>k;
 cin>>s;
 map<char,vector<long long int>>res;
 for(long long int i(0);i<s.length();i++){
  res[s[i]].push_back(i);}
if(k==0){
 long long int res=0;
 long long int som=0;
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='0'){
   som++;}
  else{res+=som*(som+1)/2;som=0;}}
 if(s[s.length()-1]!='1'){res+=som*(som+1)/2;}
 cout<<res<<endl;}
else{
long long int som=0;
 for(long long int j(0);j<=(res['1'].size()-k);j++){
  long long int val;
  long long int val2;
  if(j==0){
    val=res['1'][j]+1;
    }
  else{
   val=(res['1'][j]-res['1'][j-1]);}
 if((j+k-1)==(res['1'].size()-1)){
   val2=s.length()-res['1'][j+k-1];
  }
 else{
   val2=(res['1'][j+k]-res['1'][j+k-1]);}
  som+=val*val2;
  
  
  }cout<<som<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}