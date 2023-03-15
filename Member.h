#ifndef MEMBERH
#define MEMBERH
#include <iostream>
#include <string.h>
using namespace std;

class Member {
  private:
  string name, major, email; 
  int phoneNum;

  public: 
  Member ();
  string GetMemberName();
  string GetMemberMajor();
  int GetMemberPhoneNum();
  string GetMemberEmail();
  void PrintInfo();
  void SetMemberName(string memName);
  void SetMemberMajor(string memMajor);
  void SetMemberEmail(string memEmail);
  void SetMemberNumber(int memNum);
};
#endif