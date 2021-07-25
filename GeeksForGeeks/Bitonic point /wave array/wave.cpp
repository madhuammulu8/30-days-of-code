#include <iostream>

using namespace std;

int main()
{
   int a[5] ={1,2,3,4,5};
   int temp;
   for(int i=0;i<4;i=i+2)
   {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
   }
for(int i=0;i<5;i++){
              cout<<a[i];
}

}
