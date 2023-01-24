#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
void tokenize(string const &str, const string delim,
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
 
string ch;
map<string,long long int>vis;
cin>>ch;
map<long long int ,long long int>m;
m[1]=31;
m[2]=28;
m[3]=31;
m[4]=30;
m[5]=31;
m[6]=30;
m[7]=31;
m[8]=31;
m[9]=30;
m[10]=31;
m[11]=30;
m[12]=31;
 
vector<string>out1;
const string delim ="--";
tokenize(ch, delim, out1);
for(auto v:out1){
 vector<string>out2;
 const string delim1 ="-";
 tokenize(v, delim1, out2);
 if(out2.size()>=3){
 for(long long int i(0);i<=(out2.size()-3);i++){
  vector<string>vect2(3);
  if(out2[i].length()<2)continue;
  vect2[0]=out2[i].substr(out2[i].length()-2,2);
  vect2[1]=out2[i+1];
  if(out2[i+2].length()<4)continue;
  vect2[2]=out2[i+2].substr(0,4);
  
  if((stoll(vect2[0])>0)and((stoll(vect2[1])>=1)and(stoll(vect2[1])<=12))and((stoll(vect2[2])>=2013)and(stoll(vect2[2])<=2015))and(stoll(vect2[0])<=m[stoll(vect2[1])])){
   string str=join(vect2,"-");
   vis[str]++;}}
 }}
long long int ans=0;
for(auto v:vis){
 ans=max(ans,v.second);
 }
for(auto v:vis){
 if(v.second==ans){
  cout<<v.first<<endl;break;}}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}