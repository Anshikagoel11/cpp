#include<bits/stdc++.h>
using namespace std;
// int main(){
//     // grading system
//     int marks;
//      cout<<"Enter the marks :";
//     cin>> marks;

//     if(marks<25){
//         cout<<"F";
//     }
//     else if(marks<=44){
//         cout<< "E";
//     }
//     else if(marks<=49){
//         cout<< "D";
//     }
//     else if(marks<=59){
//         cout<< "C";
//     }
//     else if(marks<=79){
//         cout<< "B";
//         }
//     else if (marks<=100){
//         cout<< "A";
//     }
//     return 0;
// }


/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

// int maxx(int a,int b,int c, int d){
//   if(a>b && a>c && a>d) return a; 
//   else if(b>a && b>c && b>d) return b; 
//   else if(c>b && c>a && c>d) return c; 
//   else return d; 
// };
// int main() {
//     int a, b, c, d;
//    cin>>a>>b>>c>>d;
//     int maxelem = maxx(a,b,c,d);
//     cout<<maxelem;
//     return 0;
// }

// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     // Complete the code.
//     int a;
//     long long b;
//     char c;
//     float d;
//     double e;
//     cin>>a>>b>>c>>d>>e;
//     cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n==1) cout<<"one";
//     else if(n==2) cout<<"two";
//     else if(n==3) cout<<"three";
//     else if(n==4) cout<<"four";
//     else if (n==5) cout<<"five";
//     else if (n==6) cout<<"six";
//     else if (n==7) cout<<"seven";
//     else if (n==8) cout<<"eight";
//     else if(n==9) cout<<"nine";
//     else  cout<<"greater than 9";
//     return 0;
// }

// switch---------------------------------------------------------------


int main()
{  
    int a;
    cin>>a;
    switch(a){
    case 1:cout<<"one";
    break;
    case 2:cout<<"two";
    break;
    case 3:cout<<"three";
    break;
    case 4:cout<<"four";
    break;
    case 5:cout<<"five";
    break;
    case 6:cout<<"six";
    break;
    case 7:cout<<"seven";
    break;
    case 8:cout<<"eight";
    break;
    case 9:cout<<"nine";
    break;
    default: cout<<"Greater than 9";
    break;
}

    return 0;
}