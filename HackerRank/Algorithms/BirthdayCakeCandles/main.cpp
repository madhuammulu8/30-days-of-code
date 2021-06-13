#include <iostream>

using namespace std;

int main() {
    int n,count=0;
    cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   int sum = a[n-1];
   for(int i=0;i<n;i++)
   {
   if(sum==a[i]){
       count++;
   }}
   cout<<count;
   return 0;
}
