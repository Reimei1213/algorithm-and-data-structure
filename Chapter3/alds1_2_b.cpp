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
        int minj = i;
        for(int j=i; j<n; j++) {
            if(A[j] < A[minj]) {
                minj = j;
            }
        }
        if(A[i] > A[minj]) {
            count++;
            swap(A[i], A[minj]);
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