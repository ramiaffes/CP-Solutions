#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<long long int ,vector<long long int>>adj;
bool checkperfectsquare(long long int n)
{
     
    // If ceil and floor are equal
    // the number is a perfect
    // square
    if (ceil((double)sqrtl(n)) == floor((double)sqrtl(n))) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
 fast;
 long long int n;
 cin>>n;
 long long int ans=5*1e18;
 for(long long int i(1);i<=(9*18);i++){
  if(checkperfectsquare(i*i+4*n)==true){
   long long int val=sqrtl(i*i+4*n)-i;
   if(val%2==0){
    string s=to_string(val/2);
    long long int som=0;
    for(long long int i(0);i<s.length();i++){
     som+=s[i]-'0';}
    if(som==i){ans=min(ans,val/2);}
    }}}
 if(ans==5*1e18)cout<<-1<<endl;
 else cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}