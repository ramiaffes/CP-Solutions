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
getline(cin,s);
getline(cin,s1);
long long int n=stoll(s1);
const char delim=' ';
map<string,long long int>m;
for(long long int i(0);i<n;i++){vector<string>out;
 getline(cin,s2);
 tokenize(s2,delim,out);
 if(out[1]=="likes"){
  
  out[2].erase(out[2].find("'"));if(m[out[0]]==0)m[out[0]]+=1;
  if(m[out[2]]==0)m[out[2]]+=1;
  if((out[0]==s)){
   m[out[2]]+=5;}
  if((out[2]==s)){
   m[out[0]]+=5;}
  }
 else if(out[1]=="commented"){
  out[3].erase(out[3].find("'"));
  if(m[out[0]]==0)m[out[0]]+=1;
  if(m[out[3]]==0)m[out[3]]+=1;
  if((out[0]==s)){
   m[out[3]]+=10;}
  if((out[3]==s)){
   m[out[0]]+=10;}
  }
 else{
  
  out[3].erase(out[3].find("'"));if(m[out[0]]==0)m[out[0]]+=1;
  if(m[out[3]]==0)m[out[3]]+=1;
  if((out[0]==s)){
   m[out[3]]+=15;}
  if((out[3]==s)){
   m[out[0]]+=15;}
  }
 }
 vector<pair<string,long long int>>v;
 for(auto v1:m){
  pair<string,long long int>pe=make_pair(v1.first,v1.second);
  v.push_back(pe);}
 struct sort_pred {
    bool operator()(const pair<string,long long int> &left, const pair<string,long long int> &right) {
        return left.second > right.second;
    }
};
sort(v.begin(), v.end(), sort_pred());
for(long long int m(0);m<v.size();m++){
 long long int m1=m;
 while((m1<v.size())and(v[m].second==v[m1].second)){
  m1++;}
 sort(v.begin()+m,v.begin()+m1);}
for(auto v1:v){if(v1.first!=s)cout<<v1.first<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}