#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
void Tokenize(const string& str,vector<string>& tokens, const string& delimiters)
{
    string::size_type lastPos = 0;
    string::size_type pos = str.find_first_of(delimiters, lastPos);
 
    while (string::npos != pos && string::npos != lastPos)
    {
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        lastPos = pos+1;
        pos = str.find_first_of(delimiters, lastPos);
    }
 
    tokens.push_back(str.substr(lastPos, pos - lastPos));
}
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
getline(cin,s);
const string delimiters =",";
vector<string> out1;
Tokenize(s,out1,",");
for(long long int i(0);i<out1.size();i++){
  const char delim = ' ';
    vector<string> out2;
    tokenize(out1[i], delim, out2);
    out1[i]=join(out2," ");
   if(out1[i].length()>=3){
 for(long long int j(out1[i].length()-2);j>=1;j--){
   if((out1[i][j]==' ')and((isdigit(out1[i][j-1])==0)or(isdigit(out1[i][j+1])==0))){
    out1[i].erase(j,1);
    }
   }
if(out1[i][out1[i].length()-1]==' ')out1[i].pop_back();
if(out1[i][0]==' ')out1[i].erase(0,1);
}
}
string str=join(out1, ", ");
for(long long int i(1);i<str.length();i++){
 if(isdigit(str[i-1])and(str[i]=='.')){
  str.insert(i," ");}}
long long int som=1;
for(long long int i(1);i<str.length();i++){
 if((str[i-1]=='.')and(str[i]=='.')){
  if(som%3==0){
  str.insert(i," ");}
  som++;
  }
 else{som=1;}}
if(str.length()>=2){
if((str[str.length()-1]==' ')and(str[str.length()-2]==',')){
 str.pop_back();}}
cout<<str<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}