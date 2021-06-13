//
//  main.cpp
//  standard Deviation
//
//  Created by Madhu ammulu on 05/05/21.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    int n;
    float mean=0,sum=0;
    cout<<"enter array size=>";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mean = mean+arr[i];
            }
    float count = mean/n;
    for(int i=0;i<n;i++){
        sum += ((arr[i]-count)*(arr[i]-count));
        
    }
    cout<<"sum= "<<sum<<"\n";
    float sd = sqrt(sum/n);
    cout<<fixed<<setprecision(1)<<"standard Deviation="<<sd;
}
