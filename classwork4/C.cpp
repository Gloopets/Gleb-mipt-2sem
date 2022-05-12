#include <iostream>
using namespace std;

int func (){
    static int a = 0;
    a ++;
    return a;
}
int main() {
    cout << func();
    cout << func();
    cout << func();
    cout << func();
    cout << func();
    cout << func();
    cout << func();
    return 0;
}
