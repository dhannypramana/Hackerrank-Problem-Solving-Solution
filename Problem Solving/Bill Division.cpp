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

void solve(int arr[], int n, int k, int b){
    int annaPay = 0;
    int result = 0;

    for(int i = 0; i < n; i++){
        annaPay = annaPay + arr[i];

        if(k == i){
            annaPay = annaPay - arr[i];
        }
    }

    annaPay/=2;
    
    if(b > annaPay){
        result = b - annaPay;
        cout << result;
    }else{
        cout << "Bon Appetit";
    }
}

int main(){
    int n,k,b;
    cin >> n >> k;

    int arr[n];
    inputArray(arr,n);
    cin >> b;

    solve(arr,n,k,b);

    cout << endl;
}