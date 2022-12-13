#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<double> ar;
    ar.resize(n);
    for (int i=0; i<n; i++) {
        cout << "Enter the value of element " << i << ": ";
        cin >> ar[i];
    }

    double mean = 0;
    for (double e: ar) {
        mean += e/n;
    }

    cout << "Mean = " << mean << endl;

    double variance = 0;
    for (double e: ar) {
        variance += ( (e - mean) * (e - mean) ) / n;
    }

    cout << "Variance = " << variance << endl
         << "Standard Deviation = " << sqrt(variance) << endl;

    return 0;
}
