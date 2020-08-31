#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N,p;
    cin >> N >> p;
    int *arr = new int [N]{0};
    for(int i=0;i<N;++i)
        cin >> arr[i];
    sort(arr, arr+N);
    int maxlength=0;
    for(int i=0;i<N;++i){
        int temp=arr[i]*p;
        int j=i+1;
        while(j<N&&arr[j]<=temp){
            ++j;
        }
        if(maxlength<j-i){
            maxlength=j-i;
        }
    }
    cout << maxlength;
    return 0;
}
