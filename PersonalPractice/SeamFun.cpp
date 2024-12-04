#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, m;
    long long f;
    
    cin >> a >> b;
    
    m = min(a, b);
    
    f = tgamma((long long) m + 1);
    
    cout << f;

    return 0;
}
