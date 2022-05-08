#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n, m, a, res;
    cin >> n >> m >> a;
    res = n/a;
    
    if(n%a > 0)
        ++res;
    if(m%a > 0)
        res *= (1+m/a);
    else
        res *= m/a;
    
    cout << res;
    return 0;
}