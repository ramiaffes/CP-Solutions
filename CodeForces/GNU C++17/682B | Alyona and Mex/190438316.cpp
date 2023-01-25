#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>hashing;
map<string,bool>vis;
bool cmp(pair<long long int, long long int> a,
         pair<long long int, long long int> b)
{
    return a.second <= b.second;
}
int main()
{
fast;
long long int n,a;
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){cin>>vect[i];}
long long int i=1;
sort(vect.begin(),vect.end());
while(i<=n){
 auto it=lower_bound(vect.begin(),vect.end(),i);
 if(it==vect.end())break;
 vect[lower_bound(vect.begin(),vect.end(),i)-vect.begin()]=i;
 i++;
 }
cout<<i<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}