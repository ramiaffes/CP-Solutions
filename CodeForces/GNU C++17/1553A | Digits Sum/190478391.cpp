#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n,k;
 long long int t;
 
 cin>>k;
 while(k--){
 cin>>n;
 if(n%10==9)cout<<(n/10+1)<<endl;
 else cout<<(n/10)<<endl;
}
 
 
 
 
 
 
 
return 0;}