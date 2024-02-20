#include <stdio.h>

int main() {
   int numInt = -150;
   float numFloat = 123.125;

   // Floating to integer conversion using:

   // a) Assignment operation:
   int intFromFloatAssign = numFloat;  // Fractional part is discarded
   printf("Integer from float (assignment): %d\n", intFromFloatAssign);

   // b) Type casting:
   int intFromFloatCast = (int)numFloat;  // Explicit type conversion
   printf("Integer from float (type casting): %d\n", intFromFloatCast);

   // Integer to floating conversion using:

   // a) Assignment operation:
   float floatFromIntAssign = numInt;  // Integer is automatically converted to float
   printf("Float from integer (assignment): %f\n", floatFromIntAssign);

   // b) Type casting:
   float floatFromIntCast = (float)numInt;  // Explicit type conversion
   printf("Float from integer (type casting): %f\n", floatFromIntCast);

   return 0;
}
