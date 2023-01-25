#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
vector<long long int>vect(n);
long long int d=1;
vector<bool> is_prime((n), true);
is_prime[0] = is_prime[1] = false;
for (long long int i = 2; i <= (n); i++) {
    if (is_prime[i] ) {
  vect[i-1]=d;
  d++;}
 if(is_prime[i]&& (long long)i * i <= (n)){
        for (long long int j = i * i; j <= (n); j += i){
            is_prime[j] = false;
            vect[j-1]=vect[i-1];}
    }
}
for(long long int i(1);i<n;i++){
 cout<<vect[i]<<" ";}
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}