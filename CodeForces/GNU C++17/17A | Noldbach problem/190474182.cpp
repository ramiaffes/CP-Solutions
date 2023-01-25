#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n,k;
 cin>>n>>k;
 vector<bool> is_prime(1000, true);
is_prime[0] = is_prime[1] = false;
for (long long int i = 2; i <= 1000; i++) {
    if (is_prime[i] && (long long)i * i <= 1000) {
        for (int j = i * i; j <= 1000; j += i)
            is_prime[j] = false;
    }
}
if(n==2){
 if(k<=1)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;}
else{
long long int val=3;
long long int som=6;
long long int cmt=0;
while(som<=n){
 long long int j=val+1;
 while(is_prime[j]==false){
  j++;}
 som=val+j+1;
 if(is_prime[som]==true)
 cmt++;
 val=j;
 }
if(cmt>=k)cout<<"YES"<<endl;
else cout<<"NO"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}