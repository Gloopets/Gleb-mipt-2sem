# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    int n, m = n;
    cout << "Print number" << '\n';
    cin >> n;
    for (int i = 2; i*i < m; i++){
        if (n % i == 0){
            while (n % i == 0)
                n /= i;
            cout << i << ' ';
        }
    }
    if (m == n)
        cout << n;
    return 0;
}
