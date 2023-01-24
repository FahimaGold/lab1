#include <iostream>
using namespace std;
int main() {

    // Exercise 1 -If Else
   /* int first_num;
    int second_num;
    cout << "Please past the first number" << std::endl;
    cin >> first_num;
    cout << "Please past the second number" << std::endl;
    cin >> second_num;
    if(first_num == second_num)
        cout << "Numbers are equal" << endl;
    else if(first_num> second_num)
        cout << first_num << " is bigger than " << second_num << endl;
    else
        cout << second_num << " is bigger than " << first_num << endl;
        */

   // Exercise 2 -for loop
   /*int arr[] = {1,2,3,4,5,6,7,8,9,10};
   for (int i=0; i< 10; i++){
       int sq = arr[i]*arr[i];
       cout << sq << endl;
   }*/

   // Exercise 3 -Do while loop
   /*int size;
   int max_number = -1;
   cout << "Introduce the size of the array" << endl;
   cin >> size;
   int arr[size];
   for (int i=0; i<size; i++){
       cout << "Introduce a number" << endl;
       cin >> arr[i];
   }

   int j= 0;
   do {
       if(arr[j]> max_number )
           max_number = arr[j];
       j++;
   }while (j< size);
     cout << "Max number is " << max_number << endl;

*/

   // Exercise 4 -While loop

   /*float x = -3;
   float y;
   while (x < 3.5){
       y = -3*x*x -4*x -6.5;
       cout << "x = "<< x << ", y =" << y << endl;
       x = x + 0.5;
   }*/

    return 0;
}
