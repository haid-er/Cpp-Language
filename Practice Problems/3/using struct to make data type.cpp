#include "iostream"
using namespace std;

/*
    add code for struct here.
*/
struct Student
{
    int age;
    string first_name;
    string last_name;
    int marks;
};

int main() {
    Student st;
    cout << "Enter your age :";
    cin >> st.age;
    cout << "Enter your first name : ";
    cin >> st.first_name;
    cout << "Enter your last name : ";
    cin >> st.last_name;
    cout << "Enter your marks : ";
    cin>> st.marks;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.marks;

    return 0;
}