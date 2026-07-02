#include <iostream>

using namespace std;

// Array initialized to 0 to store counts
int freq_hash[10001] = {0}; 

int main(){
    int n;
    cin >> n; 
    
    int arr[n];
    int i;
    for (i = 0; i < n; i++){
        cin >> arr[i]; 
    }
    
    int c;
    for(c = 0; c < n; c++){
        freq_hash[arr[c]] += 1; 
    }
    
    int q;
    cin >> q; 
    
    while(q--){
        int number;
        cin >> number; 
        
        // Prints the exact sentence you asked for
        cout << number << " occurred " << freq_hash[number] << " times\n";
    }
    
    return 0;
}
