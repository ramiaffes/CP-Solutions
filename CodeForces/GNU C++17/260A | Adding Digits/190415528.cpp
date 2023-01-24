#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
int main()
{
 fast; 
 long long int n,a,b;
 cin>>a>>b>>n;
 string str1=to_string(b);
 string str3=to_string(a);
 bool test=false;
 long long int val=0;
 for(long long int i(0);i<=(9);i++){
  string str5=to_string(i);
  string str6;
  str6.append(str3);
  str6.append(str5);
   val=stoll(str6);
  if(val%b==0){
   test=true;break;}
  }
 if(test==true){
  string str10=to_string(val);
  string str11((n-str10.length()+str3.length()),'0');
  
  cout<<str10<<str11<<endl;}
 else{
  cout<<-1<<endl;}
 
 
 
 
 
 
 
 
 
return 0;}