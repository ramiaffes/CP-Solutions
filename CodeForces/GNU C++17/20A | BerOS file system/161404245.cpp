#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<long long int ,vector<long long int>>adj;
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
 long long int n=s.length();
 vector<string>out;
 tokenize(s,'/',out);
 string s1;
 if(s[0]=='/')s1.append("/");
 s1.append(join(out,"/"));
cout<<s1<<endl;
 
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}