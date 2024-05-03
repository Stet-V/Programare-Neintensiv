#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

void bubble(float A[], int p1, int p2){
    int x = 1;
    while (x != 0){
        x = 0;
        for (int i = p1; i < p2; i++){
            if (A[i] > A[i + 1]){
                float t = A[i];
                A[i] = A[i + 1];
                A[i + 1] = t;
                x = 1;
            }
        }
    }
}

int main(){
    int n, k = 0;
    double s = 0;
    f >> n;
    float A[n];
    for (int i = 1; i <= n; i++){
        f >> A[i];
        if (A[i] < 0){
            s = s + A[i];
            k++;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
    if (k == 0) cout << 0;
        else cout << fixed << setprecision(2) << s / k;
    cout << endl;
    int p1, p2;
    cin >> p1 >> p2;
    bubble(A, p1, p2);
    for (int i = 1; i <= n; i++){
        g << A[i] << " ";
    }
}