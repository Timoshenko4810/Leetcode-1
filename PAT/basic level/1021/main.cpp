#include <iostream>
#include <string>
using namespace std;
int main() {
    int index[10]={0};
    string N;
    getline(cin, N);
    for(char i:N){
        index[i-'0']++;
    }
    for(int i=0;i<10;++i){
        if(index[i]!=0)
            cout << i << ':' << index[i] << endl;
    }
    return 0;
}
