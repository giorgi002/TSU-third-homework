//  task 👇 1(1)
// #include <iostream>
// using namespace std;
// int main(){
//     int x =1, y = 2;
//     if(x < 2) {
//         x = x + 1;
//         y = 0;
//     } else{
//         x = 0;
//         y = y + 1;
//     }
//     cout << "x = " << x << " and y = " << y << endl; 
// }



// task 👇1(2)
// #include <iostream>
// using namespace std;
// int main(){
//     int x = -1, y = 3;
//     if(x > 0) x = x+1;
//     else{
//         x = 0;
//         y = y + 1;
//     }
//     cout << " x = " << x << " y = " << y << endl;
// }



// task 👇1(3)
// #include <iostream>
// using namespace std;
// int main(){
//     int x = 1, y = 2;
//     if( x == 1){
//         if( y ==2){
//             cout << "x = " << x << " y = " << y << endl;
//         }
//         else{
//             cout << "y != 2\n";
//         }  
//     }
//     else{
//             cout << "x != 1\n";
//         }
// }



// second task 👇(1)
// #include <iostream>
// using namespace std;
// int main(){
//     int x, y (-3);
//     if(y != 0) x =10;
//     cout << "x = " << x << endl;
// }



// second task 👇(2)
// #include <iostream>
// using namespace std;
// int main(){
//     int x, y {-3};   
//     if(y == 0) x = 10; 
//     else x = 5;
//     cout << "x = " << x << endl;

// }



// second task 👇(3)
// #include <iostream>
// using namespace std;
// int main(){
//     int  x = 1,y = 1,z; 
// if(x > 0 && y <= 1)
//    z = x + y;
// else 
//    z = y - x;
// cout << "z = " << z << endl;
// }



// second task 👇(4)
// #include <iostream>
// using namespace std;
// int main(){
//     int  x ={1},y ={1},z; 
// if(x < 0 && y <= 1)
//    z = x + y;
// else 
//    z = y - x;
//    cout << "z = " << z << endl;
// }



// third task 👇(1)
// #include <iostream>
// using namespace std;
// int main(){
//     int x, y;
//     cout << "what is x" << endl;
//     cin >> x;
//     y = (x >= 5) ? (x+1) : (x-1);
//     cout << "y = " << y << endl;
// }



// third task 👇(2)
// #include <iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout << "what is x" << endl;
//     cin >> x;
//     y = x>2 ? x*x +5 : -2-x;
//     cout << "y = " << y << endl;
// }



// third task 👇(3)
// #include <iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout << "what is x" << endl;
//     cin >> x;
//     if(x < -1 || x > 1) y = 1;
//     else y = 2 * x -1;
//     cout << "y = " << y << endl; 
// }



// third task 👇(4)
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     double y;
//     cout << "what is x" << endl;
//     cin >> x;
//     if( x >=0) y = 1.0/(x+5);
//     else if(x < 0) y = 5 * (x * x );
//     else if( x = -5) y = 0;
//     cout << "y = " << y << endl;
// }
// 



// fourth task 👇
// #include <iostream> 
// using namespace std;
// int main(){
//     float num1, num2;
//     cout << "enter yout number"<<endl;
//     cin >> num1>> num2;
//     cout << "the minimum is " << (num1 < num2 ? num1 : num2 ) << endl;
// }



// fifth task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout << "what is x " << endl;
//     cin >> x ;
//     cout << "what is y " << endl;
//     cin >> y;
//     if(y == 0) {
//         cout << "it cant divide by 5" << endl;
//     } else {
//         cout << "the result is " << x/y << endl;
//     }
// }



// sixth task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int k;
//     cout << "what is k ";
//     cin >> k;
//     if( k % 2 == 0){
//         cout << k + 5 << endl;
//     } else {
//         cout << k * 3 << endl;
//     }
// }



// eighth task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int x,y,z, min;
//     cout << "enter three integers" << endl;
//     cin >> x >> y >> z;
//     min = x;
//     if(y < min ) min = y;
//     if( z < min) min = z;
//     cout << "min = " << min << endl;
// }



// nine task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int k, x, y;
//     cout << "what is x and y" << endl;
//     cin >> x >> y;
//     if(x > 0  && y > 0){
//         k =1;
//     } else if (x > 0 && y < 0){
//         k = 4;
//     } else if ( x < 0 && y >0 ){
//         k =2;
//     } else if( x<0 && y <0){
//         k=3;
//     }
//     cout << "მოცემული კოორდინატებით წერტილი მდებარეობს " << k << " მეოთხედში " <<endl;
//     }



