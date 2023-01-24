#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
 
 
int main()
{
 fast; 
 long long int n,k;
 string s,s2;
 cin>>n>>k;
 cin>>s;
 vector<char>res;
 map<char,long long int>hashing;
 for(long long int i(0);i<s.length();i++){
  if((hashing['(']<k/2)and(s[i]=='(')){res.push_back(s[i]);s2.append("(");hashing['(']++;}
  if((s[i]==')')and(not(res.empty()))){
   res.pop_back();s2.append(")");hashing[')']++;}
  if(hashing[')']==k/2)break;
  }
 cout<<s2<<endl;
 
 
 
 
 
 
 
return 0;}