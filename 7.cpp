#include <iostream>
using namespace std;

int main() {
    int sum = 0, d;
    
    for (int c = 0; c < 10; c++) {
        cout << "Enter number: " << endl;
        cin >> d;
        sum += d;
    }
    
    cout << "Sum is " << sum << endl;
    return 0;
}
