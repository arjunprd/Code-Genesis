#include<bits/stdc++.h>

using namespace std;

int main()
{

    /** Arjun Prasad **/
    /** arjunblog009@gmail.com **/

    char s[10] = "ABCDEFGH";


    for(int i = 7 ; i >=0 ; i--)
    {

        for(int j = i ; j<8 ; j++)
        {
            cout<<s[j];
        }
        cout<<"\n";

    }

return 0;
}
