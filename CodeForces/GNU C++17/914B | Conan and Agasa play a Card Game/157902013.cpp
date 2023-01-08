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
  hashing[vect[i]]++;}
 sort(vect.begin(),vect.end());
 auto it=unique(vect.begin(),vect.end());
 vect.resize(distance(vect.begin(), it));
 bool test=false;
 for(long long int i(n-1);i>=0;i--){
  if(hashing[vect[i]]%2==1){
   test=true;break;}}
 if(test==true){
  cout<<"Conan"<<endl;}
 else{
  cout<<"Agasa"<<endl;}
  
 
 
 
 
    
    
 
    
    
 
    
    
return 0;} 