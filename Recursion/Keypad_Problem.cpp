/* Input 2 and 3 in format --> 23
will give output as:
ad
ae
af
bd
be
bf
cd
ce
cf */

#include <bits/stdc++.h>
using namespace std;

string phoneArr[]={"", "", "abc","def","ghi","jkl","mno","pqrs","tuv", "wxyz"};

void Phone(string str, string ans)
{
    if(str.size()==0){
        cout << ans << endl;
        return;
    }

    string code=phoneArr[str[0]-'0'];
    string remaining = str.substr(1);

    for(int i=0; i<code.length(); i++)
    {
        Phone(remaining, ans+code[i]);
    }
    
    return;
}

int main()
{
    string str;
    cin >> str;

    Phone(str,"");

    return 0;
}