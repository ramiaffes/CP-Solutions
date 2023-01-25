#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,bool>destroyed;
map<long long int ,long long int>parent;
int main()
{
 fast;
 long long int n,d;
 cin>>n;
 cin>>d;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int som=0;
 for(long long int j(n-1);j>=2;j--){
  auto it=lower_bound(vect.begin(),vect.end(),(vect[j]-d));
  if(it==vect.end()){
   break;
  }
  long long int index=it-vect.begin();
  if(index<=(j-2)){
   som+=(j-1-index)*(j-index)/2;}
  }
 cout<<som<<endl;
  
 
 
 
 
 
return 0;}