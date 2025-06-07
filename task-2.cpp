#include <iostream>   
#include <cstdlib>   
#include <ctime>      
using namespace std;  

int main() {
    int rows = 3;  
    int cols = 3;  
    int* matrix = new int[rows * cols];
    srand(static_cast<unsigned int>(time(NULL)));
    
    int* p = matrix;
    int* end = matrix + rows * cols; 
    
    while (p < end) {
        *p = rand() % 21 - 10;
        p++;
    }
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        int* rowPtr = matrix + i * cols;
        for (int j = 0; j < cols; j++) {
            cout << *(rowPtr + j) << "\t";  
        }
        cout << endl;  
    }
    
    cout << "\nMain Diagonal:" << endl;
    for (int i = 0; i < rows; i++) {
        cout << *(matrix + i * cols + i) << " ";
    }
    cout << endl;
    
    cout << "\nAdditional diagonal:" << endl;
    for (int i = 0; i < rows; i++) {
        cout << *(matrix + i * cols + (cols - 1 - i)) << " ";
    }
    cout << endl;
    
    int evenCount = 0;  
    int oddCount = 0;   
    p = matrix;
    while (p < end) {
        if ((*p) % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;  
        }
        p++;
    }
    cout << "\nAmount of even nums: " << evenCount << endl;
    cout << "Amount of uneven nums: " << oddCount << endl;
    
    delete [] matrix;
    
    return 0;
}
