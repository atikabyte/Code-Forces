#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    vector<int> arr;

    for(int i = 0; i < n ; i++)
    {
        cin >> arr1[i];
    }
    for(int i = 0; i < m ; i++)
    {
        cin >> arr2[i];
    }

    for(int i = 0; i < n ; i ++)
    {
        for(int j = 0; j < m ; j ++)
        {
            if(arr1[i] == arr2[j])
            {
                arr.push_back(arr2[j]);
            }

        }    
    }

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
