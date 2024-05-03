#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int perfectsquare(int n){
    int x = 0;
    while (x * x <= n) {
        if (x * x == n)
            return 1;
        x++;
    }
    return 0;
}

int main(){
    int n;
    f >> n;
    int A[n][n];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    int x = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (j == n) A[i][j] = 2;
            cout << A[i][j] << " ";
            if (perfectsquare(A[i][j]) == 1){
                g << A[i][j] << " ";
                x = 1;
            }
        }
        cout << endl;
    }
    if (x == 0) cout << "NU EXISTA PATRATE PERFECTE";
}