#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
template <typename T>
string join(const T& v, const string& delim) {
    ostringstream s;
    for (const auto& i : v) {
        if (&i != &v[0]) {
            s << delim;
        }
        s << i;
    }
    return s.str();
}
 
int main()
{
 fast;
string s;
long long int n;
cin>>n;
vector<string>vect(n);
for(long long int i(0);i<n;i++){
 cin>>vect[i];}
cin>>s;
string str=join(vect, "<3");
string str2;
str2.append("<3");
str2.append(str);
str2.append("<3"); 
if(str2.length()>s.length()){
 cout<<"no"<<endl;
 }
else{
 
 long long int i=0;
 long long int j=0;
 while(i<str2.length()){
  while((j<s.length())and(s[j]!=str2[i])){
   j++;}
  if(j==s.length())break;
  i++;}
 if(i<str2.length()){
  cout<<"no"<<endl;}
 else{
  cout<<"yes"<<endl;}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}