#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();){
            if(temp<prices[i]){
                while(i<prices.size()-1&&prices[i]<prices[i+1])
                    ++i;
                profit+=prices[i]-temp;
                ++i;
                if(i<prices.size())
                    temp=prices[i];
            }
            else{
                temp=prices[i];
                ++i;
            }
        }
        return profit;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
