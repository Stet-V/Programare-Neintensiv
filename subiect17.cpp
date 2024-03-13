#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

void filler(float s){
    g << s;
}

int main(){
    int n;
    float s;
    f >> n;
    float A[n][n];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << s / n << endl;
    int k;
    cin >> k;
    s = 0;
    for (int i = 1; i <= n; i++)
        s = s + A[k][i];
    filler(s);
}