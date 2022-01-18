#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

class Person
{
protected:
    string Surname = "";        
    string Name = "";       
    string Patronymic = "";       

public:

    Person();
    Person(string surname, string name, string patronymic);

    ~Person();

    void SetSurname(string surname);
    void SetName(string name);
    void SetPatronymic(string patronymic);

    string GetSurname();
    string GetName();
    string GetPatronymic();

    void GetSurnameLink(string& surname);
    void GetNameLink(string& name);
    void GetPatronymicLink(string& patronymic);

    void Set(string surname, string name, string patronymic);

    void virtual InputFIO() = 0;

    void OutputPerson();

    virtual string WhoIs();

    void SayHello();
};