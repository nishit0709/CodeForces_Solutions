#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n, count=0;
    cin >> m >> n;
    int l = m > n ? m:n;
    int b = m < n ? m:n;
    if(l%2 == 0)
        count = l/2*b;
    else
        count = (l-1)/2*b+b/2;
    cout << count << endl;
    return 0;
}