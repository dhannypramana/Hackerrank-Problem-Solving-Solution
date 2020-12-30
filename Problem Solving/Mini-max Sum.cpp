#include <iostream>
using namespace std;

void inputArray(unsigned long long arr[], unsigned long long n){
    unsigned long long x = n;
    for(int i = 0; i < x; i++){
        cin >> arr[i];
    }
}

int main(){
    int n = 5;
    unsigned long long arr[n];

    inputArray(arr,n);

    unsigned long long result[n];
    for(int i = 0; i < n; i++){
        unsigned long long sum = 0; 
        for(int j = 0; j < n; j++){
            if(j == i){
                continue;
            }else{
                cout << arr[j] << " + ";
                sum = sum + arr[j];
            }
        }
        result[i] = sum;
        cout << " = " << result[i];
        cout << endl;
    }

    unsigned long long max = result[0];
    unsigned long long min = result[0];

    for(int i = 0; i < n; i++){
        if(max < result[i]){
            max = result[i];
        }else if(min > result[i]){
            min = result[i];
        }
    }

    cout << min << " " << max;
    cout << endl;
}