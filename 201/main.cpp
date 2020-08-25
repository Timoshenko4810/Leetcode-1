#include <iostream>
using namespace std;
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int shift = 0;
        while(m!=n){
            m=m>>1;
            n=n>>1;
            shift++;
        }
        m<<shift;
        return m;
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
