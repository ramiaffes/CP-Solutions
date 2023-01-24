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
bool comp (string i,string j) { return (i.length()>j.length()); }
 auto isEmptyOrBlank = [](const std::string &s) {
        return s.find_first_not_of(" \t") == std::string::npos;
    };
int main()
{
 fast;
long long int n;
cin>>n;
vector<vector<string>>res(n);
map<string,vector<string>>m;
map<string,vector<string>>m1;
for(long long int i(0);i<n;i++){
 string s;
 vector<string>out;
 while(s.length()==0){
 getline(cin,s);}
const char delim =' ';
tokenize(s, delim, out);
 res[i]=out;}
for(long long int i(0);i<n;i++){
 for(long long int j(2);j<res[i].size();j++){
 m[res[i][0]].push_back(res[i][j]);
 }
 }
for(auto v:m){
 map<string,bool>vis;
 string ch=v.first;
 sort(m[ch].begin(),m[ch].end(),comp);
 for(long long int i(0);i<m[ch].size();i++){
  if(vis[m[ch][i]]==0){
   m1[ch].push_back(m[ch][i]);
  for(long long int j(0);j<m[ch][i].length();j++){
   string ch2=m[ch][i].substr(j,m[ch][i].length()-j);
   vis[ch2]=1;} }}
 }
cout<<m1.size()<<endl;
for(auto v:m1){
      m1[v.first].erase(remove_if(m1[v.first].begin(), m1[v.first].end(), isEmptyOrBlank), m1[v.first].end());
 cout<<v.first<<" "<<m1[v.first].size()<<" ";
 for(auto d:m1[v.first])cout<<d<<" ";
 cout<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}