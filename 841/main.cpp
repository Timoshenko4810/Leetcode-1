#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> visited(rooms.size(), 0);
        visited[0]=1;
        for(int i:rooms[0])
            dfs(rooms, visited, i);
        for(int i:visited)
            if(i==0)
                return false;
        return true;
    }
    void dfs(vector<vector<int>>& rooms, vector<int>& visited, int cur){
        if(visited[cur]==1)
            return;
        visited[cur]=1;
        for(int i:rooms[cur])
            dfs(rooms, visited, i);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
