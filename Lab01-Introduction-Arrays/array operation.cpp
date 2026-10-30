//*Q1 HOW TO INPUT DATA FROM USER FOR CREATION OF AN ARRAY
#include <stdio.h>
int main(){
    int arr[5];
    printf("enter the 5 elements of your array : ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("the 5 elements of your array are : \n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
 return 0;
}
//Q2 HOW TO FIND THE LARGEST AND SMALLEST AMONG THE GIVEN ARRAY//
#include <stdio.h>
int main(){
    int arr[5];
    printf("enter the 5 elements of your array : \n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
int largest=arr[0];
int smallest=arr[0];

for(int i=1 ; i<5 ; i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}

for(int i=1 ; i<5 ; i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }
}

printf("THE LARGEST NO. IN THE ARRAY IS : %d ", largest);
printf("THE SMALLEST NO. IN THE ARRAY IS : %d ", smallest);
return 0;
}*/
//Q3 How to create 2D array//
#include<stdio.h>
int main(){
     int a[10][10];
     for (int i=0;i<10;i++){
     for (int j=0;j<10;j++){
       scanf("%d",&a[i][j]);
     }
     }
  printf("The 2D array is: ");
     for(int i=0;i<10;i++){
     for(int j=0;j<10;j++){
     printf("%d" , a[i][j]);
     }
     printf("/n");
     }
return 0;
}
//Q4 Stack operation //
#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = x;
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    return 0;
}
//Q5 How to reverse an array//

#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++)
        cin >> a[i];
    cout << "Reverse array: ";
    for(int i = 4; i >= 0; i--)
        cout << a[i] << " ";
    return 0;
}
//Q6 How to draw a pattern//
#include <iostream>
using namespace std;

void printPyramid(int n) {
	// Outer loop for rows
	for (int i = 1; i <= n; i++) {
	    
		// Print spaces
		for (int j = 1; j <= n - i; j++)
			cout << " ";
			
		// Print stars
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";

		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter number of rows: ";
	cin >> n;

	printPyramid(n);

	return 0;
}

