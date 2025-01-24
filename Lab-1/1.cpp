#include<iostream>
using namespace std;

int main() {
    int size = 5;
    float arr[5];
    for (int i = 0; i < size; i++) cin >> arr[i];
    
    float *ptr = arr;
    float max = *ptr, secondMax;
    
    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > max) {
            secondMax = max;
            max = *ptr;
        } else if (*ptr > secondMax && *ptr != max) {
            secondMax = *ptr;
        }
    }
    cout << "Second highest value is: " << secondMax << endl;
    return 0;
}
