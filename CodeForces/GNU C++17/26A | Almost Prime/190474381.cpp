#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n;
 cin>>n;
vector<bool> is_prime((n), true);
is_prime[0] = is_prime[1] = false;
for (long long int i = 2; i <= (n); i++) {
    if (is_prime[i] && (long long)i * i <= (n)) {
        for (int j = i * i; j <= (n); j += i)
            is_prime[j] = false;
    }
}
long long int som=0;
long long int result=0;
for(long long int num(6);num<=n;num++){
 som=0;
 for(long long int i(2);i<=num;i++){
  if((num%i==0)and(is_prime[i]==true)){
   som++;
   }
  if(som==3)break;}
 if(som==2){result+=1;}}
cout<<result<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}