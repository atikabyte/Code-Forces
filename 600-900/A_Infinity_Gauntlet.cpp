#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<string, string>> v;

    v.push_back({"purple", "Power"});
    v.push_back({"green", "Time"});
    v.push_back({"blue", "Space"});
    v.push_back({"orange", "Soul"});
    v.push_back({"red", "Reality"});
    v.push_back({"yellow", "Mind"});

    int n, count = 0;
    cin >> n;
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count ++;
    }
    cout << 6 - count << endl;
    
    for (int i = 0; i < 6; i++)
    {
        bool match = false; 
        for (int j = 0; j < n; j++)
        {
            if (v[i].first == arr[j]) 
            {
                match = true;
                break;
            }
        }
        if(match == false) cout << v[i].second << endl;
    }

    return 0;
}
