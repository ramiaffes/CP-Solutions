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
 
string s1,s2,s3,s;
long long int n;
cin>>s1;
cin>>s2;
cin>>s3;
vector<string>vect(3);
for(long long int i(0);i<s1.length();i++){
 if(isalpha(s1[i])){
  string var(1,tolower(s1[i]));
 vect[0].append(var);}}
for(long long int i(0);i<s2.length();i++){
 if(isalpha(s2[i])){
  string var(1,tolower(s2[i]));
 vect[1].append(var);}}
for(long long int i(0);i<s3.length();i++){
 if(isalpha(s3[i])){
  string var(1,tolower(s3[i]));
 vect[2].append(var);}}
vector<string>res;
vector<long long int>vect2(3);
vect2[0]=0;
vect2[1]=1;
vect2[2]=2;
while(next_permutation(vect2.begin(),vect2.end())){
 string var3;
 for(long long int i(0);i<vect2.size();i++){
  var3.append(vect[vect2[i]]);}
 res.push_back(var3);
 
 }
 string var4;
 for(long long int i(0);i<vect2.size();i++){
  var4.append(vect[vect2[i]]);}
 res.push_back(var4);
cin>>n;
for(long long int i(0);i<n;i++){
 cin>>s;
 string res1;
 for(long long int d(0);d<s.length();d++){
  if(isalpha(s[d])){
  string var2(1,tolower(s[d]));
  res1.append(var2);
  }
 }
 if(find(res.begin(),res.end(),res1)!=res.end()){
  cout<<"ACC"<<endl;}
 else{
  cout<<"WA"<<endl;}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}