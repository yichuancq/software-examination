//
//  main.cpp
//  person
//
//  Created by yichuan on 2022/4/21.
//
#include "person.cpp"
//#include "/Users/yichuan/Documents/software examination/person/person.cpp"
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    Person p1;
    p1.name="小明";
    p1.age=22;
    p1.sex='1';
    //show person
    p1.show();
//    vector_persons.clear();
//    Person persons[size];
//
//    for(int i=0;i<size;i++){
//        persons[i]=Person("小明"+i,20+i, '1');
//    }
//    init_persons(persons);
//    show_all_persons();
    return 0;
}
