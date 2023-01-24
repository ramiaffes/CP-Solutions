#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int ans=-1e5;
bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
int main()
{
 fast; 
 long long int n,t,a,b,c;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(3);
  cin>>vect[0];
  cin>>vect[1];
  cin>>vect[2];
  long long int val=n;
  long long int som=0;
  while(val!=0){
   som++;
   val=vect[val-1];}
  if(som==3)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}