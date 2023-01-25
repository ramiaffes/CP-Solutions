#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast;
 int a,b,c;
 cin>>a>>b>>c;
 int arr []={a,b,c};
 sort(arr,arr+3);
 if (arr[2]-arr[1]-arr[0]<0){
  cout<<0;}
 else{ cout<<arr[2]-arr[1]-arr[0]+1;}
 
 
  
  
 
        
 return 0;
}