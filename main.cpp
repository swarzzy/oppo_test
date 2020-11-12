double fast_pow(double value, unsigned int pow) {
   double result = 1.0;
   while (pow) {
       if (pow %  == 1) {
           result *= value;
       }

       value *= value;
       pow /= 2;
   }
   return result;
}
