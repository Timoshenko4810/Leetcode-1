#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    char s;
    cin >> s;
    int n=1;
    while(2*n*n-1<=num){
        ++n;
    }
    n--;
    int count=2*n-1;
    for(int i=0;i<n;++i){
        for(int j=0;j<i;++j)
            cout << ' ';
        for(int j=0;j<count-2*i;++j)
            cout << s;
        cout << endl;
    }
    for(int i=n-2;i>=0;--i){
        for(int j=0;j<i;++j)
            cout << ' ';
        for(int j=0;j<count-2*i;++j)
            cout << s;
        cout << endl;
    }
    cout << num-2*n*n+1;
    return 0;
}