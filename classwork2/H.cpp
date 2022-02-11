# include <iostream>
# include <cmath>

using namespace std;

int power(int n, int deg){
    int m = n;
    for (int i = 0; i < deg; i++)
        m*= n;
    return m;
}

int Delenie(int n, int m){
    return (n - n % m) / m;
}

int Palindrom(int n){
    int dim = 0, m = n;
    while(m % 10 != 0){
        dim++;
        m /= 10;
    }
    int l = n;
    m = 0;
    while (dim > 0){
        m += (l % 10)*power(10, dim);
        l = Delenie(l, 10);
        dim--;
    }
    m /= 100;
    if (m == n)
        return 1;
    else
        return m;
}

int main()
{
    int dim, n;
    cout << "Print numbers" << '\n';
    cin >> dim >> n;
    cout << Palindrom(n) << '\n';
    return 0;
}
