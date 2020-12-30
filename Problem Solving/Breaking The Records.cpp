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

void solve(int arr[], int n){
    int max = arr[0];
    int min = arr[0];
    int countMax = 0;
    int countMin = 0;

    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            countMax++;
        }else if(min > arr[i]){
            min = arr[i];
            countMin++;
        }
    }

    cout << countMax << " " << countMin;
}

int main(){
    int game;
    cin >> game;

    int score[game];

    inputArray(score, game);
    solve(score, game);

    cout << endl;
}