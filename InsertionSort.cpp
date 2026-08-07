#include<iostream>
using namespace std;

// Insertion Sort 

void insertionSort(vector<int> &v, int n){ 
    for(int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;
        while((j >= 0) && (v[j] > key)){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
    return v;
}

int main(){
    int n;
    cout << 'enter the size of the array: ' << endl;
    cin >> n;

    vector<int> v(n);
    cout << 'enter elements of the array: '<< endl;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << endl;

    cout << 'after sorting array using insertion sort: ';
    
    for(auto x : insertionSort(v, n)){
        cout << x << " ";
    }
    
    cout << endl;

    return 0;
}