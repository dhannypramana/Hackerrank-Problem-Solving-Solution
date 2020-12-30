#include <iostream>
using namespace std;

int main(){
    int n, q, height = 0;
    cin >> q;
    int arrp[q];
    for(int i = 0; i < q; i++){
        cin >> n;
        n+=1;
        for(int i = 0; i < n; i++){
            if(i == 0){
                height = 1;
            }else if(i % 2 == 1 && i != 0){
                height = height + height;
            }else{
                height = height + 1;
            }
        }
        arrp[i] = height;
    }

    // cout << endl;
    for(int i = 0; i < q; i++){
        cout << arrp[i] << endl;
    }
}