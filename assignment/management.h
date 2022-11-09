#pragma once

#ifndef _MANAGEMENT_H_
#define _MANAGEMENT_H_

#include<iostream>
#include<fstream>
#include<vector>
#include<regex>
#include<sstream>
#include<string>

using namespace std;

class customerManagement
{
    public:
        string id, name, email, phone, balance;
};

extern vector<customerManagement> manage;
extern fstream Customer_File;
extern int numOfCus;
extern int option;
extern bool warning_flag;

void optionDisplay();
void findingOptionDisplay();
vector<string> tokenize(string s, string del);
void loadData();

bool valid_id(string data);
bool valid_email(string data);
bool valid_phone(string data);
int isSubstring(string s1, string s2);

void warning();
void updateEverything();
void addNewCustomer();

void findCustomer();
void findCustomer_Handler(int finding, string data);

void modifyCustomer();
void modifyCustomer_Handler(int finding, string id_find, string data);

#endif
