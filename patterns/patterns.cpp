#include <bits/stdc++.h>
using namespace std;

void starTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void numTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void invertedTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void invertedPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        { // 2n-(2i+1)
            cout << "* ";
        }
        cout << endl;
    }
}
void kite(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void arrow(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // in a better way:
    // for(int i=1;i<=2*n-1;i++){
    //     int stars =i;
    //     if(i>n) stars=2*n-i;
    //     for(int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}
void oneZeroTri(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0 ; j <= i; j++)
        {
            cout<<start<<" ";
            start=1-start;
        }
         cout << endl;
    }
   
}
void numSpacenumSQUARE(int n){
    int space =2*n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){      
         cout<<j+1;  
        }
        for(int j=0;j<space-1;j++){
          cout<<" ";    
        }
         for(int k=i+1;k>=1;k--){
          cout<<k;    
        }
        cout<< endl;
        space-=2;
    }
}
void numTriangle2(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0; j<=i;j++){
            cout<<num<<" ";
             num+=1;
        }       
        cout<< endl;
    }
}
void alphabhetTri(int n){
    int alph='A'+n;
    for(int i=0;i<n;i++){
        for(char ch='A'; ch<alph-i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    alph--;
}
void alphPyramid(int n){
for(int i=0; i<n;i++){
    for(int j=0;j<=n-1-i;j++){
        cout<<" ";
    }
    char ch='A';
    for(int j=0;j<2*i+1;j++){ 
        cout<<ch;
        if(j>=(2*i+1)/2) ch--;  // FOCUS !!
        else  ch++;      
    }
    cout<<endl;
}
}
void GOODalphTri(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i; ch<='E';ch++){
            cout<<ch<<" ";         
        }
    cout<<endl;
    }
}
void kiteSPACEsquare(int n){
   int stars=n/2;
    //uppar half
    //stars 
for(int i=0; i<n/2;i++){ 
    for(int j=0;j<stars-i;j++){
        cout<< "*";       
    }
    //spaces
    for(int k=0;k<2*i;k++){
      cout<<" ";
    }
    //stars
    for(int j=0;j<stars-i;j++){
        cout<<"*";
    }
     cout<< endl;
}
   
    //lower half
    //stars
    for(int i=0; i<n/2;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";        
    }
    //spaces
    for(int k=0;k<2*stars-(2*i+2);k++){
      cout<<" ";
    }
    //stars
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    }
     stars-=1;
    cout<< endl;
}
void squareBoundary(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(i==0|| i==(n-1) || j==0||j==(n-1)){
            cout<<"* ";
         }
         else cout<<"  ";
        }
        cout<<endl;
    }
}
void IMPORTANT(int n ){
    for(int i=0; i<2*n-1; i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int bottom=(2*n-1)-1-i;
            int left = j;
            int right = (2*n-1)-1-j;
            cout<< (n-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows or column:";
    cin >> n;
    // starTriangle(n);
    // numTriangle(n);
    // invertedTriangle(n);
    // pyramid(n);
    // invertedPyramid(n);
    // kite(n);
    // arrow(n);
    //oneZeroTri(n);
    //numSpacenumSQUARE(n);
    //numTriangle2(n);
    //alphabhetTri(n);
    //alphPyramid(n);
    //GOODalphTri(n);
    //kiteSPACEsquare(n); //good pattern
    //squareBoundary(n);
    IMPORTANT(n);
    return 0;
}