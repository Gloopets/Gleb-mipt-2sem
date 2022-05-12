# include <iostream>
# include <cmath>

using namespace std;
int const N = 16;

int Poisk_bi(int a[16], int s) {
    int right = 15, left = 0, deg = 4;
    while (deg > 1) {
        if (a[(right + left) / 2] < s)
            left = (right + left) / 2 + 1;
        else
            right = (right + left) / 2;
        deg--;
    }
    return right;
}

int main()
{
    int num;
    cin >> num;
    int Massiv[N];
    for (int i = 0; i < N; i++){
        cin >> Massiv[i];
    }
    cout << Poisk_bi(Massiv, num);
    return 0;
}
