#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for(int i=0; i<s1.size(); i++){
        int t = s1[i] - s2[i];
        if(t != 0){
            cout << (t/abs(t));
            exit(0);
        }
    }
    cout << 0;
    return 0;
}