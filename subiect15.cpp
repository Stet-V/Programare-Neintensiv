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
    int n;
    f >> n;
    int A[n][n];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    int k, x = 0;
    cin >> k;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (A[i][j] == k) x = 1;
            if (i == n) A[i][j] = 0;
            g << A[i][j] << " ";
        }
        g << endl;
    }
    if (x == 0) cout << "NU";
        else cout << "DA";
}