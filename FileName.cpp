#include "MyString.h"
#include <iostream>
using namespace std

int main() {
    MyString defaultStr;
    cout << "default str: " << defaultStr.getStr() << endl;
    cout << "size: " << defaultStr.getSize() << endl;

    MyString customSizeStr(10);
    cout << "custom size str: " << customSizeStr.getStr() << endl;
    cout << "size: " << customSizeStr.getSize() << endl;

    MyString initializedStr(true);
    cout << "initialized str: " << initializedStr.getStr() << endl;
    cout << "size: " << initializedStr.getSize() << endl;

    MyString copiedStr = initializedStr;
    cout << "copied str: " << copiedStr.getStr() << endl;
    cout << "size: " << copiedStr.getSize() << endl;

    MyString anotherStr;
    anotherStr.MyStrcpy(initializedStr);
    cout << "anotherStr after copy: " << anotherStr.getStr() << endl;

    cout << "strlen:" << initializedStr.MyStrLen() << endl;

    char symbol;
    cout << "symbol to search: ";
    cin >> symbol;

    int index = initializedStr.MyChr(symbol);
    cout << index << endl;
  

    return 0;
}
