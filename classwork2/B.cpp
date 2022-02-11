# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    int n, cnt = 0;
    cout << "Print numbers" << '\n';
    while(cin >> n){
        if (n == 0)
            break;
        if (n % 2 == 0)
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
