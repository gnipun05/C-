#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    for(int i=num; i>=1; i--)    
    {
        for(int j=1; j<=num;j++)
        {
            if(j>=i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}