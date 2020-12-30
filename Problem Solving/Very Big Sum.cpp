#include <iostream>
using namespace std;

void inputArray(int n, long int arr[]){
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

long int solve(int n, long int arr[]){
    long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main(){
    int n;
    cin >> n;

    long int arr[n];
    inputArray(n,arr);

    cout << solve(n,arr);

    cout << "\n";   
}