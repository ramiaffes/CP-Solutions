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
 
string rh;
getline(cin,rh);
long long int n=stoll(rh);
string s1;
string s2;
vector<long long int>vect2(3);
map<string,vector<long long int>>m;
vector<string>vec(n);
const char delim =' ';
 const char delim2 ='-';
for(long long int i(0);i<n;i++){vector<string>out1;
 getline(cin,s1);
tokenize(s1, delim, out1);
m[out1[1]]=vect2;
vec[i]=out1[1];
for(long long int j(0);j<(stoll(out1[0]));j++){vector<string>out3;
getline(cin,s2);
tokenize(s2, delim2, out3);map<char,bool>vis;
vector<long long int>out2(out3.size());
for(long long int d(0);d<out2.size();d++){
 out2[d]=stoll(out3[d]);}
if((is_sorted(out2.begin(),out2.end()))and(out2[0]==out2[out2.size()-1])and(out3[0][0]==out3[0][1])){
m[out1[1]][0]++;}
else{
 bool test1=true;
 for(long long int d(0);d<out2.size();d++){
  for(long long int rm(0);rm<(out3[d].length()-1);rm++){
   if((out3[d][rm+1]-'0')>=(out3[d][rm]-'0')){test1=false;break;}
   }
  if(test1==false)break;
  if(d<out2.size()-1){
   if((out3[d][out3[d].length()-1]-'0')<=(out3[d+1][0]-'0')){test1=false;break;}}
   }
 if(test1==false){
 m[out1[1]][2]++;}
 else{
  m[out1[1]][1]++;
 
 }
}
 
}
 }
long long int ans1=0;
long long int ans2=0;
long long int ans3=0;
for(auto v:m){
 ans1=max(ans1,(v.second)[0]);
 ans2=max(ans2,(v.second)[1]);
 ans3=max(ans3,(v.second)[2]);
 }
vector<string>res1;
vector<string>res2;
vector<string>res3;
for(auto v:vec){
 if((m[v])[0]==ans1){
  res1.push_back(v);
  }
 if((m[v])[1]==ans2){
  res2.push_back(v);
  }
 if((m[v])[2]==ans3){
  res3.push_back(v);
  }
 }
string sr1=join(res1, ", ");
string sr2=join(res2, ", ");
string sr3=join(res3, ", ");
cout<<"If you want to call a taxi, you should call: "<<sr1<<"."<<endl;
cout<<"If you want to order a pizza, you should call: "<<sr2<<"."<<endl;
cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<sr3<<"."<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}