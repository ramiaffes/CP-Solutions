#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
	fast;	
	long long int n,m,l,r,x;
	string s;
	cin>>n;
  long long int ans=0;
	vector<long long int>vect(n);
	for(long long int i(0);i<n;i++){
		cin>>vect[i]; long long int valeur=to_string(vect[i]).length();
    ans=max(ans,valeur);}
  vector<long long int>vect1=vect;
  sort(vect1.begin(),vect1.end());
  long long int v1=vect1[n-1];
  long long int v2=vect1[n-2];
  long long int v3=vect1[n-3];
  string res1;
  string res2;
  string res3;
  string res4;
  string res5;
  string res6;
  res1.append(to_string(v1));
  res1.append(to_string(v2));
  res1.append(to_string(v3));
    res2.append(to_string(v1));
  res2.append(to_string(v3));
  res2.append(to_string(v2));
    res3.append(to_string(v2));
  res3.append(to_string(v3));
  res3.append(to_string(v1));
   res4.append(to_string(v2));
  res4.append(to_string(v1));
  res4.append(to_string(v3));
    res5.append(to_string(v3));
  res5.append(to_string(v1));
  res5.append(to_string(v2));
  res6.append(to_string(v3));
  res6.append(to_string(v2));
  res6.append(to_string(v1));
  cout<<max(max(max(stol(res1),stol(res2)),max(stol(res3),stol(res4))),max(stol(res5),stol(res6)))<<endl;
 
 
	
	
	
	
 
	
	
	
	
	
	
 
		
		
	
	
	
	
	
		
	
	
	
    
    
return 0;}