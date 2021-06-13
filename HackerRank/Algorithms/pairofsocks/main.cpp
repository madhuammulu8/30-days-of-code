#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int n, i,count=0;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
       for (i = 0; i < n;) {
        if(a[i]==a[i+1]){
           count++;
           i=i+2;
        }
        else
        {
            i++;
        }
        }
    cout<<count;
   
}
