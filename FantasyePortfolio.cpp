{\rtf1\ansi\ansicpg1252\cocoartf1671\cocoasubrtf600
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 /*\
Author: Perez, Matthew\
Assignment: Special Programming Assignment - Fantasy ePortfolio\
Course: COMP B12\
Instructor: Richard Miles\
Date Submitted: 2022/09/02\
*/\
\
#include <iostream>\
#include <string> \
#include <stdio.h>\
\
\
using namespace std;\
\
//Functions\
void introduction();\
void menu();\
void lifestory();\
void academics();  \
void workhistory();\
void contactinfo();\
void hobbies();\
void examples();\
void philosophy();\
    \
\
int option = 1;\
\
int main() \
\{\
    const int choice1 = 1;\
    const int choice2 = 2;\
    const int choice3 = 3;\
    const int choice4 = 4;\
    const int choice5 = 5;\
    const int choice6 = 6;\
    const int choice7 = 7;\
    const int choice8 = 8;\
    const int choice0 = 0;\
\
    //Displays introduction\
    introduction ();\
    \
   \
   while (option != 0)\
   \{\
        //Displays menu\
        menu();\
        cout << endl; \
    \
        //User inputs option\
        cin >> option;\
        cout << endl;\
       \
        //Error input function\
         while (option < choice0 || option > choice8)\
            \{\
             cout << "You did not choose a valid option, please try again!" << endl << endl;\
                cin >> option; \
             \}\
   \
\
            switch (option)\
            \{\
            case choice1:\
                lifestory();\
                break;\
            \
            case choice2:\
                cout << "I am a Electrical Engineering student at Bakersfield College. " << endl;\
                 break;\
            \
             case choice3:\
                academics();\
                 break;\
            \
             case choice4:\
                workhistory();\
                  break;\
            \
              case choice5:\
                contactinfo();\
                break;\
            \
             case choice6:\
                hobbies();\
                    break;\
            \
             case choice7:\
                examples();\
                 break;\
            \
              case choice8:\
                philosophy();\
                    break;\
            \}\
            \
            //Skips ten lines for neatness\
            cout << "\\n\\n\\n\\n\\n\\n\\n\\n\\n\\n"; \
   \}\
   \
   \
   \
    \
  \
  \
\}\
\
//Introduction function\
void introduction()\
    \{\
    cout << "Hello, welcome to Matt's ePortfolio!" << endl << endl;\
    cout << "To get started, please type your name:" << endl; \
    string usersName;\
    cin >> usersName;\
    cout << endl<< "Nice to meet you, " << usersName << "!" << endl; \
  \
    \}\
    \
//Menu function   \
void menu()\
    \{\
       cout << "What would you like to know about me?" << endl << endl << endl;\
       cout << "Instructions: Type the corresponding number to your corresponding question then hit enter!" << endl;\
       cout << "1. Who Matt is?" << endl;\
       cout << "2. What is Matt's job title?" << endl;\
       cout << "3. What is Matt's academic history?" << endl;\
       cout << "4. What is Matt's prior work experience?" << endl;\
       cout << "5. What is Matt's contact information?" << endl;\
       cout << "6. What does Matt do in his free time?" << endl;\
       cout << "7. What are some codes that Matt has wrote?" << endl;\
       cout << "8. What is Matt's philosophy on coding?" << endl;   \
       cout << "0. Quit" << endl;\
    \}\
\
//My life story function \
void lifestory()\
    \{\
        cout << "\\n\\n";\
        cout << "I'm Matthew Perez, I am 20 years old and am " << endl;\
        cout << "an Engineering student here at Bakersfield College,\\n";\
        cout << "a.k.a. Harvard on the Hill. I am hoping\\n";\
        cout << "to transfer out to Cal Poly San Luis Obispo\\n";\
        cout << "or UC Berkeley by Fall 2023 for Electrical Engineering.\\n";\
        cout << "I haven't quite narrowed down what specific company to\\n";\
        cout << "work for, but I do know that they have to make the \\n";\
        cout << "community or world better.";\
    \}\
\
//Academic history function\
void academics()\
    \{\
        cout << "\\n\\n"; \
        cout << "I attended California State University, Bakersfield\\n";\
        cout << "during Fall of 2019, I dropped out mid semester and\\n";\
        cout << "did not return to school until Spring of 2020 at \\n";\
        cout << "Bakersfield College. Since attending college, I \\n";\
        cout << "I have gotten the Kern Energy & Ag Academy \\n";\
        cout << "scholarship twice, I have had a civil engineering \\n";\
        cout << "internship with the Natural Resource Conservation Service (NRCS).\\n";\
        cout << "I have also recently been selected to attend the Hispanic\\n";\
        cout << "Association of Colleges and Universities' Annual Conference,\\n";\
        cout << "as well as the Mathematics, Engineering, Science Achievement (MESA)\\n";\
        cout << "program's statewide conference for this year.\\n";\
        cout << "I have not gotten any of my associates yet, however \\n";\
        cout << "I am projected to receive an associates in math, physics, \\n";\
        cout << "and engineering (for transfer) this spring 2023.";\
    \}\
    \
void workhistory()\
    \{\
        cout << "I have some engineering experience with Autocad, surveying, friction losses, and pump curves that "<< endl;\
        cout << "I learned from my time with Natural Resource Conservation Service as a civil engineering intern. "<< endl;\
        cout << "I also have some coding and circuit knowledge from my courses at Bakersfield College and Bakersfield High School"<< endl;\
        cout << "that I have used for my student job as a Peer Mentor for the Bakersfield College MESA Program."<< endl;\
        cout << "For my job I have previously built simple circuits with displays to display important information (such as a "<< endl; \
        cout << "remind code) for students interested in joining the MESA program." << endl;\
    \}\
    \
void contactinfo()\
    \{\
        cout << "Phone Number: 111-111-1111" << endl;\
        cout << "Mailing Address: 912 Petal Dr., Los Angeles, Ca" << endl;\
        cout << "Email Address: matthew.perez2001@email.bakersfieldcollege.edu" << endl;\
    \}\
    \
void hobbies()\
    \{\
        cout << "My hobbies include listening to different genres of music and learning about the different styles." << endl;\
        cout << "I also really enjoy skateboarding, it's one of my favorite ways to exercise and have fun." << endl;\
        cout << "I also occassionally like to garden, this summer I grew 3 different tomato plants and 2 jalapeno plants," << endl;\
        cout << "eventually I would like to expand my garden and automate it at some point in the future." << endl;\
    \}\
\
void examples()\
    \{\
        cout << "Please copy and paste the link into your favorite internet browser:" << endl;\
        cout << "https://github.com/bornamutt/COMP-B12.git" << endl;\
    \}\
void philosophy()\
    \{\
        cout << "I believe to achieve the highest quality results when producing a program it is up to the programmer " << endl;\
        cout << "to write well organized and concise code to ensure that the program is as efficient as possible. " << endl;\
        cout << "This is so that other programmers who come later to adjust or make changes to the program, it will " << endl;\
        cout << "be very easy for them to follow the methodology of the program and ensure that the user has a great" << endl;\
        cout << "experience with the program." << endl;\
    \}\
    }