#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=0;
void func(vector<long long int>vect){}
int main()
{
 fast;
 
 long long int n; ifstream I("input.txt");
  ofstream O("output.txt");
 string s;
 I>>n;
I>>s;
vector<pair<long long int,long long int>>res;
if(s[n/2-1]=='L'){
    res.push_back(make_pair(n/2,n/2+2));
}
else{
    res.push_back(make_pair(n/2+2,n/2));
}
long long int i=0;
long long int j=n-1;
while(i<j){
    if(i==(n/2-1)){
        i++;continue;
    }
    if(j==(n/2+1)){
        j--;
        continue;
    }
    if(s[i]=='L')
    res.push_back(make_pair(i+1,j+1));
    else{
        res.push_back(make_pair(j+1,i+1));
    }
    j--;
    i++;
}
for(auto v:res)O<<v.first<<" "<<v.second<<endl;
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}