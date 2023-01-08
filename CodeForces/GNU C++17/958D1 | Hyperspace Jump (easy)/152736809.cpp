#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
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
 long long int m;
 cin>>m;
 vector<string>vect(m);
 for(long long int i(0);i<m;i++)cin>>vect[i];
 map<long double,vector<long long int>>hashing;
 for(long long int i(0);i<m;i++){
  vector<string>out;
         vector<string>out2;
  tokenize(vect[i],'/',out);
  out[0].erase(0,1);
  out[0].pop_back();
  tokenize(out[0],'+',out2);
  out2.push_back(out[1]);
  long double val=stoll(out2[0])+stoll(out2[1]);
  val/=stoll(out2[2]);
  hashing[val].push_back(i);}
 vector<long long int>vect1(m);
 for(auto v:hashing){
  for(long long int i(0);i<hashing[v.first].size();i++){
   vect1[hashing[v.first][i]]=hashing[v.first].size();}}
 for(long long int i(0);i<m;i++){
  cout<<vect1[i]<<" ";}
 
return 0;}