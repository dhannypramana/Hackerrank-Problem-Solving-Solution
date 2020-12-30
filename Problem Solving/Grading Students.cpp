#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void solve(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] >= 38){
            if(arr[i] % 5 == 3){
                arr[i] = arr[i] + 2;
            }else if(arr[i] % 5 == 4){
                arr[i] = arr[i] + 1;
            }
        }
    }
}

void outputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}

int main(){

    int n;
    cin >> n;
    int arr[n];

    inputArray(arr,n);
    solve(arr,n);
    outputArray(arr,n);
}