// ten task 👇 second solution 
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c,d,n;
//     cout <<" enter four numbers from which 3 are equal" << endl;
//     cin >> a >> b >> c >> d;
//     if(a ==b && a ==c && a ==d){
//         cout << "all numbers are equal: " << a << endl;
//         return 0;
//     }
//     if(a ==b && a ==c){
//         n = d;
//     }else if(a ==b && a==d){ 
//         n =c;
//     }else if( a==c && a==d) {
//         n = b;
//     }else if(b ==c && b ==d) {
//         n = a;
//     }else {
//         cout << "all numbers are different" << endl;
//         return 0;
//     }
//         cout << "The different number is: " << n << endl;
//     return 0;
// }
 


// eleven task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     char x1 = 'd', x2= 'z';
//          cout << "symbol " << x1 << "  code " << (int)x1 << endl;
//          cout << "symbol " << x1 << "  code " << (int)x2 << endl; 
// }



// twelve task 👇(1)
// #include <iostream>
// using namespace std;
// int main(){
//     char x1='A', x2='Z';
//     cout << (int)x1 << endl;
//     cout <<  (int)x2 << endl;
// }



// twelve task 👇(2)
// #include <iostream>
// using namespace std;
// int main(){
//     char  x1 = '0', x2 = '9';
//     cout << (int)x1 <<endl;
//     cout << (int)x2 <<endl;
// }



// thirteen task 👇
// #include <iostream>
// using namespace std;
// int main() {
//     int x1 = 1; // Change this to any character
//     cout << (char)x1 << endl; // Print the ASCII code
//     return 0;
// }



// fourteen task👇
// #include <iostream>
// using namespace std;
// int main(){
//     char  x,y,z,min;
//     cout << "enter three charcters" <<endl;
//     cin >> x>> y>>z;
//     min = x;
//     if( y < min) min = y;  
//     if( z < min) min =z;  
//     cout << "ყველაზე დაბალი მნიშვნელობა აქვს "  << min << "და მისი მნიშვენლობა არის  ASCII სისტემაში არის  " << (int)min << endl;
// }



// fiften task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     char a,b,c;
//     cout << "enter three characters " <<endl;
//     cin >> a >> b >> c;
//     if(a > b) swap(a,b);
//     if( a > c) swap(a,c);
//     if(b > c) swap(b,c);
//     cout << a << b << c<< endl;
// }





//  task sixteen 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int x, modulx;
//     x = -5;
//     modulx = (x <= 0) ? -x :x;
//     cout << x << "-ის მოდული უდრის " << modulx << " -ს" << endl;
// }



//  task sixteen 👇 with if else
// #include <iostream>
// using namespace std;
// int main(){
//     int x, modulx;
//     x = -7;
//     if(x<= 0) modulx = -x;
//     else modulx = x;
//     cout << x << "-ის მოდული უდრის " << modulx << "-ს" << endl;
// }



//  task seventeen 👇 
// #include <iostream>
// using namespace std;
// int main(){
//     cout << "enter three strings" << endl;
//     string a,b,c;
//     cin >>a >> b >>c;
//     string q(a);
//     if(b < q ) q =b;
//     if(c < q) q = c;
//     cout << "the minimum is " << q
//          << " and its length is "<< q.size() << endl;
//     string t = b;
//            b = c;
//            c = t;
//     cout << "b became " << b << " and c became " << c <<endl;        
// }


// task eightten 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "enter the four-digit number" << endl;
//     cin >> a;
//     int first( a/1000), second(a/ 100 %10), third(a/ 10 % 10 ), fourth( a %10);
//     if(first + second == third + fourth){
//         cout << "The sum of the first two digits is equal to"
//                 "\nthe sum of the last two digits :)\n";
//     }
//     else {
//         cout << "it is not right" << endl;
//     }
//     int multiplition = first * second * third * fourth;
//     if(multiplition % 3 ==0){
//         cout << "the number is divisible by 3" << endl;
//     }else {
//         cout << " it is not right" << endl;
//     }
// }


// task  nineteen 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout << "enter two numbers" <<endl;
//     cin >> a >> b;
//     if(a >= 2 * 100000 || b >= 2 * 100000){
//         cout << "your number is wrong"<< endl;
//     } else{
//         if(a < b ){
//             cout << "< " << endl;
//         } else if( a > b){
//             cout << "> " << endl;
//         } else {
//             cout << "= " << endl;
//         }
//     }
//     return 0;
// }


// task twenty 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int x,y,z, min,max, difference ;
//     cout << "enter three numbers" << endl;
//     cin >> x >> y >> z;
//     if(x >= 10000 || y >=10000){
//         cout << "the numbers are wrong" << endl;
//         return 1;
//     }
//     min = x;
//     if(y < min) min = y;
//     if(z < min) min = z;
//     max = x;
//     if(z > max ) max = z;
//     if(y > max)  max = y;
//     difference = max - min;
//     cout << "the difference between max and min salary is " << difference << endl;
// }
