// C++: version with a deliberate memory leak (delete[] omitted)
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 1000000;
    int* numbers = new int[SIZE];   // allocated on the heap
    for (int i = 0; i < SIZE; i++) numbers[i] = i + 1;

    long long sum = 0;
    for (int i = 0; i < SIZE; i++) sum += numbers[i];
    cout << "C++ (leaky): sum = " << sum << endl;

    // delete[] numbers;   <-- intentionally missing: this leaks 4 MB
    return 0;
}
