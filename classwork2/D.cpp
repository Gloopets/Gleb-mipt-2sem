# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    int n, cnt = 0, flag = 0;
    cout << "Print numbers" << '\n';
    while(cin >> n){
        if (n == 0){
            flag++;
            break;
        }
        if (n % 2 == 0){
            cnt = n;
            break;
        }
    }
    while(flag == 0 && cin >> n){
        if (n == 0)
            break;
        if (n % 2 == 0 && n > cnt){
            cnt = n;
        }
    }
    cout << cnt << '\n';
    return 0;
}
