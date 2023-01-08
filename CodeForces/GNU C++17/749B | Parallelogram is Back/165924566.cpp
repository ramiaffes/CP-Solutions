#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
 
int main()
{
 fast; 
 long long int x1,x2,x3,y1,y2,y3;
 cin>>x1>>y1;
 cin>>x2>>y2;
 cin>>x3>>y3;
 set<pair<long long int,long long int>>se;
 se.insert(make_pair((x3+x2-x1),(y3+y2-y1)));
 se.insert(make_pair((x1+x2-x3),(y1+y2-y3)));
 se.insert(make_pair((x1+x3-x2),(y1+y3-y2)));
 cout<<se.size()<<endl;
 for(auto v:se)cout<<v.first<<" "<<v.second<<endl;
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}
 
 