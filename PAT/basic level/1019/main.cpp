#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int num;
    cin>>num;
    if(num==9999||num==8888||num==7777||num==6666||num==5555||num==4444||num==3333||num==2222||num==1111||num==0000){
        cout << num << " - " << num << " = "<< "0000";
        return 0;
    }
    int n=0;
    while(n!=6174){
        n=num;
        vector<int> temp;
        int count=0;
        while(n!=0){
            temp.push_back(n%10);
            n/=10;
            count ++;
        }
        for(int i=0; i<4-count;++i)
            temp.push_back(0);
        sort(temp.begin(), temp.end());
        int num1=0,num2=0;
        string n1,n2;
        for(int i : temp){
            num2=num2*10+i;
            n2.push_back(i+'0');
        }
        for(int i=temp.size()-1;i>=0;--i){
            num1=num1*10+temp[i];
            n1.push_back(temp[i]+'0');
        }
        for(int i=0;i<4;++i) cout << n1[i];
        cout << " - ";
        for(int i=0;i<4;++i) cout << n2[i];
        cout << " = ";
        num=num1-num2;
        n=num;
        string result;
        int t=num;
        while(t!=0){
            result.push_back(t%10+'0');
            t/=10;
        }
        for(int i=0;i<4-result.size();++i)
            cout << '0';
        for(int i=result.size()-1;i>=0;--i)
            cout << result[i];
        cout << endl;
    }
    return 0;
}
