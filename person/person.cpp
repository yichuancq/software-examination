//
//  person.cpp
//  person
//
//  Created by yichuan on 2022/4/21.
//
//放在外部文件夹避免编译报错
#include "person.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define size 10

//show all
void show_all_persons();
//
class Person{
public:
    string name;//name
    int age;    //age
    char sex;   //sex
    Person();
    ~Person();
    //带参数构造函数
    Person(string name, int age,char sex);
    //
    
    //
    void show();
    
};
//初始化信息
void init_persons(Person p[size]);

//创建一个向量存储 Person
vector<Person> vector_persons;


//成员函数定义
Person::Person(){
    
};
//析构函数
Person::~Person(){
    
};
//构造函数
Person::Person(string name, int age,char sex){
    this->name=name;
    this->age=age;
    this->sex=sex;
};
///
void init_persons(Person p[size]){
    for(int i=0;i<size;i++){
        Person temp=p[i];
        //push data
        vector_persons.push_back(temp);
    }
};
///显示信息
void Person::show(){
    cout<<"name "<<this->name<<",age "<<this->age<<", sex "<<this->sex<<endl;
};
///显示所有
void show_all_persons(){
    // 使用迭代器 iterator 访问值
    //    for(int i=0;i<size;i++){
    //        Person p=vector_persons.at(i);
    //        cout<<"pname:"<<p.name<<endl;
    //        //vector_persons.pop_back();
    //    }
    //迭代显示
    vector<Person>::iterator itor = vector_persons.begin();
    int i=0;
    while(itor!= vector_persons.end() && i<size) {
        Person p=vector_persons.at(i);
        i++;
        cout<<"pname:"<<p.name<<endl;
        //cout<< "person:"<<(*itor).show()<< endl;
    }
};
