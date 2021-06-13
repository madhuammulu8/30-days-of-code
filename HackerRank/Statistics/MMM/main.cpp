//
//  main.cpp
//  Mean Median Mode
//
//  Created by Madhu ammulu on 03/05/21.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // insert code here...
    int a[] ={1,2,3,4,5,5};
    int n = sizeof(a)/sizeof(a[0]);
    int i;
    float sum=0,median;
    for(i=0;i<n;i++){
        sum = sum+a[i];
    }
    float mean = (sum/n);
    //median
    if (n%2!=0)
    {
        median = (a[n/2]/2);
    }
    else
    {
        median = ((a[((n-1)/2)]+a[((n+1)/2)])/2);
    }
    
    cout<<fixed<<setprecision(2)<<mean<<"\n";
    cout<<fixed<<setprecision(2)<<median<<"\n";
    return 0;
    

}

