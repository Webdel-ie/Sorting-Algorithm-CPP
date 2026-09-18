#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void MaxHeapify(vector<int> &v, int n, int i) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest;

    if (l < n && v[l] > v[i]) {
        largest = l;
    }
    else {
        largest = i;
    }

    if (r < n && v[r] > v[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(v[i], v[largest]);
        MaxHeapify(v, n, largest);
    }
}

void HeapSort(vector<int> &v, int n) {

    // Build Max Heap
    for (int i = (n / 2) - 1; i >= 0; i--) {
        MaxHeapify(v, n, i);
    }

    // Heap Sort
    for (int i = n - 1; i > 0; i--) {
        swap(v[0], v[i]);
        MaxHeapify(v, i, 0);
    }
}

int main() {

    vector<int> v = {45, 13, 8, 19, 9, 25, 60, 35, 15};

    int n = v.size();
    cout << "Original Heap :";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    HeapSort(v, n);
    
    cout << "After Heap Sort: ";
    for (int x : v) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}