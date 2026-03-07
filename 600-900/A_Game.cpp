#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n ; i ++)
    {
        cin >> arr[i];
    }

    int count;
    for(count = 1; count < n; count++)
    {
        if(count % 2 != 0)
        {
            auto it = max_element(arr.begin(), arr.end());
            arr.erase(it);
        }
        else
        {
            auto it = min_element(arr.begin(), arr.end());
            arr.erase(it);
        }
    }

    cout << arr[0];

    return 0;
}
