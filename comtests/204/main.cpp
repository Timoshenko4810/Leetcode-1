#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int len=arr.size();
        if(len<m) return false;
        int count=0;
        for(int i=0;i<=arr.size()-m;++i){
            count=1;
            int l1=i,l2=l1+m;
            while(l2<arr.size()&&arr[l1]==arr[l2]){
                if((l1-i+1)%m==0){
                    ++count;
                    if(count==k)
                        return true;
                }
                ++l2;
                ++l1;
            }
            if(l2==arr.size()){
                if(k==count) return true;
            }
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
