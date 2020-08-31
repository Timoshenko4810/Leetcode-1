#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int N;
    float D;
    cin >> N >> D;
    vector<float> weight(N,0.0);
    vector<float> price(N,0.0);
    for(int i=0;i<N;++i)
        cin >> weight[i];
    for(int i=0;i<N;++i)
        cin >> price[i];
    for(int i=0;i<N;++i)
        price[i]/=weight[i];
    for(int i=0;i<N;++i){
        bool flag=false;
        for(int j=i;j<N-1;++j){
            if(price[j]<price[j+1]){
                float temp=price[j];
                price[j]=price[j+1];
                price[j+1]=temp;
                float temp2=weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=temp2;
                flag=true;
            }
        }
        if(!flag)
            break;
    }
    int i=0;
    float sum=0.0;
    while(i<N&&D-weight[i]>=0){
        D-=weight[i];
        sum += price[i]*weight[i];
        ++i;
    }
    if(i<N) sum+=price[i]*float(D);
    cout <<setiosflags(ios::fixed) << setprecision(2) << sum;
    return 0;
}
