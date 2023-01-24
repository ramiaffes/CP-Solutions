#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,bool>vis;
int main()
{
 fast;
 long long int n;
 string s,t;
 cin>>s;
 cin>>t;
long long int som=0;
 long long int val=s.find(t);
 while(val!=string::npos){
  som++;
  val=s.find(t,val+t.length());}
  
 cout<<som<<endl;
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}