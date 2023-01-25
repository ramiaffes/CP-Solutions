#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,string>hashing;
map<string,bool>vis;
bool cmp(pair<long long int, long long int> a,
         pair<long long int, long long int> b)
{
    return a.second <= b.second;
}
int main()
{
fast;
int n,x;
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
scanf("%d",&n);
vector< int>vect(2*n);
for(int i(0);i<(2*n);i++)scanf("%d",&vect[i]);;
vector<pair<int, int>>vect1(2*n);
for( int i(0);i<(2*n);i++){
 vect1[i]=make_pair(vect[i],i+1);
 }
sort(vect1.begin(), vect1.end());
bool test=true;
for( int i(0);i<(2*n);i+=2){
 if(vect1[i].first!=vect1[i+1].first){test=false;break;}
 }
if(test==false)puts("-1");
else {for( int i(0);i<(2*n);i+=2)printf("%d %d\n",vect1[i].second,vect1[i+1].second);}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}