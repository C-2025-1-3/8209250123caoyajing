#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    for (int i = 0; i < len; i++) {
        char c = toupper(hexString[i]);
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            val = 10 + (c - 'A');
        }
        else {
            return 0;
        }
        result = result * 16 + val;
    }
    return result;
}

int main() {
    char hex[80];
    cout << "请输入16进制字符串：";
    cin >> hex;
    int dec = parseHex(hex);
    cout << "转换后的10进制数：" << dec << endl;
    return 0;
}#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    for (int i = 0; i < len; i++) {
        char c = toupper(hexString[i]);
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            val = 10 + (c - 'A');
        }
        else {
            return 0;
        }
        result = result * 16 + val;
    }
    return result;
}

int main() {
    char hex[80];
    cout << "请输入16进制字符串：";
    cin >> hex;
    int dec = parseHex(hex);
    cout << "转换后的10进制数：" << dec << endl;
    return 0;
}