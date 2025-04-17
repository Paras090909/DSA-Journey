📘 What is an Array?

🔹 Definition
An array is a collection of elements of the same data type stored at contiguous memory locations.
It allows you to store multiple values in a single variable, instead of declaring separate variables for each value.

Think of it like a row of boxes, where each box holds a value and has a number (called index) assigned to it.


🔹 Syntax

dataType arrayName[size];

Example

int numbers[5];  // This creates an array to store 5 integers


🔹 Memory Representation

Index:     0     1     2     3     4  
Data :   [10]  [20]  [30]  [40]  [50]





✍️ How to Insert Data into an Array


✅ Manual Insertion
You can assign values directly using indices.



int arr[3];

arr[0] = 10;

arr[1] = 20;

arr[2] = 30;



✅ Using Loop

You can take user input using a for loop.


int arr[5];

for(int i = 0; i < 5; i++) {
          
  cout << "Enter value for index " << i << ": ";
          
  cin >> arr[i];
  
}


🖨️ Sample Input and Output
Enter value for index 0: 5  
Enter value for index 1: 10  
Enter value for index 2: 15  
Enter value for index 3: 20  
Enter value for index 4: 25  


Final Array:

arr = [5, 10, 15, 20, 25]








