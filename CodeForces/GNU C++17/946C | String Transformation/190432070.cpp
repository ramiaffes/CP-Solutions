#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
map<long long int ,long long int>hashing;
int main()
{
 fast;
 
 long long int p,q,k;
 string s;
 string res;
 cin>>s;
 long long int n=s.length();
 bool test=true;long long int j=0;
 for(long long int i(0);i<26;i++){
  char var =(i+97);
  while((j<n)and(s[j]>var)){
   j++;
   }
   if(j==n){test=false;break;}
   s.replace(j,1,1,var);
  j++;
   }
 if((test==false)or(s.length()<26))cout<<-1<<endl;
 else cout<<s<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}