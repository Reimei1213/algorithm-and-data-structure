#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int r[n];
    for(int i = 0; i < n; i++) {
        cin >> r[i];
    }

    int max_profit = -r[0];
    int max_profit_standard = r[0];
    for(int i=1; i<n; i++){
        if(max_profit < r[i] - max_profit_standard) {
            max_profit = r[i] - max_profit_standard;
        }
        if(max_profit_standard > r[i]) {
            max_profit_standard = r[i];
        }
    }

    std::cout << max_profit << endl;

    return 0;
}