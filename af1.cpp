/**********************
 * Автор: Гинжул Мария*
 * Дата: 18.09.2025   *
 * Вариант: 3         *
 * ********************/
 
 #include <cmath>
 
 #include <iostream>
 
 using namespace std;
 
 int main() {
   double v;
   double p;
   double g;
   double a;
   double t;
   double h;
   double l;
   double R1;
   double R2;
   
   g = 9.81;
   
   cout << " v = ";
   cin >> v;
   cout << " a = ";
   cin >> a;
   cout << " p = ";
   cin >> p;
   
   a = a * (p / 180);
   t = 2 * v * sin(a) / g;
   h = pow(v, 2) * pow(sin(a), 2) / (2 * g);
   l = pow(v, 2) * sin(2 * a) / g;
   R1 = pow(v, 2) / (g * cos(a));
   R2 = pow(v, 2) * pow(cos(a), 2) / g;

   cout << " t = "<< t << endl 
   << " h = " << h << endl 
   << " l = "<< l << endl 
   << " R1 = " << R1 << endl 
   << " R2 = " << R2 << endl;
   
   return 0;
} 