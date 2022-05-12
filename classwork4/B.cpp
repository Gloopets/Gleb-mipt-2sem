#include <iostream>
using namespace std;

void print (int *p, int n){
    for (int i = 0; i < n; i++)
        cout << p[i] << ' ';
}

void print_reverse (int *p, int n){
    for (int i = n-1; i >= 0; i--)
        cout << p[i] << ' ';
}

int main() {
    int n;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    print(p, n);
    cout << endl;
    print_reverse(p, n);
    return 0;
}
