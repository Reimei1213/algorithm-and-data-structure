#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    int n, q, sum=0, max_time=0;
    cin >> n >> q;

    string name[n];
    int time[n];
    for(int i=0; i<n; i++) {
        cin >> name[i];
        cin >> time[i];
        max_time += time[i];
    }

    int idx = 0;
    int num = 0;
    while(sum < max_time) {
        if(time[idx] == 0) {
            if(++idx == n) {
                idx = 0;
            }
            continue;
        }

        if(time[idx] <= q) {
            num++;
            sum += time[idx];
            cout << name[idx] << ' ' << sum << endl;
            time[idx] = 0;
        } else {
            time[idx] -= q;
            sum += q;
        }

        if(++idx == n) {
            idx = 0;
        }
    }
    
    return 0;
}