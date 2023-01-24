#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
long long int n;
string s;
string s1;
string s2;
cin>>s;
cin>>s1;
cin>>s2;
string t(s.begin(),s.end());
reverse(t.begin(),t.end());
bool test=false;
bool test1=false;
long long int it1;
long long int it =s.find(s1);
if(it!=string::npos){
  it1=s.find(s2,it+s1.length());
 if(it1!=string::npos){
  test=true;}}
 it =t.find(s1);
if(it!=string::npos){
  it1=t.find(s2,it+s1.length());
 if(it1!=string::npos){
  test1=true;}}
if((test1==true)and(test==true)){
cout<<"both"<<endl;}
else if(test==true){
 cout<<"forward"<<endl;}
else if(test1==true){
 cout<<"backward"<<endl;}
else{
 cout<<"fantasy"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}