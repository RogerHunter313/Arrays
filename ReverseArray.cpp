#include <iostream>
#include <vector>
using namespace std;
//Create a function that reverses a string:
//"Hi My name is Andrei" should be :
// "ierdnA si eman iH"

string reverse(string input);

int main() {
	string input;

	input = "Hi My Name is Andrei";
	cout << reverse(input);

	return 0;
}

string reverse(string input) {

	if (input.length() < 2 || typeid(input) != typeid(string)) {
		return "hmm that is not good";
	}

	int start = 0;
	int last = input.length()-1;

	while(start <= last) { //indexes shouldn't cross over
        swap(input[start], input[last] );
        start++;
        last--;
	}

	return input;

}
