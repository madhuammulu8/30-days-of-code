#include <iostream>

using namespace std;


int main() {
   long a[5];
   for(int i=0;i<5;i++)
   {
       cin>>a[i];
   }
   int sum=0;
   long total[5];
        total[0]=a[1]+a[2]+a[3]+a[4];
        total[1]=a[0]+a[2]+a[3]+a[4];
        total[2]=a[0]+a[1]+a[3]+a[4];
        total[3]=a[0]+a[1]+a[2]+a[4];
        total[4]=a[0]+a[1]+a[2]+a[3];

  sort(total,total+5);
  cout<<total[0]<<" "<<total[4];
  
   return 0;
}
