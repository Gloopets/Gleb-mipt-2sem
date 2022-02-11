# include <iostream>
# include <cmath>

using namespace std;

string Check_stepen_dvoiki(unsigned long long int n){
    while (n % 2 == 0)
        n = n / 2;
    if (n == 1)
        return "YES";
    else
        return "NO";
}

int main()
{
    unsigned long long int n;
    cout << "Print number" << '\n';
    cin >> n;
    cout << Check_stepen_dvoiki(n) << '\n';
    return 0;
}
