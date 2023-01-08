#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
map<long long int,long long int>hashing;
map<long long int,long long int>hashing1;
long long int som=0;
long long int val=1;
 
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 bool test=true;
 for(long long int i(0);i<(n-1);i++){
 if((2*vect[i]>vect[i+1])and(vect[i]!=vect[i+1])){test=false;break;}}
 if(test==true)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
return 0;}