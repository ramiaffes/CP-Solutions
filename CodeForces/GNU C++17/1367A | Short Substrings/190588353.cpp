#include <iostream>
#include <string>
#include <vector>
using namespace std;
string fonction(string a){
 string res("");
 for (size_t i(0);i<a.size();i+=2){
  res+=a[i];
  }
  return res+a.back();
 }
int main(){
 int t;
 cin>>t;
 vector<string> vect(t);
 for (int i(0);i<t;i++){
  cin>>vect[i];}
 for (auto valeur:vect){
  cout<<fonction(valeur)<<endl;}
 return 0;}