#include <iostream>
using namespace std;

int getLength(string input) { //have to hard code breaking character, just kept it '\0'
    int count = 0;

    cout << "The counter is incrementing through the array until the null char is found..." << endl; //can be any char
    //for(starting value; what needs to be true to loop; what happens every loop)
    for(int i = 0; input[i] != '\0'; i++ ) {
        cout << "count = " << count << endl;
        count++;
    }
    cout << "count = " << count << endl;

    cout << endl;
    cout << "The total number of elements minus the null char = " << count << endl;

    return count;  //n - 1 because the '\0' wasn't counted
}

int getLength(int input[]) { //have to hard code breaking character, just kept it '\0'
    int count = 0;

    cout << "The counter is incrementing through the array until the null char is found..." << endl; //can be any char
    //for(starting value; what needs to be true to loop; what happens every loop)
    for(int i = 0; input[i] != '\0'; i++ ) {
        cout << "count = " << count << endl;
        count++;
    }
    cout << "count = " << count << endl;

    cout << endl;
    cout << "The total number of elements minus the null char = " << count << endl;

    return count;  //n - 1 because the '\0' wasn't counted
}

string reverseString(string input){
    int n = getLength(input);
    int startIndex = 0;
    int endIndex = n - 1;   // this index is 1 less than the total number of chars typed in string due to
                            // startIndex being 0 and not 1

    cout << "The index for the last value = total elements - null character - 1 due to starting at zero and is: " << endIndex << endl;
    cout << "Basically, the same behavior as int and char arrays, you just NULL is added automatically with strings" << endl;

    cout << "Reversing the string results in:  " << flush;
    while (startIndex < endIndex) {
        swap(input[startIndex], input[endIndex]);
        startIndex++;
        endIndex--;
    }

     for(int i = 0; i < n ; i++) {
        cout << (char)input[i];
    }
    cout << endl;

  return input;
}

int* reverseIntArray(int input[]) {
    int n = getLength(input); //return n - 1 because '\0' is not counted
    int startIndex = 0;
    int endIndex = n - 1; //this index is 2 less than the total number of elements because
                            // 1. dropping the last element because it is a null value to end the array
                            // 2. the indexes still start at 0 so subtract another 1 to account for that

    cout << "The end index = total elements - null char - 1 due to starting at zero and is: " << endIndex << endl;

    cout << "Reversing integer array while dismissing the null char: " << flush;
    while (startIndex < endIndex) {
        swap(input[startIndex], input[endIndex]);
        startIndex++;
        endIndex--;
    }

    for(int i = 0; i < n ; i++) {
        cout << input[i] << " ";
    }
    cout << endl;
    cout << endl;

    return input;

}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, '\0'};  //have to hard code the NULL for it to work outside of strings
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', '\0'}; //handle this the same way as numbers[]
    string myString = {"dlrow olleH"};

    //sizeof only works in main
    cout << "sizeof(numbers) in main() = " << sizeof(numbers) << endl; //outputs 28 for 4 bytes * 7 indexes
    cout << "sizeof(numbers/numbers[]) in main() = " << sizeof(numbers) / sizeof(numbers[0]) << endl;
    int mainN = sizeof(numbers) / sizeof(numbers[0]);

    cout <<"Each integer in numbers[] including the last null character = " << flush;
    for(int i = 0; i < mainN; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    reverseIntArray(numbers);

    cout << "Now, let's reverse a string" << endl;
    cout << "The string input is: " << myString << endl;
    reverseString(myString);

    return 0;
}
