#include<bits/stdc++.h>

using namespace std;

int main()
{
    /** Arjun Prasad **/
    /** arjunblog009@gmail.com **/

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n ; i++)
            cin>>arr[i];

    int Fmin = 1000000;
    int Smin = 1000000;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]< Fmin)
        {
            Smin  = Fmin;
            Fmin  = arr[i];
        }
        else
        if(arr[i] < Smin)
        {
            Smin = arr[i];
        }
    }

   if(Fmin==Smin)
        cout<<INT_MIN;
    else
        cout<<Smin;



return 0;
}
