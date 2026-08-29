//to find the smallest and largest element in the given array and also to get their index//
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int num[] = {5, 15, 22, 1, -15, -24};
    int size = 6;
    int largest = INT_MIN;
    int largestIndex = -1;
    int smallest = INT_MAX;
    int SmallestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (num[i] > largest) {
            largest = num[i];
            largestIndex = i;
        }
    }
    for (int i = 0; i < size; i++) {
        if (num[i] < smallest) {
            smallest = num[i];
            SmallestIndex = i;
        }
    }

    cout << "Index of largest element: " << largestIndex << endl;
    cout << "Index of Smallest element: " << SmallestIndex << endl;
    cout << "smallest element : " << smallest << endl;
    cout << "largest element : " << largest << endl;

    return 0;
}
