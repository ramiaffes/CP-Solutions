#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
long long  printNcR(long long int n, long long int r)
{
 
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
   return p;
}
 
int main()
{
 fast; 
 string s;
 long long int n,b,x,y,t;
    cin>>t;
    while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  sort(vect.begin(),vect.end());
  long long int som=0;
  for(long long int d(n-1);d>=2;d--){
   auto it=lower_bound(vect.begin(),vect.end(),vect[d]-2);
   long long int val=it-vect.begin();
   long long int val1=d-val;
   if(val1>=2){
   som+=printNcR(val1,2);}
   }
  cout<<som<<endl;}
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}