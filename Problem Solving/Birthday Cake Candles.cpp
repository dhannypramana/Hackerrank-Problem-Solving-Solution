#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int findMaxArray(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}

int countMaxValue(int arr[], int n){
    int max = findMaxArray(arr,n);
    int counter = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            counter+=1;
        }
    }

    return counter;
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    inputArray(arr,n);
    cout << countMaxValue(arr,n);

    cout << endl;
}