#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
const  long long int M=1e4;
int main()
{
 fast; 
 long long int n,m,k1,k2;
 cin>>n;
 cin>>k1;
 deque<long long int>vect1(k1);
 for(long long int i(0);i<k1;i++)cin>>vect1[i];
 reverse(vect1.begin(),vect1.end());
 
 cin>>k2;
 deque<long long int>vect2(k2);
 for(long long int i(0);i<k2;i++)cin>>vect2[i];
 reverse(vect2.begin(),vect2.end());
 stack<long long int>st1(vect1);
 stack<long long int>st2(vect2);
 long long int som=0;
 while((not(st1.empty()))and(not(st2.empty()))){
  if(som>(n*n*n))break;
  long long int val1=st1.top();
  long long int val2=st2.top();
  if(val1>val2){
   som++;
   vect2.pop_back();
   vect1.pop_back();
   vect1.push_front(val2);
   vect1.push_front(val1);
   }
  else{som++;
   vect1.pop_back();
   vect2.pop_back();
   vect2.push_front(val1);
   vect2.push_front(val2);
   }
      stack<long long int>st3(vect1);
 stack<long long int>st4(vect2);
 st1=st3;
 st2=st4;
      }
      if(st2.empty()){
     cout<<(som)<<" "<<1<<endl;}
     else if(st1.empty()){
      cout<<(som)<<" "<<2<<endl;}
     else{
      cout<<-1<<endl;}
 
 
 
 
 
 
 
  
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}