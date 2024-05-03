#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int find(int A[20][20], int n, int x){
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (A[i][j] == x) return 1;
    return 0;
}

int main(){
    int A[20][20], n;
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cout << A[i][j] << " ";
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
    if (find(A, n, k) == 0) cout << "NU";
        else cout << "DA";
}