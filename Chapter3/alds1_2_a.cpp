#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int A[n];
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int count = 0;
    for(int i=0; i<n; i++) {
        for(int j=n-1; j>i; j--) {
            if(A[j] < A[j-1]) {
                int tmp = A[j-1];
                A[j-1] = A[j];
                A[j] = tmp;
                count++;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(i<n-1){
            cout << A[i] << " ";
        }else{
            cout << A[i];
        }
    }
    cout << endl;
    cout << count << endl;

    return 0;
}