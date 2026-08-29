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

//to find the element in a given array //

#include<iostream>
using namespace std;

int linearSearch( int arr[] , int sz , int target){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
  return -1;
}
int main(){
    int arr[] = {4,2,7,1,2,8,5};
    int sz = 7;
    int target = 8;

cout << linearSearch(arr,sz,target) << endl;

return 0;
}

// to reverse an array using 2 pointer method//

#include<iostream>
using namespace std;

void reverseArray( int arr[] , int sz){
    int start=0, end=sz-1;

    while(start < end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int sz=7;
    reverseArray(arr, sz);

    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


return 0;
}
