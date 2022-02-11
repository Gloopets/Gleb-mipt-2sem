# include <iostream>
# include <cmath>

using namespace std;

string Prime_or_not(int n){
    for (int i = 2; i*i < n; i++){
        if (n % i == 0)
            return "NO";
    }
    return "YES";
}

int main()
{
    int n;
    cout << "Print number" << '\n';
    cin >> n;
    cout << Prime_or_not(n) << '\n';
    return 0;
}
