#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    cin >> n;
    int lec, prac, totalpen, totalpencil, k;
    int pen, pencils;

    for(int i = 0; i < n ; i++)
    {
        cin >> lec >> prac >> totalpen >> totalpencil >> k;
        pen = (lec + totalpen - 1) / totalpen;
        pencils = (prac + totalpencil - 1) / totalpencil;
        
        if(pen+pencils > k)
        {
            cout << "-1";
        }
        else
        {
            cout << pen << " " << pencils;
        }
        cout << "\n";
    }

    return 0;
}
