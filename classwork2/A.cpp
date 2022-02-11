# include <iostream>
# include <cmath>

using namespace std;

string Check_year(int n){
    if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        return "YES";
    else
        return "NO";
}

int main()
{
    int n;
    cout << "Print year" << '\n';
    cin >> n;
    cout << Check_year(n) << '\n';
    return 0;
}
