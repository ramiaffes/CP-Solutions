#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
long long int l[1001][1001] = { 0 };
 
void initialize()
{
 
    // 0C0 = 1
    l[0][0] = 1;
    for (long long int i = 1; i < 1001; i++) {
        // Set every nCr = 1 where r = 0
        l[i][0] = 1;
        for (long long int j = 1; j < i + 1; j++) {
 
            // Value for the current cell of Pascal's triangle
            l[i][j] = (l[i - 1][j - 1] + l[i - 1][j]);
        }
    }
}
 
// Function to return the value of nCr
long long int nCr(long long int n,long long  int r)
{
    // Return nCr
    return l[n][r];
}
 
int main()
{
 fast; 
 long long int t,n,x,y;
 cin>>n;
 initialize();
 cout<<n*(n-1)*(n-2)*(n-3)*(n-4)*nCr(n,5)<<endl;
 
 
 
 
 
 
 
return 0;}