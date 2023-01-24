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
 
int main()
{
 fast;
string s;
long long int n;
cin>>s;
    const char delim = 'e';
    vector<string> out;
    tokenize(s, delim, out);
    long long int val=out[0].length()-1-out[0].find('.');
    long long int val2=stoll(out[1])-val;
    if(val2>=0){
  out[0].erase(remove(out[0].begin(), out[0].end(), '.'), out[0].end());
  while(val2!=0){
  out[0].append("0");
  val2--;}}
 else{
  long long int val21=out[0].find('.');
  out[0].insert(val21+stoll(out[1])+1,1,'.');
  out[0].erase(val21,1);
  }
  string vas(out[0].begin(),out[0].end());
  auto it=unique(vas.begin(),vas.end());
  vas.resize(distance(vas.begin(),it));
  if((out[0].length()!=1)and((out[0].find('.')!=string::npos)or(vas=="0"))){
   long long int i=out[0].length()-1;
   while((i>=0)and(out[0][i]=='0')and((out[0][i-1]=='0')or(out[0][i-1]=='.'))){
    out[0].pop_back();
    i--;}}
  if(out[0][out[0].length()-1]=='.'){
   out[0].pop_back();}
 cout<<out[0]<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}