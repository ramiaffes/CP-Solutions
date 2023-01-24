#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
  vector<string>vect1(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<n;i++){string s1;getline(cin>>ws,s1);vect1[i]=s1;}
 bool test=true;
 for(long long int i(0);i<n;i++){
  long long int som=0; string s=vect1[i];
  for(long long int j(0);j<(vect1[i].length());j++){
   if((s[j]=='a')or(s[j]=='e')or(s[j]=='i')or(s[j]=='o')or(s[j]=='u')or(s[j]=='y'))som++;
 }
 if(som!=vect[i]){test=false;break;}
  }
 if(test==false)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
 
 
  
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}