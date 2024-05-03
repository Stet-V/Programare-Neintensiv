#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

float sum(float A[20][20], int n, int x){
    float y = 0;
    for (int i = 1; i <= n; i++)
        y = y + A[x][i];
    return y;
}

int main(){
    int n;
    float A[20][20], s = 0;
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << A[i][j] << " ";
            if (i == j) s = s + A[i][j];
        }
        cout << endl;
    }
    cout << s / n << endl;
    int k;
    cin >> k;
    g << sum(A, n, k);
}