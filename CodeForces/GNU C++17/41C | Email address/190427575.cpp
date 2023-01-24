#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 void tokenize(string const &str, const char delim,
            vector<string> &out)
{
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}
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
 long long int n,k,m;
 string s,s1;
 cin>>s;
 
 long long int val=0;
 long long int val1=s.length()-1;
 if(s.length()>3){
  if((s[0]=='d')and(s[1]=='o')and(s[2]=='t')){
   val=3;}}
 if(s.length()>2){
  if((s[0]=='a')and(s[1]=='t')){
   val=2;}}
 if((s.length()>3)){
  if((s[s.length()-1]=='t')and(s[s.length()-2]=='o')and(s[s.length()-3]=='d')){
   val1=s.length()-4;}}
 if(s.length()>=2){
  if((s[s.length()-2]=='a')and(s[s.length()-1]=='t')){
   val1=s.length()-3;}}
 if(s=="dot"){
  cout<<s<<endl;}
 else if(s=="at"){
  cout<<s<<endl;}
 else{
 string  s1=s.substr(val,val1-val+1);
 if(s1.length()>=3){
  while(s1.find("dot")!=string::npos){
   long long int val23=s1.find("dot");
   s1.erase(val23,3);
   s1.insert(val23,1,'.');
  }}
   long long int m=s1.find("at");
   s1.erase(m,2);
   s1.insert(m,1,'@');
   string s3;
   string s4;
   if(val==3){
     s3=s.substr(0,3);}
  else if(val==2){
   s3=s.substr(0,2);}
 if(val1==(s.length()-3)){
  s4=s.substr(s.length()-2,2);}
 if(val1==(s.length()-4)){
  s4=s.substr(s.length()-3,3);}
 s3.append(s1);
 s3.append(s4);
 cout<<s3<<endl;
 
 
   
   
    
    
    
 
}
 
  
  
 
 
 
  
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}