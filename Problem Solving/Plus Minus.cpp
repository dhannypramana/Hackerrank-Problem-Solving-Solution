#include <iostream>
#include <iomanip>
using namespace std;

void inputArray(int n, int arr[]){
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void solve(int n, int arr[]){
    float countPlus = 0;
    float countMinus = 0;
    float countZero = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            countPlus++;
        }else if (arr[i]<0){
            countMinus++;
        }else{
            countZero++;
        }
    }

    cout << fixed << setprecision (6) << countPlus/n <<endl;
    cout << countMinus/n <<endl;
    cout << countZero/n <<endl;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    inputArray(n,arr);

    solve(n,arr);
}