//
// Created by Pedro Pereira on 1/21/2025.
//

#include <iostream>

using namespace std;
struct Student;

void showElements (const Student *students, int length );

struct Student {
  string name;
  string address;
  int rollNo;
};

int main(){
  Student students_matrix [] = {
    {"Pedro", "Rua aa", 75},
    {"Vitor", "Rua AA", 73},
  };
  showElements(&students_matrix[0], sizeof(students_matrix)/sizeof(Student));
}

void showElements (const Student *students, const int length){
  for (int i = 0; i < length; i++){
    cout << "----------------------"<< endl;
    cout << students[i].name << endl;
    cout << students[i].address << endl;
    cout << students[i].rollNo << endl;
    cout << "----------------------"<< endl;
  }

}