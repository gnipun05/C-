#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test>0)
    {
        ll int a,b, x,y;
        ll int gcd=0;
        cin >> a >> b;
        if(a+b<=1 || (a==1 && b==1))
        {
            cout << "-1" << endl;
            test--;
            continue;
        }

        int M=max(a,b) , m=min(a,b);
        x=M, y=m;

        while(y<a+b)
        {
            x--;
            y++;
            if(((x%2!=0 && y%2==0 ) || (y%2!=0 && x%2==0 ) || (x%2!=0 && y%2!=0)) && ((x%3!=0 && y%3==0 ) || (y%3!=0 && x%3==0 ) || (x%3!=0 && y%3!=0)) && ((x%5!=0 && y%5==0 ) || (y%5!=0 && x%5==0 ) || (x%5!=0 && y%5!=0)) && ((x%7!=0 && y%7==0 ) || (y%7!=0 && x%7==0 )  || (x%7!=0 && y%7!=0)) && ((x%11!=0 && y%11==0 ) || (y%11!=0 && x%11==0 ) || (x%11!=0 && y%11!=0)) && ((x%13!=0 && y%13==0 ) || (y%13!=0 && x%13==0 ) || (x%13!=0 && y%13!=0)) && ((x%17!=0 && y%17==0 ) || (y%17!=0 && x%17==0 ) || (x%17!=0 && y%17!=0)) && ((x%19!=0 && y%19==0 ) || (y%19!=0 && x%19==0 ) || (x%19!=0 && y%19!=0)) && ((x%23!=0 && y%23==0 ) || (y%23!=0 && x%23==0 ) || (x%23!=0 && y%23!=0)) && ((x%29!=0 && y%29==0 ) || (y%29!=0 && x%29==0 )  || (x%29!=0 && y%29!=0)) && ((x%31!=0 && y%31==0 ) || (y%31!=0 && x%31==0 ) || (x%31!=0 && y%31!=0)) && ((x%37!=0 && y%37==0 ) || (y%37!=0 && x%37==0 ) || (x%37!=0 && y%37!=0)) && ((x%41!=0 && y%41==0 ) || (y%41!=0 && x%41==0 ) || (x%41!=0 && y%41!=0)) && ((x%43!=0 && y%43==0 ) || (y%43!=0 && x%43==0 )  || (x%43!=0 && y%43!=0)) )
            {
            if(x!=m&& y!=M)
            {
                gcd=__gcd(x,y);
                if(gcd==1)
                break;
            }
            }
        }

        if(gcd==1)
        cout << x << " " << y << endl;
        else
        cout << "-1" << endl;
        test--;
    }
    return 0;
}