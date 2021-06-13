//
//  main.cpp
//  weightedmean
//
//  Created by Madhu ammulu on 05/05/21.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N;
    float weight =0;
    int sum =0;
    cin>>N;
    int X[N], Z[N];
    for(int i=0;i<N;i++){
       cin>>X[i];
    }
    for(int i=0;i<N;i++){
      cin>>Z[i];
    }
    for (int i=0;i<N;i++)
    {
        sum=sum+Z[i];
        weight=weight+(X[i]*Z[i]);
    }
    float result = weight/sum;
    cout<<fixed<<setprecision(1)<<result;
    
}
