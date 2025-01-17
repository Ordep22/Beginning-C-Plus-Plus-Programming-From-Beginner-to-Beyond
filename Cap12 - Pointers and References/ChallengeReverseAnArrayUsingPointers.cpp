//
// Created by Pedro Pereira on 1/13/2025.
//

#include <iostream>
#include <vector>
using namespace std;

void Revert_Vector(vector <int> *vec, int vec_size);
void Show_Vector(vector <int> &vec, int vec_size);
void Populate_Vector(vector <int> *vec, int vec_size);


void Show_Vector(vector <int> &vec, int vec_size) {
    for (int i = 0; i < vec_size; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void Revert_Vector(vector <int> *vec, int vec_size){

    int *first_value = vec->data();
    int *last_value  = vec->data() + vec_size - 1;

    for (size_t i = 0; i < vec_size/2; i++) {
        swap(*first_value, *last_value);
        --last_value;
        ++first_value;
    }
}

int main() {
    int number_elements;
    int element;
    vector <int> vec {};

    cout << "Enter number of elements: ";
    cin >> number_elements;
    for (int i =0; i < number_elements; i++ ) {
        cout << "Enter Element"<<" [" << i << "] - ";
        cin >> element;
        vec.push_back(element);
    }
    cout << "The original vector" << endl;
    Show_Vector(vec, vec.size());

    Revert_Vector(&vec, vec.size());

    cout << "Th reversed vector" << endl;
    Show_Vector(vec, vec.size());


}


