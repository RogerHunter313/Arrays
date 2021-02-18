#include <iostream>
using namespace std;

void printAllPref(string myString) {
    for(int e = 0; myString[e] != '\0'; e++) {
        for(int s = 0; s < e + 1; s++) {
            cout << myString[s];
        }
        cout << endl;
    }

}

void printAllSuff(string myString) {
    int element = -1; //don't initialize to zero..will give a null
    int length = 0;

   // cout << myString[length] << " " << length << endl;
    while (element != '\0'){
        length++;  // increment before finding \0 to avoid n+1
        element = myString[length];
    }

    for(int i = length - 1; i >= 0; i--) { // -1 so first line isn't blank
        for (int e = 0; e < i;  e++) { // leave room for char
            cout << " ";
        }
        for (int s = i; s < length; s++) { // begin with print one char
            cout << myString[s];
        }
        cout << endl;
    }
}

int main() {
    string myString = "abcdefg";
    cout << myString << endl;

    cout << "printing all prefixes..." << endl;
    printAllPref(myString);
    cout << endl;
    cout << "printing all suffixes..." << endl;
    printAllSuff(myString);

    return 0;
}
