// Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.
// The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.
// Help Monk prepare the same!
// Input format:
// On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.
// Output format:
// You must print the required list.
// Constraints:
// 1 <= N <= 105   // int will work
// 1 <= | Length of the name | <= 100
// 1 <= Marks <= 100

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; // num. of students 
    cin>>n;
    map<int,multiset<string>>list; //multiset will use so that if two or more students have same marks then they will store seperately.
    for(int i=0;i<n;i++){
    int marks;
    string name;
    cin>>name>>marks;
     list[marks].insert(name); //list[marks] is now a 'set' so we can apply the 'set functions' on it 
    }
    auto last = --list.end();
    
    while(true){
        auto &students = (*last).second; // to avoid copy of *it.second that will increase the TC we for safty took address;
        auto &marks = (*last).first;
        for(auto student : students){
            cout<<student<<" "<<marks<<endl; // phale jo max marks hai vhi print honge kyuki end me vhi marks store hai map ke but un marks ke correspond jitne bhe students ke names vha store hai (jo already sorted manner me store hai kyuki humne set ka use kya hai ) vo one by one print honge  
        }
        if(last==list.begin()) break;
        last--;
    }

    return 0;
}