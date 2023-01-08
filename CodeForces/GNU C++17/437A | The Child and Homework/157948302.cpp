#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
void remove(vector<long long int> &v,long long int target)
{
    v.erase(remove(v.begin(), v.end(), target), v.end());
}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s1,s2,s3,s4;
 cin>>s1;
 cin>>s2;
 cin>>s3;
 cin>>s4;
 vector<long long int>vect(4);
 vect[0]=s1.length()-2;
 vect[1]=s2.length()-2;
 vect[2]=s3.length()-2;
 vect[3]=s4.length()-2;
 vector<long long int>vect1(vect.begin(),vect.end());
 sort(vect1.begin(),vect1.end());
 vector<long long int>vect2(vect1.begin(),vect1.end());
 for(long long int i(0);i<4;i++){
  vect2[i]=vect1[i]*2;}
 char val='1';
 for(long long int i(0);i<4;i++){
  auto it=upper_bound(vect2.begin(),vect2.end(),vect[i]);
  if(it==(vect2.end()-1)){if((val=='1')or(val==(65+i))){val=(65+i);}
   else{val='C';}}}
 for(long long int i(0);i<4;i++){
  auto it=lower_bound(vect1.begin(),vect1.end(),2*vect[i]);
  if(it==(vect1.begin()+1)){if((val=='1')or(val==(65+i))){val=(65+i);}else{val='C';}}}
 if(val=='1')cout<<'C'<<endl;
 else
 cout<<val<<endl;
 
 
    
    
 
    
    
 
    
    
return 0;}