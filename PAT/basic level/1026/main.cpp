#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int c1,c2;
    cin >> c1 >> c2;
    int hr,min,sec;
    int temp = (c2-c1+50)/100;
    sec = temp%60;
    temp/=60;
    min = temp%60;
    temp/=60;
    hr = temp;
    if(hr<10) cout << 0;
    cout << setprecision(2) <<  hr << ':' ;
    if(min<10) cout << 0;
    cout << setprecision(2) << min << ':' ;
    if(sec<10) cout << 0;
    cout << setprecision(2) << sec;
    return 0;
}
