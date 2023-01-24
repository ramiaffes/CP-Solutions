#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
 map<pair<long long int,long long int>,bool>vis;
 long long int som=0;
int main()
{
 fast; 
 long long int t,a,b,c;
 cin>>t;
 while(t--){
  cin>>a>>b>>c;
  if(((a+b)==c)or((a+c)==b)or(b+c==a))cout<<"Yes"<<endl;
  else cout<<"NO"<<endl;
  }
 
 
  
  
 
 
 
 
 
 
    
return 0;} 