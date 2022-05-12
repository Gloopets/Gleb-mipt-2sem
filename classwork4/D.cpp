#include <iostream>
using namespace std;

void swap(int &x, int &y){
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

void quick_sort(int *p, int n) {
    if (n <= 1) return;
    int mid = p[0];
    int left = 1, right = n;
    while (left < right){

        while (p[left] <= mid && right > left){
            left++;
        }
        while (p[right - 1] >= mid && right > left){
            right--;
        }
        if(left >= right) {
            break;
        }
        swap(p[left], p[right - 1]);
    }
    swap(p[0], p[left - 1]);
    quick_sort(p, left - 1);
    quick_sort(p + left, n - left);
}


int main() {
    int n;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    quick_sort(p, n);
    print(p, n);
    return 0;
}
