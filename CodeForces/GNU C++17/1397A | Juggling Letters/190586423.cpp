#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast;
 long long int t;
 long long int n;
 string ch;
 string ph;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>ch;
  ph=ch;
  for(int i(1);i<n;i++){
   cin>>ch;
   ph+=ch;}
   if((ph.size()%n==0)==false){
    cout<<"No"<<endl;}
   else{
  sort(ph.begin(),ph.end());
  int c=ph.size();
  int som=0;
  bool test=true;
  char chara=ph[0];
  for(int i(0);i<c;i++){
   if (ph[i]==chara){
    som++;}
   else{
    if(som%n!=0){
     test=false;
     break;}
    som=1;
    chara=ph[i];
    }
    }
   cout<<(test?"Yes":"No")<<endl;
  
 }
  
  
 }
 
  
 
        
 return 0;
}