/***********************
 * Автор: Гинжул Мария *
 * Дата: 18.09.2025    *
 * Вариант: 3          *
 * *********************/
 
 #include <cmath>
 
 #include <iostream>
 
 using namespace std;
 
 int main() {
   int v;
   double p;
   double g;
   double a;
   double t;
   double h;
   double l;
   double R1;
   double R2;
   
   v = 750;
   a = 14;
   p = 3.1415;
   g = 9.81;
   
   a = a * (p / 180);
   
   t = 2 * v * sin(a) / g;
   
   cout << " t = " << t << endl;
   
   h = pow(v, 2) * pow(sin(a), 2) / (2 * g);
   
   cout << " h = "<< h << endl;
   
   l = pow(v, 2) * sin(2 * a) / g;
   
   cout << " l = "<< l << endl;
   
   R1 = pow(v, 2) / (g * cos(a));
   
   cout << " R1 = "<< R1 << endl;
   
   R2 = pow(v, 2) * pow(cos(a), 2) / g;

   cout << " R2 = "<< R2 << endl;
   
   return 0;
}
 