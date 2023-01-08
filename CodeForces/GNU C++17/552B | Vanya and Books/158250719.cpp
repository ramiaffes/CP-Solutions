#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 string s;
 string n;
 cin>>n;
 long long int val2=stoll(n);
 string str3(n.length(),'0');
 str3[0]='1';
 long long int val3=stoll(str3);
 long long int val=n.length();
 long long int som=0;
 som+=(val2-val3+1)*(n.length());
 for(long long int i(1);i<=(val-1);i++){
  som+=(9*power(10,i-1)*i);}
 
 cout<<(som)<<endl;
 
    
    
 
    
    
return 0;}