#include <iostream>

using namespace std;

int main()
{
    int n, count =0;
    cin>>n;
    string s;
    cin>>s;
    char ch[n + 1];
    strcpy(ch, s.c_str());
    for(int i=0;i<n;i++)
    {
        if((!(*ch >='A' && *ch <='Z' )) && (!(*ch >='a' && *ch <='z' )) && (!(*ch >=0 && *ch <=9 )) ){
            count++;
        cout<<count;
    }
    
    }

}
