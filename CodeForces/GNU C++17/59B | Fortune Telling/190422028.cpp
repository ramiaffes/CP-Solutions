#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
 bool isPrime( long long int n)
{
    if (n <= 1)  return false;
 
    for (long long int i = 2; i *i<n; ++i)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 long long int som=0;
 vector<long long int>res1;
 vector<long long int>res2;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  som+=vect[i];
  if(vect[i]%2==0){
   res1.push_back(vect[i]);}
  else{
   res2.push_back(vect[i]);}}
 sort(res2.begin(),res2.end());
 if(res2.empty()){
  cout<<0<<endl;
  }
 else if(res2.size()%2==0){
  som-=res2[0]; 
  cout<<som<<endl; 
}
else{
cout<<som<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
return 0;}