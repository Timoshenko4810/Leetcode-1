#include <iostream>
#include <string>
using namespace std;
//以后字符串输入只用getline
//题目中没说第一行不会为空，所以使用cin会有一组用例过不了，cin遇到空白字符会停止读入，而getline获取一整行并丢弃换行符
//我再用cin我就是傻逼
int main() {
    string error;
    string input;
    getline(cin,error);
    getline(cin, input);
    for(char i : input){
        if(error.find(toupper(i))!=std::string::npos) continue;
        if(isupper(i)&&error.find('+')!=std::string::npos) continue;
        cout << i;
    }
    return 0;
}
