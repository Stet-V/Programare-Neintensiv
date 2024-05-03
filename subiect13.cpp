#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int divisors(int n){
    int x = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0)
            x = x + i;
    }
    return x;
}

int main(){
    int n, s = 0;
    f >> n;
    int A[n][n];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    int x = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << A[i][j] << " ";
            if ((i + j) == (n + 1))
                s = s + A[i][j];
            if (A[i][j] == divisors(A[i][j])){
                g << A[i][j] << " ";
                x = 1;
            }
        }
        cout << endl;
    }
    cout << s;
    if (x == 0) g << "NU EXISTA NUMERE PERFECTE";
}