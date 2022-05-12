# include <iostream>
# include <cmath>

using namespace std;
int const N = 7;

int main()
{
    int tmp;
    int Massiv[N];
    cout << "Massiv:";
    for (int i = 0; i < N; i++){
        cin >> Massiv[i];
    }
    cout << '\n';
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (Massiv[j] > Massiv[j + 1]) {
                tmp = Massiv[j];
                Massiv[j] = Massiv[j + 1];
                Massiv[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < N; i++){
        cout << Massiv[i] << ' ';
    }
    return 0;
}
