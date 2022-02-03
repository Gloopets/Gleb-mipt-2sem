# include <iostream>
# include <cmath>

using namespace std;

int NOD(int n, int m){
    int l;
    while (n % m != 0) {
        l = m;
        m = n % m;
        n = l;
    }
    return m;
}

int NOK(int n, int m){
    return n * m / NOD(n,m);
}

int main()
{
    int n, m;
    cout << "Print numbers" << '\n';
    cin >> n >> m;
    cout << NOK(n, m) << '\n';
    return 0;
}
