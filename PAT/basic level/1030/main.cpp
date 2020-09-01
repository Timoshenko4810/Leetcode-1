#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N;
    long long p;
    cin >> N >> p;
    int *arr = new int [N]{0};
    for(int i=0;i<N;++i)
        cin >> arr[i];
    sort(arr, arr+N);
    int maxlength=0;
    for(int i=0;i<N-maxlength;++i){
        int j=i+1;
        while(j<N&&arr[j]<=arr[i]*p){
            ++j;
        }
        if(maxlength<j-i){
            maxlength=j-i;
        }
        if(j==N) break;
    }
    cout << maxlength;
    return 0;
}
