#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int t,n,m;
    cin>>n>>m;
    long long int val=n+m;
    val-=val%3;
    cout<<min(n,min((val/3),m))<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}