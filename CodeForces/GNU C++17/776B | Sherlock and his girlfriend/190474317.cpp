#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 vector<bool> is_prime((n+1), true);
is_prime[0] = is_prime[1] = false;
for (long long int i = 2; i <= (n+1); i++) {
    if (is_prime[i] && (long long)i * i <= (n+1)) {
        for (int j = i * i; j <= (n+1); j += i)
            is_prime[j] = false;
    }
}
vector<long long int>vect(n);
long long int k=1;
for(long long int i(1);i<=(n);i++){
 if(is_prime[i+1]){
  vect[i-1]=1;
  }
 else{
  vect[i-1]=2;
  k=2;}}
cout<<k<<endl;
for(long long int i(0);i<n;i++){
 cout<<vect[i]<<" ";}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}