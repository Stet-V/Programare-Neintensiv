#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int perfectsquare(int n){
    int x = 0;
    while (x * x <= n) {
        if (x * x == n) {
            return 1;
        }
        x++;
    }
    return 0;
}

int main(){
    int n, s = 0;
    f >> n;
    int A[n][n];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << A[i][j] << " ";
            if (A[i][j] % 2 == 0) s = s + A[i][j];
        }
        cout << endl;
    }
    cout << s << endl;
    int k, x = 1;
    cin >> k;
    for (int i = 1; i <= n; i++)
        if (A[k][i] < A[k][x])
            x = i;
    g << A[k][x];
}