#include <iostream>

using namespace std;

bool compare(string& str1, string& str2){
    int len1 = str1.length();
    int len2 = str2.length();
    int len = len1 < len2 ? len1 : len2;

    for(int i=0; i<len; i++){
        if(str1[i] < str2[i]){
            return true;
        }
        else if(str1[i] > str2[i]){
            return false;
        }
    }

    return len1 < len2;
}

void sort(string* str, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(!compare(str[j], str[j+1])){
                string tmp = str[j];
                str[j] = str[j+1];
                str[j+1] = tmp;
            }
        }
    }
}

int main(){
    int n;
    string str[100];

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> str[i];
    }

    sort(str, n);

    for(int i=0; i<n; i++){
        cout << str[i] << endl;
    }

    return 0;
}