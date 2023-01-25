#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 int arr[]={a,b,c};
 sort(arr,arr+3);
 cout<<(max(d-(arr[2]-arr[1]),0)+max(-(arr[1]-arr[0])+d,0));
 
 
 
 return 0;
}
 