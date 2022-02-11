# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    int n;
    double res = 0;
    cout << "Print number" << '\n';
    cin >> n;
    for (double i = 1; i <= n; i++){
        res += 1/(i*i);
    }
    cout << res;
    return 0;
}
