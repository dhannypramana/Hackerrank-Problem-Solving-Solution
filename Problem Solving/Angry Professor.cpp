#include <iostream>
using namespace std;

int main(){
    int n,k,q;
    cin >> q;
    string answer[q];

    for(int i = 0; i < q; i++){
        int onTime = 0;
        cin >> n >> k;
        for(int j = 0; j < n; j++){
            int temp;
            cin >> temp;
            if(temp > 0){
                onTime++;
            }
        }

        cout << onTime;
        if(onTime >= k){
            answer[i] = "NO";
        }else{
            answer[i] = "YES";
        }
    }

    for(int i = 0; i < q; i++){
        cout << answer[i] << endl;
    }
}