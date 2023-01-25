#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int g,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=g;}
 return p;}
bool primary(long long int n) {
    bool isPrime = true;
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (long long int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  long long int som=0;
  vector<long long int>result;
  for(long long int i(2);i<=sqrt(n);i+=1){
   if((n%i==0)and(primary(i))){som++;result.push_back(i);}
   if((n%i==0)and primary(n/i)and(i!=(n/i))){som++;result.push_back(n/i);}
   if(som==3)break;}
  if(som==0)cout<<"NO"<<endl;
  else if(som==3){cout<<"YES"<<endl;
   cout<<result[0]<<" "<<result[1]<<" "<<(n/(result[1]*result[0]))<<endl;}
  else if(som==2){
   if(((n%power(result[0],3))==0)){
    cout<<"YES"<<endl;
    cout<<result[0]<<" "<<power(result[0],2)<<" "<<(n/(power(result[0],2)*result[0]))<<endl;
    }
   else if(n%power(result[1],3)==0){
    cout<<"YES"<<endl;
    cout<<result[1]<<" "<<power(result[1],2)<<" "<<(n/(power(result[1],2)*result[1]))<<endl;}
   else if((n%power(result[1],2)==0)and (n%power(result[0],2)==0)){
    cout<<"YES"<<endl;
    cout<<result[0]<<" "<<result[1]<<" "<<result[0]*result[1]<<endl;}
   else{
    cout<<"NO"<<endl;}}
  else{
   if(n%power(result[0],6)==0){
    cout<<"YES"<<endl;
    cout<<result[0]<<" "<<power(result[0],2)<<" "<<(n/power(result[0],3))<<endl;}
   else{
    cout<<"NO"<<endl;}}
  
  
  
  
  
  }
 
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}