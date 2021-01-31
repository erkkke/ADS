#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int index;
    int max = -100000000;
    for(int i = 1; i <= n; i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;

            
        }
    }
    cout << index << ' ';
    return 0;
}