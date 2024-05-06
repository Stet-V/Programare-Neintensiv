#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

void minimum(int A[20][20], int n, int x, int &y){
    for (int i = 1; i <= n; i++)
        if (A[x][i] < A[x][y])
            y = i;
}

int main(){
    int A[20][20], n, s = 0;
    f >> n;
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
    minimum(A, n, k, x);
    g << A[k][x];
}
