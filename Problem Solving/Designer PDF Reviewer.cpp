#include <iostream>
using namespace std;

void inputArray(int arr[]){
    for(int i = 0; i < 26; i++){
        cin >> arr[i];
    }
}

int main(){
    char ajb[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int arr[26];

    inputArray(arr);
    
    string text;
    cin >> text;

    int max = arr[0];
    int counterAbj = 0;
    for(int i = 0; i < text.length(); i++){
        for(int j = 0; j < 26; j++){
            if(text[i] == ajb[j]){
                cout << text[i] << " = " << arr[j] << endl;
                counterAbj++;
                if(max < arr[j]){
                    max = arr[j];
                }
            }
        }
    }

    int result = max * counterAbj;
    cout << "Highlighted Area: " << result;

    cout << endl;
}