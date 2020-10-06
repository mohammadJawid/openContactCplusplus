//
// Created by jawid on 5/9/20.
//
#include <iostream>
#include "contact.h"

contact::contact(std::string fname, double mobile) {
    mv_first_name = fname;
    mv_mobile_number = mobile;
}

contact::contact(std::string fname, std::string lname, std::string email, std::string add, double mobile) {
    mv_first_name = fname;
    mv_last_name = lname;
    mv_email = email;
    mv_address = add;
    mv_mobile_number = mobile;
}

contact::~contact() {

}

void contact::mf_list_contacts() {
    std::cout << "first name :" << mv_first_name << '\n'
              << "Last Name :" << mv_last_name << '\n' << "Mobile Number :" << mv_mobile_number << std::endl;
}

void contact::mf_set_first_name(std::string s) {
    mv_first_name = s;
}
std::string contact::mf_get_first_name() const {
    return mv_first_name;
}

void contact::mf_set_last_name(std::string s) {
    mv_last_name = s;
}
std::string contact::mf_get_last_name() const {
    return mv_last_name;
}

void contact::mf_set_email(std::string s) {
    mv_email = s;
}
std::string contact::mf_get_email() const {
    return mv_email;
}

void contact::mf_set_address(std::string s) {
    mv_address = s;
}
std::string contact::mf_get_address() const {
    return mv_address;
}

void contact::mf_set_mobile_number(double d) {
    mv_mobile_number = d;
}
double contact::mf_get_mobile_number() const {
    return mv_mobile_number;
}