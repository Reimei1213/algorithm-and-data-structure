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
        
        int left = 0;
        int right = n-1;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(s[mid] == key) {
                ans++;
                break;
            } else if(s[mid] < key) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}