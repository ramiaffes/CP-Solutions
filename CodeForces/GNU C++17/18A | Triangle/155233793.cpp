#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
double distance(int x1, int y1, int x2, int y2)
{
    return pow(x2 - x1, 2) +
                pow(y2 - y1, 2); 
}
int main()
{
 fast;
 
 int x1,y1,x2,x3,y2,y3;
 cin>>x1>>y1>>x2>>y2>>x3>>y3;
 vector<double>res(3);
 res[0]=distance(x1,y1,x2,y2);
 res[1]=distance(x3,y3,x2,y2);
 res[2]=distance(x3,y3,x1,y1);
 sort(res.begin(),res.end()); 
 if((res[0]+res[1])==res[2]){
  cout<<"RIGHT"<<endl;
  }
else{
 vector<int>vect(4);
 vector<int>vect1(4);
 vect[0]=1;
 vect1[0]=0;
 vect[1]=-1;
 vect1[1]=0;
 vect[2]=0;
 vect1[2]=1;
 vect[3]=0;
 vect1[3]=-1;
 bool test=false;
 for(long long int i(0);i<4;i++){
   vector<double>res(3);
 res[0]=distance(x1+vect[i],y1+vect1[i],x2,y2);
 res[1]=distance(x3,y3,x2,y2);
 res[2]=distance(x3,y3,x1+vect[i],y1+vect1[i]);
 sort(res.begin(),res.end()); 
 if(((sqrt(res[0])+sqrt(res[1]))>sqrt(res[2]))and((sqrt(res[1])+sqrt(res[2]))>sqrt(res[0]))and((sqrt(res[0])+sqrt(res[2]))>sqrt(res[1]))and((res[0]+res[1])==res[2])){
  cout<<"ALMOST"<<endl;
  test=true;
  break;
  }
 
  }
if(test==false){
 for(long long int i(0);i<4;i++){
   vector<double>res(3);
 res[0]=distance(x1,y1,x2,y2);
 res[1]=distance(x3+vect[i],y3+vect1[i],x2,y2);
 res[2]=distance(x3+vect[i],y3+vect1[i],x1,y1);
 sort(res.begin(),res.end()); 
 if(((sqrt(res[0])+sqrt(res[1]))>sqrt(res[2]))and((sqrt(res[1])+sqrt(res[2]))>sqrt(res[0]))and((sqrt(res[0])+sqrt(res[2]))>sqrt(res[1]))and((res[0]+res[1])==res[2])){
  cout<<"ALMOST"<<endl;
  test=true;
  break;
  }}}
if(test==false){
 for(long long int i(0);i<4;i++){
   vector<double>res(3);
 res[0]=distance(x1,y1,x2+vect[i],y2+vect1[i]);
 res[1]=distance(x3,y3,x2+vect[i],y2+vect1[i]);
 res[2]=distance(x3,y3,x1,y1);
 sort(res.begin(),res.end()); 
 if(((sqrt(res[0])+sqrt(res[1]))>sqrt(res[2]))and((sqrt(res[1])+sqrt(res[2]))>sqrt(res[0]))and((sqrt(res[0])+sqrt(res[2]))>sqrt(res[1]))and((res[0]+res[1])==res[2])){
  cout<<"ALMOST"<<endl;
  test=true;
  break;
  }}}
if(test==false){cout<<"NEITHER"<<endl;}
 }
 
 
 
 
 
 
 
 
 
 
return 0;}  