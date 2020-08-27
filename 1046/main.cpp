#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());
        stack<int> s;
        for(int i:stones)
            s.push(i);
        int num1=0, num2=0;
        while(!s.empty()){
            num1=s.top();
            s.pop();
            if(!s.empty()){
                num2=s.top();
                s.pop();
            }
            if(num1>num2){
                s.push(num1-num2);
            }
            else if(num1<num2){
                s.push(num2-num1);
            }
            else num1=0;
        }
        return num1;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
