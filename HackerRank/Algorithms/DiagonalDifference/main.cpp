#include <iostream>

using namespace std;

int main()
{
    int n, sum=0,sum1=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
         cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        sum += a[i][i];
    }
            int k = n-1;
    for(int j=0;j<n;j++)
    {
       sum1 += a[k][j];
         k--;
    }cout<<abs(sum-sum1);
}
