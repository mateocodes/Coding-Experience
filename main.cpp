/* 
Author(s): Perez, Matthew
Course: COMP B12, Fall 2022
Instructor: Richard Miles
Assignment: Capstone Project
Project purpose: Roster for Engineering Program, or any low-level club                  that just needs contact information
Date submitted: 2022/11/25
*/
#include "Member.h"
#include <string.h>
#include <memory>
using namespace std;

int main() {
  int choice = 1;
  int rosterSize;
  string N, M, E;
  int P;
  int check = 0;
  cout << "Hello! Welcome to the roster for the Engineering" << endl;
  cout << "Club at Bakersfield College!" << endl;
  cout << endl;
  cout << "How many members are there?" << endl;
  cin >> rosterSize;
  Member* arr[rosterSize];
  while (choice != 0){
    cout << endl;
    
    
    cout << "Please choose from one of the following options: " << endl;
    cout << "Type 1 and press enter to add new members." << endl;
    cout << "Type 2 and press enter to delete a member." << endl;
    cout << "Type 3 and press enter to search for a member and print their info." << endl;
    cout << "Type 4 and press enter to print the info for all members." << endl;
    cout << "Type 0 and press enter to end the program." << endl;
    cout << endl;
    cin >> choice;
    switch (choice){
      case 1:
        {
          for (int i=0; i < rosterSize+1; i++){
            cout << endl;
            cout << "Please enter member's full name: " << endl;
            getline(cin, N);
            arr[i]->SetMemberName(N);
            cout << "Pleaser enter member's major: " << endl;
            getline(cin,M);
            arr[i]->SetMemberMajor(M);
            cout << "Please enter member's email: " << endl;
            getline(cin,E);
            arr[i]->SetMemberEmail(E);
            cout << "Please enter member's phone number: " << endl;
            cin >> P;
            arr[i]->SetMemberNumber(P);
            cout << endl;
            
            
          }
          check++;
          break;
        }
      case 2: 
        {
          if (check == 0){
            cout << endl;
            cout << "There are no members to delete. Please be sure to choose option 1 before deleting." << endl;
            }

          else {
              
            
          }
          break;
        }
      case 3:
        {
          if (check == 0){
            cout << endl;
            cout << "There are no members to search for. Please be sure to choose option 1 before searching." << endl;
            }

          else {
              
            
          }
          
        }
        break;
      case 4:
        {

          if (check == 0){
            cout << endl;
            cout << "There are no members in the roster. Please be sure to choose option 1 before printing." << endl;
            }

          else {
              
            
            }
          break;
        }
       
      case 0:
        cout << "Thank you for using the program! Goodbye :)" << endl;
        break;

      
    }
      

    
  }
    
  
}