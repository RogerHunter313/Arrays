#include <iostream>
using namespace std;

int main() {
    int numbers[2] = {1, 2};
    //could just make two seperate variables

    cout << numbers[0] << " " << numbers[1] << endl;

    int temp = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = temp;

      cout << numbers[0] << " " << numbers[1] << endl;

    //method without using a temp variable
    int a = 2;
    int b = 5;

    cout << a << " " << b << endl;

    a = a^b;  // a = a XOR b = 2 XOR 5
    b = a^b;  // b = a XOR b = a XOR b XOR b = a
    a = a^b; // a = a XOR b = a XOR b XOR a = b

    cout << a << " " << b << endl;

    swap(a,b);

    cout << a << " " << b << endl;

    return 0;
}
