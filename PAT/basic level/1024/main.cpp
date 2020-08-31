#include <iostream>
#include <string>
using namespace std;
int main() {
    string insert;
    getline(cin, insert);
    int index=insert.size()-1;
    while(insert[index]!='E')
        --index;
    int power=0;
    for(int i=index+2;i<insert.size();++i){
        power=power*10+insert[i]-'0';
    }
    if(insert[0]=='-')  cout << '-';
    if(insert[index+1]=='-'){
        cout << "0.";
        for(int i=0;i<power-1;++i)
            cout << '0';
        cout << insert[1];
        for(int i=3;i<index;++i)
            cout << insert[i];
    }
    else{
        cout << insert[1];
        int i=3;
        for(;i<index&&power>0;++i){
            cout << insert[i];
            power--;
        }
        while(power!=0){
            cout << 0;
            power--;
        }
        if(i!=index){
            cout << '.';
            while(i<index){
                cout << insert[i];
                ++i;
            }
        }
    }
    return 0;
}
