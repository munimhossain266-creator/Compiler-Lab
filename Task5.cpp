#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double arr[n];
    double sum = 0;

    cout << "Enter " << n << " elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum+arr[i];
    }

    double average = sum / n;

    cout << "Average value = " << average << endl;

    return 0;
}

