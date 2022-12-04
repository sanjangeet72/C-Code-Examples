#include <iostream>

using namespace std;

class Adder {
    int a;
    int b;

public:

    void store(int a, int b) {
        this->a = a;
        this->b = b;
    }

    int retrieve() {
        return a + b;
    }

};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Adder adder;
    adder.store(a, b);

    cout << "Sum = " << adder.retrieve() << endl;

    return 0;
}
