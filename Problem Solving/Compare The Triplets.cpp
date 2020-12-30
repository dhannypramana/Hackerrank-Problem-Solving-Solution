#include <iostream>
using namespace std;

void inputArray(int arr[]){
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
}

int main(){
    int a[3];
    int b[3];
    int aRes = 0;
    int bRes = 0;

    inputArray(a);
    inputArray(b);

    for (int i = 0; i < 3; i++){
        if (a[i] > b[i]){
            aRes++;
        }else if(a[i] < b[i]){
            bRes++;
        }
    }
    
    cout << aRes << " " << bRes;

    cout << endl;
}