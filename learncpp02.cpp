
#include <iostream>
using namespace std;
 
int main() {
   int sumOdd  = 0; // For accumulating odd numbers, init to 0
   int sumEven = 0; // For accumulating even numbers, init to 0
   int upperbound;  // Sum from 1 to this upperbound
 
   // Prompt user for an upperbound
   cout << "Enter the upperbound: " << endl;
   cin >> upperbound;  
 
   // Use a loop to repeatedly add 1, 2, 3,..., up to upperbound
   int number = 1;
   while (number <= upperbound) {
      if (number % 2 == 0) {  // even number
         sumEven = sumEven + number;
      } else {                // odd number
         sumOdd = sumOdd + number;
      }
      ++number; // increment number by 1
   }
 
   // Print the results
   cout << ("The sum of odd numbers is \n", sumOdd);
   cout << ("The sum of even numbers is \n", sumEven);
   cout << ("The difference is \n", (sumOdd - sumEven));
 
   return 0;
}
