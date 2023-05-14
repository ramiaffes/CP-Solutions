#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
 
int main()
{
 fast; 
 long long int n,t,l,r;
 cin>>t;
 while(t--){
     cin>>n;
     vector<pair<int,int>>res;
     for(int i=0;i<n;i++){
         cin>>l>>r;
         res.push_back(make_pair(l,r));
     }
     vector<pair<int,int>>res1=res;
    sort(res.begin(),res.end());
    vector<int>res3(n);
    res3[0]=res[0].second;
    for(int i=1;i<n;i++){
        res3[i]=res3[i-1];
        res3[i]=max(res3[i],res[i].second);
    }
    int val1=-1;
    for(int i=0;i<(n-1);i++){
        if(res3[i]<res[i+1].first){
            val1=i;
        }
    }
   if(val1==-1){cout<<-1<<endl;}
   else{map<pair<int,int>,int>res2;
       for(int i=0;i<n;i++){
           if(i<=val1){
               res2[res[i]]=1;
           }
           else res2[res[i]]=2;
       }
      for(int i=0;i<n;i++){
          cout<<res2[res1[i]]<< " ";
      }
      cout<<endl;
   }
    
     
 }
  
return 0;}