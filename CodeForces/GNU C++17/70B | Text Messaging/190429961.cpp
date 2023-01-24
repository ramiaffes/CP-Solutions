#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;vector<string> out;
map<long long int,bool>vis;
string s;
void tokenize( const char delim)
{
    size_t start;
    size_t end = 0;
 
    while ((start = s.find_first_not_of(delim, end)) != string::npos)
    {
        end = s.find(delim, start);
        out.push_back(s.substr(start, end - start));
    }
}
 
int main()
{
 fast;
string n;
getline(cin,n);
long long int val=stoll(n);
const char delim1 = '.';
const char delim2 = '?';
const char delim3 = '!';
getline(cin,s);
tokenize(delim1);
vector<string>out1(out.begin(),out.end());
out.clear();
for(auto v:out1){
 s=v;
 tokenize(delim2);
 }
vector<string>out2(out.begin(),out.end());
out.clear();
for(auto v:out2){
 s=v;
 tokenize(delim3);
 }
long long int som=out[0].length()+1;
long long int res=1;
if(som>val){
 test=false;}
else{
for(long long int i(1);i<(out.size());i++){
 if((som+1+out[i].length())<=val){
  som+=(1+out[i].length());}
 else{
  if((out[i].length())>val){test=false;break;}
  res++;
  som=out[i].length();
  }
 
 }}
if(test==false){
 cout<<"Impossible" <<endl;}
else{
 cout<<res<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}