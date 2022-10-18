#include <iostream>
using namespace std;
 
int main () {
   for( int i = 0; i <5 ; i++) {
      printf("This loop will run Still forever.\n");
   }
  
  int i = 1; 
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
  
  do {
        cout << i << " MK ";
        ++i;
    }
    while (i <= 5);

   return 0;
}

