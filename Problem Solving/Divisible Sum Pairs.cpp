#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void solve(int arr[], int n, int k){
    int counter = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                break;
            }

            int sum = arr[i] + arr[j];
            if(sum % k == 0){
                cout << "(" << arr[j] << ")+(" << arr[i] << ") = " << arr[i] + arr[j] << endl;
                counter++;
            }
        }
    }
    cout << counter;
}

int main(){
    int n,k;
    cin >> n >> k;

    int arr[n];

    inputArray(arr,n);
    solve(arr,n,k);

    cout << endl;
}