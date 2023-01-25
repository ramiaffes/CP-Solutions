#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char ,long long int >hashing;
map<char ,long long int >hashing1;
bool checkperfectsquare(  long int n)
{
    if (ceill((long double)sqrtl(n)) == floorl((long double)sqrtl(n))) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
fast;
long int n;
 long int som=0;
cin>>n;
 long int som1=0;
for(long int i(1);i<=n;i++){
 som=0;
 for( long int j(1);j<(i);j++){
  if((checkperfectsquare(i*i-j*j))){som++;}}if((i*i)%2==0){
 som1+=((som-2)/2+1);}
else{
 som1+=(som/2);}
}
cout<<som1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}