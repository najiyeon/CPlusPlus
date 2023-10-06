#include <iostream>

using namespace std;

void swapInt(int& n1, int& n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapString(string& s1, string& s2){
    string temp = s1;
    s1 = s2;
    s2 = temp;
}

int main(){
    // Take two integers from the user and store them to two int variables, n1, n2.
    int n1, n2;
    cin >> n1 >> n2;

    // Take two strings from the user and store them to two string variables, s1, s2.
    string s1, s2;
    cin >> s1 >> s2;

    // Print the values of n1, n2, s1, s2.
    cout << "n1: " << n1 << ", " << "n2: " << n2 << ", " <<  "s1: " << s1 << ", " << "s2: " << s2 << endl;

    // Swap the value by calling swapInt and swapString.
    swapInt(n1, n2);
    swapString(s1, s2);

    // Print the swapped values.
    cout << "n1: " << n1 << ", " << "n2: " << n2 << ", " <<  "s1: " << s1 << ", " << "s2: " << s2 << endl;

    return 0;
}