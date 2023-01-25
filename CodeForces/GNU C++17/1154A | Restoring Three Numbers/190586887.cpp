#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int x1,x2,x3,x4;
 cin>>x1>>x2>>x3>>x4;
 int arr[]={x1,x2,x3,x4};
 sort(arr,arr+4);
 cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2];
 
 
 return 0;
}