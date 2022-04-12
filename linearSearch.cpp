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

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout << "Index of the key " << key << " is " << i << endl;
            break;
        }
    }
}