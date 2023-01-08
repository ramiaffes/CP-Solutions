#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main()
{
 fast;
long long int n,t,k;
cin>>t;
string s;
while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 long long int som=0;
 for(long long int i(0);i<n;i++){
  som+=(vect[i]-vect[0]);}
 cout<<som<<endl;
}
  return 0;}