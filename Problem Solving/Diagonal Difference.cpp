#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    k = n;
    int arr[n][k];
    int sumDiagonalLeft = 0;
    int sumDiagonalRight = 0;
    int sum;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if(i == j){
                sumDiagonalLeft+=arr[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if((i+j) == (n-1)){
                sumDiagonalRight+=arr[i][j];
            }
        }
    }

    sum = abs(sumDiagonalLeft - sumDiagonalRight);
    cout << sum;

    cout << endl;
}