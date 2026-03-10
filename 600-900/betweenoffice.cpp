#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n];
    int f = 0;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 'S')
        {
            s++;
        }
        else
        {
            f++;
        }
    }

    
        if( arr [0] == 'S' && n == 2)
        {
            cout<<"YES";
            return 0;
        }
        else if( s<f)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    

    
   
    return 0;
}
