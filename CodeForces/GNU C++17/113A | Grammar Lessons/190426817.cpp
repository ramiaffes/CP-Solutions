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
string s,t;
getline(cin,s);
const char delim =' ';
vector<string> out1;
tokenize(s, delim, out1);
if(out1.size()==1){
 if(out1[0].length()>=3){
  if(out1[0].substr(out1[0].length()-3,3)=="etr"){cout<<"YES"<<endl;}
  else if (out1[0].length()>=4){
   if(out1[0].substr(out1[0].length()-4,4)=="lios"){cout<<"YES"<<endl;}
   else if(out1[0].substr(out1[0].length()-4,4)=="etra"){cout<<"YES"<<endl;}
   else if(out1[0].length()>=5){
    if(out1[0].substr(out1[0].length()-5,5)=="liala"){cout<<"YES"<<endl;}
    else if(out1[0].length()>=6){
     if(out1[0].substr(out1[0].length()-6,6)=="initis"){cout<<"YES"<<endl;}
     else  if(out1[0].substr(out1[0].length()-6,6)=="inites"){cout<<"YES"<<endl;}
     else{
      cout<<"NO"<<endl;}
     }
    else{cout<<"NO"<<endl;}
    }
   else{cout<<"NO"<<endl;}
   }
  else{cout<<"NO"<<endl;}
 
 }
else{cout<<"NO"<<endl;}}
else{
long long int i=0;
bool test=true;
if(out1[i].length()>=4){
while((i<out1.size())and(out1[i].substr(out1[i].length()-4,4)=="lios")){
 i++;
 if(i<out1.size()){
 if(out1[i].length()<4){break;}}
}}
if(i==out1.size()){test=false;}
if(test==true){
if(out1[i].length()>=3){ 
if(out1[i].substr(out1[i].length()-3,3)!="etr"){
 test=false;}}
else{test=false;}}
if(test==true){
 i++;
 if(out1[i].length()>=6){
 while((i<out1.size())and(out1[i].substr(out1[i].length()-6,6)=="initis")){
 i++;
 if(i<out1.size()){
 if(out1[i].length()<6)break;}}
}
if(i<out1.size()){
 test=false;}
 }
if(test==true){
 cout<<"YES"<<endl;}
else{
long long int i1=0;
bool test1=true;
if(out1[i1].length()>=5){
while((i1<out1.size())and(out1[i1].substr(out1[i1].length()-5,5)=="liala")){
 i1++;
 
 if(i1<out1.size()){
 if(out1[i1].length()<5){break;}}
}}
if(i1==out1.size()){test1=false;}
if(test1==true){
if(out1[i1].length()>=4){ 
if(out1[i1].substr(out1[i1].length()-4,4)!="etra"){
 test1=false;}}
else{test1=false;}}
 
if(test1==true){
 i1++;
 if(out1[i1].length()>=6){
 while((i1<out1.size())and(out1[i1].substr(out1[i1].length()-6,6)=="inites")){
 i1++;
 
 if(i1<out1.size()){
 if(out1[i1].length()<6)break;}}
}
if(i1<out1.size()){
 test1=false;}
 }
if(test1==true){
 cout<<"YES"<<endl;}
else{
 cout<<"NO"<<endl;}
 }}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}