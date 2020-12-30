#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void outputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int findMax(int arr[], int n){
    int max = arr[0];

    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}

void solve(int arr[], int n, int k){
    int result = 0;
    int max = findMax(arr,n);

    if(max > k){
        result = max - k;
        cout << result;
    }else{
        cout << "0";
    }
}

int main(){
    int n,k;
    cin >> n >> k;

    int arr[n];
    inputArray(arr,n);
    solve(arr,n,k);

    cout << endl;
}