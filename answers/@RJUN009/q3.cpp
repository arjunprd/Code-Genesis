#include<bits/stdc++.h>

using namespace std;

int main()
{


    /** Arjun Prasad **/
    /** arjunblog009@gmail.com **/

    int c = 2;
for(int j = 1 ; j<=5 ; j+=2)
{
    // first half of the pattern

    for(int i = 1 ; i<=c;i++)
    {
        cout<<" ";
    }
    for(int k = 1 ; k<=j ; k++)
    cout<<"*";

    cout<<"\n";
    c--;
}
c = 1;
for(int j = 3 ; j>=1 ; j-=2)
{

    //second half of pattern

    for(int i = 1 ; i<=c;i++)
    {
        cout<<" ";
    }
    for(int k = 1 ; k<=j ; k++)
    cout<<"*";

    cout<<"\n";
    c++;
}




return 0;

}
