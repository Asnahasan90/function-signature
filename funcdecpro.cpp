
int add(int a, int b);

int main() {
    cout << "Sum: " << add(3, 7) << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

Explanation: The function is declared before its definition to inform the compiler about its existence.

3. Function Definition

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum: " << sum(4, 6) << endl;
    return 0;
}
