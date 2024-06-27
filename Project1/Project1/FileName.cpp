#include <iostream>
#include <Windows.h>

#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
bool Perevirka(const char* str) {
    int a = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            a++;
        }
        else if (str[i] == ')') {
            a--;
        }
    }
    if (a==0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    char str[50];
    cin.getline(str, 50);
    
}