#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool is_prime(long long int num){
 if(num==1)return false;
 for(long long int i(2);i<=sqrt(num);i++){
  if(num%i==0)return false;}
 return true;}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>result;
 vector<bool> is_prime((n), true);
is_prime[0] = is_prime[1] = false;
long long int k=0;
for (long long int i = 2; i <= (n); i++) {
 if (is_prime[i]){result.push_back(i);k++;}
    if (is_prime[i] && (long long)i * i <= (n)) {
        for (int j = i * i; j <= (n); j += i){
            is_prime[j] = false;
            long long int val=j;
            while(val%i==0)val/=i;
            if(val==1){
            result.push_back(j);
            k+=1;}}
    }
}
cout<<k<<endl;
for(long long int i(0);i<k;i++)cout<<result[i]<<" ";
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}