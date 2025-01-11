//
// Created by Pedro Pereira on 12/2/2024.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void swap (int *a,int *b);

int main(){
    int a {10};
    int b {15};

    int *a_ptr {&a};
    int *b_ptr {&b};

    swap(&a,&b);

}

void swap (int *a,int *b){
    int temp  = *a;
    a = b;
    b = &temp;
    cout << "First values: "<< *a << endl;
    cout << "Second values: "<< *b << endl;
}
