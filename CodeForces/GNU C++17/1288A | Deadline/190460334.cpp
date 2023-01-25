#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int func(long long int x,long long int d)
{
 if(d%(x+1)==0)
    return x+d/(x+1);
    else return (x+d/(x+1)+1);
}
int binarySearch( long long int l, long long int r,long long  int x,long long int d)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (func(mid,d) == x)
            return mid;
  
        if (func(mid,d) > x)
            return binarySearch( l, mid - 1, x,d);
  
        return binarySearch( mid + 1, r, x,d);
    }
    return -1;
}
  
int main()
{
 fast; 
 long long int t,n,d;
  cin>>t;
  while(t--){
   cin>>n>>d;
   long long  int l=0;
   long long int r=n;
   if(binarySearch( l,  r,  n,d)==-1){
    if((func(l,d)<n)or(func(r,d)<n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
  else{
   cout<<"YES"<<endl;}
   
   }
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}