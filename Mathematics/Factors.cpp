#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Number" << endl;
    int num;
    cin >> num;
    cout << "Factors of " << num << " are: " << endl;
    for (int i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            cout << i << endl;
        }
    }
    return 0;
}