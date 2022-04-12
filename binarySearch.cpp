#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int i, j;
    i=0;
    j=n-1;

    while(i<j){
        int mid;
        mid = (i+j)/2;

        if(key == arr[mid]){
            cout << "Index of the key " << key << " is " << mid;
            break;
        }else if(key < mid){
            j = mid-1;
        }else{
            i = mid+1;
        }
    }
    
}