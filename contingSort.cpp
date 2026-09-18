#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> countingSort(vector<int> &v, int n, int k){
   vector<int> c(k+1, 0);
   vector<int> b(n, 0);

   for(int i = 0; i < n; i++){
      c[v[i]]++;
   }
   for(int i = 1; i < c.size(); i++){
      c[i] = c[i] + c[i-1];
   }
   for(int i = n-1; i >= 0; i--){
       b[c[v[i]]] = v[i];
       c[v[i]]--;
   }
   return b;
}
int main(){
    vector<int> v = {3, 5, 2, 0, 1 , 3, 5, 2, 1, 2};
    int k = 5;
    int n = v.size();


    cout << "Original Array: ";

    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    cout << "After Counting Sort : ";
    for(int x : countingSort(v, n, k)){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}