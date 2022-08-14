#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    int s[n];
    for(int i=0; i<n; i++) {
        cin >> s[i];
    }
    cin >> q;

    int ans = 0;
    for(int i=0; i<q; i++) {
        int key;
        cin >> key;
        for(int j=0; j<n; j++) {
            if(s[j] == key) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}