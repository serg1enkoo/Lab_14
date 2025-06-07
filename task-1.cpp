#include <iostream>   
#include <cstdlib>      
#include <ctime>        
using namespace std;    

int main() {
    int size = 10;  
    float* arr = new float[size];
    srand(static_cast<unsigned>(time(NULL)));
    float* p = arr;
    float* end = arr + size;
    while (p < end) {
        *p = -2.0f + (static_cast<float>(rand()) / static_cast<float>(RAND_MAX)) * 4.0f;
        p++;
    }
    p = arr;

    int positiveCount = 0;
    int negativeCount = 0;
    
    while (p < end) {
        if (*p > 0.0f) {
            positiveCount++;
        } 
        else if (*p < 0.0f) {
            negativeCount++;
        }
        p++;
    }
    
    cout << "Кількість додатних чисел: " << positiveCount << endl;
    cout << "Кількість від'ємних чисел: " << negativeCount << endl;
    
    delete [] arr;
    
    return 0;
}
