#include <iostream>
#include <string>

using namespace std;

int main() {
    // Take two strings from the user. Assume theses strings do not contain spaces.
    string str1, str2, str3;
    cin >> str1 >> str2;

    str3 = str1 + str2;

    // Print the concatenated string.
    cout << str3 << endl;

    // Print the first letter of the concatenated string.
    cout << str3[0] << endl;

    // Print the last letter of the concatenated string.
    cout << str3[str3.length() - 1] << endl;
    
    return 0;
}