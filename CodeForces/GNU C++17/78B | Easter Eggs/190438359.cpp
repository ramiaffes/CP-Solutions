#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>hashing;
map<long long int,string>res;
 
int main()
{
fast;
long long int n;
string ch;
cin>>n;
res[0]="R";
res[1]="O";
res[2]="Y";
res[3]="G";
res[4]="B";
res[5]="I";
res[6]="V";
for(long long int i(0);i<n;i++){
 string var=res[i%4];
 ch.append(var);}
ch[ch.size()-1]='G';
ch[ch.size()-2]='I';
ch[ch.size()-3]='V';
ch[ch.size()-4]='B';
cout<<ch<<endl;
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}