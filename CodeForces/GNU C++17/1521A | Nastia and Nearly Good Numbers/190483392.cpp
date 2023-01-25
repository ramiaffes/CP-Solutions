#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  a,b;
 long long int t;
 cin>>t;
 while(t--){
 cin>>a>>b;
 if((b==1))cout<<"NO"<<endl;
 else if(b==2){cout<<"YES"<<endl;
  cout<<(a)<<" "<<(3*a)<<" "<<(4*a)<<endl;
  }
 else{ cout<<"YES"<<endl;
  cout<<(a*b+a)<<" "<<(a*2*b-a)<<" "<<(3*b*a)<<endl;
}
 
}
 
 
 
 
 
return 0;}