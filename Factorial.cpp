# include <iostream>
# include <cmath>

using namespace std;

long long int Fac(int n){
    long long int fac = 1;
    for (int i = 1; i <= n; i++){
        fac *= i;
    }
    return fac;
}

int main()
{
    int n;
    cout << "Print number" << '\n';
    cin >> n;
    cout << Fac(n) << '\n';
    return 0;
}
