#include "Member.h"

Member::Member(){
  name = "no name";
  major = "no major";
  email = "no email";
  phoneNum = 00000000000;
}


string Member::GetMemberName(){
  return name;
}

string Member::GetMemberMajor(){
  return major;
}

int Member::GetMemberPhoneNum(){
  return phoneNum;
}

string Member::GetMemberEmail(){
  return email;
}

void Member::PrintInfo(){
  cout << "Full Name: " << name << endl;
  cout << "Major: " << major << endl;
  cout << "Email: " << email << endl;
  cout << "Phone Number: " << phoneNum << endl;
}

void Member::SetMemberName(string memName){
  name = memName;
}

void Member::SetMemberMajor(string memMajor){
  major = memMajor;
}

void Member::SetMemberEmail(string memEmail){
  email = memEmail;
}

void Member::SetMemberNumber(int memNum){
  phoneNum = memNum;
}