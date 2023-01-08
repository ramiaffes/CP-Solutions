#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
void remove(vector<long long int> &v,long long int target)
{
    v.erase(remove(v.begin(), v.end(), target), v.end());
}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }long long int som=0;
 while(1){
 long long int ans=0;
 
 for(long long int i(1);i<n;i++){
  ans=max(ans,vect[i]);}
 if(ans<vect[0])break;
 for(long long int i(1);i<n;i++){
  if(ans==vect[i]){
   vect[i]--;som++;vect[0]++;break;}}
 }
 cout<<som<<endl;
 
 
 
    
    
 
    
    
 
    
    
return 0;}