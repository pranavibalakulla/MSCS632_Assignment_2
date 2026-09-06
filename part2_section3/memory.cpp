// C++: dynamic allocation showing manual memory management
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 1000000;

    // Manually allocate an array on the heap with 'new'.
    int* numbers = new int[SIZE];
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = i + 1;
    }

    long long sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    cout << "C++: allocated an array of " << SIZE << " integers" << endl;
    cout << "C++: sum = " << sum << endl;

    // The programmer MUST free the memory manually.
    delete[] numbers;
    numbers = nullptr;   // avoid a dangling pointer by resetting to null
    cout << "C++: memory released manually with delete[]" << endl;
    cout << "C++: forgetting delete[] would cause a memory leak" << endl;
    return 0;
}
