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
string s;
cin>>s;
    const char delim = ',';
    vector<string> out1;
    
    
    tokenize(s, delim, out1);vector<long long int>out(out1.size());
    for(long long int i(0);i<out1.size();i++){
  out[i]=stoll(out1[i]);
  }long long int n=out.size();
 sort(out.begin(),out.end());
 long long int ans1=out[0];
 long long int ans2=out[0];
 vector<string>res;
 for(long long int i(1);i<(n);i++){
  if(out[i]<=(out[i-1]+1)){
   ans1=max(ans1,out[i]);
   ans2=min(ans2,out[i]);}
  else{
   if(ans1==ans2){
    string sh=to_string(ans1);
    res.push_back(sh);}
   else{
    string sh=to_string(ans1);
    string sh1=to_string(ans2);
    string resl;
    resl.append(sh1);
    resl.append("-");
    resl.append(sh);
    res.push_back(resl);
    }
   ans1=out[i];
   ans2=out[i];}}
 if(ans1==ans2){
    string sh=to_string(ans1);
    res.push_back(sh);}
   else{
    string sh=to_string(ans1);
    string sh1=to_string(ans2);
    string resl;
    resl.append(sh1);
    resl.append("-");
    resl.append(sh);
    res.push_back(resl);
    }
 cout<<join(res, ",")<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}