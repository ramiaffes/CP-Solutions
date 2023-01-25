#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t,a,b,c,m;
 string s;
 cin>>t;
 while(t--){
  cin>>a>>b>>c>>m;
    if (m >(a-1 + b-1 + c-1))
        {
            cout << "NO"<<endl;
        }
        else{
   vector<long long int>vect(3);
   vect[0]=a;
   vect[1]=b;
   vect[2]=c;
   sort(vect.begin(),vect.end());
   long long int res=vect[2]-vect[1]-vect[0]-1;
   cout<<((res-m)<=0?"YES":"NO")<<endl;}
  
  
 
  
  
   
  }
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}