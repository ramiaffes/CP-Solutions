#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n,m;
 cin>>n>>m;
 vector<bool> is_prime(200000, true);
is_prime[0] = is_prime[1] = false;
for (long long int i = 2; i <= 200000; i++) {
    if (is_prime[i] && (long long)i * i <= 200000) {
        for (int j = i * i; j <= 200000; j += i)
            is_prime[j] = false;
    }
}
 vector<long long int>vect2(m);
 vector<vector<long long int>>vect(n,vect2);
 vector<long long int>result1(n);
 vector<long long int>result2(m);
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
  cin>>vect[i][j];
  while(is_prime[vect[i][j]]==false){
   vect[i][j]++;
   result1[i]++;
   result2[j]++;}}}
 cout<<(min(*min_element(result1.begin(),result1.end()),*min_element(result2.begin(),result2.end())))<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}