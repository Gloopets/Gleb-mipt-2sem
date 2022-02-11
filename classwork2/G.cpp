# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Print number" << '\n';
    cin >> n;
    for (int i = n-1; i > 1; i--){
        if (n % i == 0)
            cout << i << ' ';
    }
    return 0;
}
