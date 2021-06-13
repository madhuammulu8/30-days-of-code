#include <iostream>

using namespace std;

int main()
{
    int n;
        cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>35){
      if(a[i]%5 == 4){
         a[i] = a[i]+1;
            cout<<a[i]<<"\n";
      }
       else if (a[i]%5 == 3){
           a[i] = a[i]+2;
           cout<<a[i]<<"\n";    }
   else
   {
       cout<<a[i]<<"\n";
   }
      }
      else {cout<<a[i]<<"\n";    }
   
    }
}
     
