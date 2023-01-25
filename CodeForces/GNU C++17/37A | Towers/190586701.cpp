#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int n;
 cin>>n;
 vecteur vect(n);
 for (int i(0);i<n;i++){
  cin>>vect[i];
  }
 sort(vect.begin(),vect.end());
 int max(1);
 int som(1);
 int result(1);
 for (int i(1);i<n;i++){
  if (vect[i-1]==vect[i]){
   som++;}
  
  else{som=1;
   result++;}
     if (som>max){
   max=som;}
}
cout<<max<<" "<<result;
 return 0;
}