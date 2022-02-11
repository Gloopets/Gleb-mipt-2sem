# include <iostream>
# include <cmath>

using namespace std;

int Eq_Sol (double a, double b, double c){
    if (a != 0){
        if (b*b - 4*a*c < 0) return 0;
        else if (b*b - 4*a*c == 0) return 1;
        else return 2;
    } else return -1;
}

int main()
{
    double a, b, c;
    cout << "Print constants:" << '\n';
    cin >> a >> b >> c;
    if (Eq_Sol(a,b,c) == 0) return 0;
    else if (Eq_Sol(a,b,c) == 1){
        cout << (-b / 2 / a) << '\n';
    } else if (Eq_Sol(a,b,c) == 2){
        cout << (-b - sqrt(b*b - 4*a*c)) / (2*a) << ' ' << (-b + sqrt(b*b - 4*a*c)) / (2*a);
    } else {
        if(b != 0){
            cout << -c/b << '\n';
        } else return 0;
    }
}
