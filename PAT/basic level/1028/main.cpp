#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct credit{
    string name;
    string birthday;
};
bool comparision(const credit& a, const credit& b){
    return a.birthday<b.birthday;
}
int main() {
    int n;
    cin >> n;
    auto *arr = new credit[n];
    for(int i=0;i<n;++i){
        cin >> arr[i].name;
        cin >> arr[i].birthday;
    }
    sort(arr,arr+n, comparision);
    int pre=0;
    int post = n-1;
    while(pre<post&&arr[pre].birthday<"1814/09/06")
        ++pre;
    while(post>pre&&arr[post].birthday>"2014/09/06")
        --post;
    cout << post-pre+1;
    if(post-pre+1>=1) cout << ' ' << arr[pre].name << ' ' <<  arr[post].name;
    return 0;
}
