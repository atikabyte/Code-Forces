#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, k;
    cin>>n>>k;

    double need = n*15;
    double required = ceil((2.0*n)/k) + ceil((8.0*n)/k) + ceil((5.0*n)/k);
    long long result = required;

    cout<<result;
    
    
    return 0;
}
