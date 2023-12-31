//Problem: Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. 
//Save all the indexes in an array (in increasing order).

#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
    if (size == 0) return 0;

    int smallOutputSize = allIndexes(input + 1, size - 1, x, output);

    if (input[0] == x) {
        for (int i = smallOutputSize - 1; i >= 0; i--) {
            output[i + 1] = output[i] + 1;
        }
        output[0] = 0;
        smallOutputSize++;
    } else {
        for (int i = smallOutputSize - 1; i >= 0; i--) {
            output[i] = output[i] + 1;
        }
    }
    return smallOutputSize;
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    
}

