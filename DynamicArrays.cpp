#include <iostream>
#include <vector>
#include <algorithm>  // sort()
using namespace std;

int main() {
    string s = "abc";
    cout << s << endl;

    string s2;
    s2 = "def";
    cout << s2 << endl;


    string *sp = new string;

    *sp = "mno";
    cout << sp << endl;   // prints the memory address
    cout << *sp << endl;  // *dereference operator prints mno

    delete sp;

    vector<string> v;
    v.push_back(s);
    v.push_back("hello");
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
        sort(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }

    v.clear();

    string s3;
    // note that cin.getline(name, size, delimiter) is used
    // arrays other than strings because the size of strings
    // is not known prior to input.  use the code below to input
    // strings that don't stop at the first space,tab,endline
    //getline(cin,s3);
    //cout << s3 << endl;

    //strings can be manipulated like char arrays
    s3 = "abcabc";
    cout << s3[1] << endl;
    s3[0] = 'd';
    cout << s3 << endl;

    // strings concatenate with just the + operator in order
    string s4 = "";
    s4 += s2 + s3;
    cout << "string a = " << s2 << endl;
    cout << "string b = :" << s3 << endl;
    cout << "string a + b = " << s4 << endl;
    cout << s4.size() << endl;
    cout << s4.length() << endl;

    // .substr will give everything from the passed in index on
    // remember to start from zero
    cout << s4.substr(3) << endl;

    // give the substring starting at index 3 and giving 3 chars
    // not that .substr does not change the original string
    cout << s4.substr(3,5) << endl;
    string s5 = s4.substr(3,5);
    cout << s5 << endl;

    //returns the index where first "abc" starts
    string s6 = "defabcabcabc";
    cout << s6.find("abc") << endl;

    int a = 123;
    string s7 = to_string(a);
    cout << s7 << endl;
    s7[1] = '4';
    cout << s7 << endl;

    s7.push_back('5');  //push_back just like vector
    cout << s7 << endl;

    a = atoi(s7.c_str());
    cout << a << endl;

    return 0;
}
