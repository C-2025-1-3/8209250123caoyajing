#include <iostream>
#include <cstring>
using namespace std;

int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) return -1;
    for (int i = 0; i <= len2 - len1; i++) {
        int j = 0;
        while (j < len1 && s2[i + j] == s1[j]) {
            j++;
        }
        if (j == len1) return i;
    }
    return -1;
}

int main() {
    char s1[80], s2[80];
    cout << "请输入子串s1：";
    cin >> s1;
    cout << "请输入字符串s2：";
    cin >> s2;
    int pos = indexof(s1, s2);
    if (pos != -1) {
        cout << "子串在字符串中的下标为：" << pos << endl;
    }
    else {
        cout << "不是子串" << endl;
    }
    return 0;
}