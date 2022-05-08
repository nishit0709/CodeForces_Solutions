#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    cin >> n;
    while(n--){
        int s = 3, t ,sum=0;
        while(s--){
            cin >> t;
            sum += t;
        }
        if(sum >=2)
            ++count;
    }
    cout << count << endl;
    return 0;
}