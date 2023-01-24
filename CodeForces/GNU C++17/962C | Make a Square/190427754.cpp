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
 string n;
 cin>>n;
 long long int tot=1<<n.length();
 long long int som=0;
 long long int ans=10;
 for(long long int mask=0;mask<tot;mask++){
  string res;
  som=0;
  for(long long int i=0;i<n.length();i++){
   long long int f=1<<i;
   if(mask&f){
    string var(1,n[i]);
    res.append(var);
    }
   else{som++;}
   }
  if((res[0]!='0')and(not (res.empty()))){
  long long int val=stoll(res);
   if(checkperfectsquare(val)){ans=min(ans,som);}}}
 if(ans==10) cout<<-1<<endl;
 else{
  cout<<ans<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}