#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long double calculateDistance(pair<long long int,long long  int> x, pair<long long int, long long int> y)
{
    return sqrtl(powl(x.first - y.first, 2) +
                powl(x.second - y.second, 2));
}
bool collinear(long long int ax, long long int ay, long long int bx, long long int by, long long int cx, long long int cy) {
  return (ay -  by) * (ax - cx) == (ay - cy) * (ax - bx);
}
 
int main()
{
 fast;
 
 long long int ax,bx,cx,ay,by,cy;
 cin>>ax>>ay>>bx>>by>>cx>>cy;
 long double val=calculateDistance(make_pair(ax,ay),make_pair(bx,by));
 long double val1=calculateDistance(make_pair(cx,cy),make_pair(bx,by));
 if((val!=val1)or( collinear(ax,  ay,  bx,  by,  cx,  cy)==true)){
  cout<<"NO"<<endl;}
 else{
  cout<<"YES"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}