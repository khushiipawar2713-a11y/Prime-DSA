#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    sort(arr, arr + n);

    int i = 0, j = n - 1;

    while(i < j){
        int sum = arr[i] + arr[j];

        if(sum == target){
            cout << arr[i] << " and " << arr[j] << endl;
            i++;
            j--;
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }

    return 0;
}