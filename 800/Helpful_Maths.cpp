#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = (s.size()+1)/2;
    int arr[l];
    for(int i=0, t=0; i<s.size(); i+=2)
        arr[t++] = s[i] - '0';
    sort(arr, arr+l);
    for(int i=0; i<(l-1); i++)
        cout << arr[i] << "+";
    cout << arr[l-1];
    return 0;
}