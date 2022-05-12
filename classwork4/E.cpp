#include <iostream>
using namespace std;

void soap(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

void print(int *p, int n){
    for (int i = 0; i < n; i++){
        cout << p[i] << " ";
    }
    cout << endl;
}

void pyr_setup(int *p, int n){
    int pointer = 0;
    for (int i = 1; i < n; i++){
        pointer = i;
        while (pointer > 0){
            if(p[pointer] > p[(pointer-1)/2]) soap(p[pointer], p[(pointer-1)/2]);
            else break;
            pointer = (pointer - 1)/2;
        }
    }
}

void pyr_step(int *p, int n){
    soap(p[0], p[n-1]);
    int smol = 0, bik = 0;
    while (smol < n/2){
        if (p[smol*2 + 1] >= p[smol*2 + 2]) bik = smol*2 + 1;
        else bik = smol*2 + 2;
        soap(p[smol], p[bik]);
        smol = bik;
    }
}

void pyr_sort(int *p, int n) {
    pyr_setup(p, n);
    while (n > 1){
        pyr_step(p, n);
        n--;
    }
}

int main() {
    int n;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    pyr_sort(p, n);
    print(p, n);
    return 0;
}
