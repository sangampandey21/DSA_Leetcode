#include <iostream>
#include <algorithm> 

int main() {
    int arr[] = {1, 0, 22, 34, 0, 5, 60, 0, 60, 0, 0, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + n); 
    for(int x : arr) std::cout << x << " ";
    return 0;
}