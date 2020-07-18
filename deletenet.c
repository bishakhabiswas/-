#include<iostream>
using namespace std;

int main() {


   int a[100], size, pos, i, count = 0;

   cout << "Enter the size of an array \n";
   cin  >> size;

   cout << "Enter the value in an array \n";

   // Take an input array
   for (i = 0; i < size; i++) {
    cin >> a[i];
   }

   //Input position where we delete an element
   cout << "Enter the position \n";
   cin  >> pos;

   //Shift element from i+1 to i
   for(i = pos-1; i < size; i++) {

      arr[i] = arr[i+1];
   }

   // Reduce the size of an array
   size--;

  // Print an array after deleting an element
  for(i = 0; i < size; i++) {

    cout<<"   "<<a[i];

  }

  return 0;
}
