# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    int n, maks = 0, cnt = 0;
    cout << "Print numbers" << '\n';
    cin >> n;
    if (n == 0){
        cout << 0;
        return 0;
    }
    else{
        maks = n;
        cnt++;
    }
    while(cin >> n){
        if (n == 0)
            break;
        if (n == maks)
            cnt++;
        if (n > maks){
            maks = n;
            cnt = 1;
        }
    }
    cout << cnt << '\n';
    return 0;
}
