#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

void uppercase(char s[], int i){
    if ((s[i] >= 'a') && (s[i] <= 'z'))
        s[i] = s[i] - 32;
}

int main(){
    char s[70], c[]="AEIOU";
    int x = 0, y = 0;
    f.get(s, 70);
    for (int i = 0; i < strlen(s); i++){
        if ((s[i] == ' ') && (s[i + 1] == 'a')) y++;
        uppercase(s, i);
        cout << s[i];  
        for (int j = 0; j < strlen(c); j++)
            if (s[i] == c[j]) x++;
    }
    cout << endl << x;
    g << y;
}