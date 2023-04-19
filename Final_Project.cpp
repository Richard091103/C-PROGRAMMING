#include<iostream>
#include<string.h>
#include<iomanip>
#include<ctime>
using namespace std;

float Over_Hours(float hour);
float Over_Minutes(float min);
int withoutOver(int hour);
float withAbsent(float day);
int withoutAbsent(int day);

void Date(){
time_t now = time(0);
char* date = ctime(&now);
cout << "\t\t\t\t\t\t\t\t" << date << "\n\n";
}


#define pagibig 100.00
#define sss 1125.00

int main() {
int number, login = 0, i, hour, min, day;
float tax, overtime, absences, health, services, basic, salary;
char answer;
string user, username, password, code, calculator, name, email, age, phone;
    
 for (i = 1; i <= 95; i++){
	 cout << "*";
    }    
    
cout << "\n\t\t\t\tREPUBLIC OF THE PHILIPPINES\n";
cout << "\t\t\t\t---------------------------";
cout << "\n\t\t\t\tBUREAU OF INTERNAL REVENUE\n";
    
 for (i = 1; i <= 95; i++)
    {
	 cout << "*";
    }    
    
cout << "\n\n\tHi! Welcome to the Bureau's Online Withholding Tax Calculator\n";
cout << "\n\tA withholding tax is a tax that deducts a certain amount from an employee's salary ";
cout << "\n\tand sends it out to the government. The money is deducted from the annual income ";
cout << "\n\ttax of an employee.\n";
cout << "\n\t\t\tENTER ANY DIGIT OR LETTER TO START THE PROGRAM\n"; 
cout << "\n\t*The program is an automatic calculation of the withholding tax based solely on "; 
cout << "\n\tthe data given by the user in the appropriate areas. As a result, the amount of "; 
cout << "\n\twithholding tax owed, as calculated, cannot be used as a foundation for employee ";
cout << "\n\tcomplaints against their employers.*\n\n";   
    
 for (i = 1; i <= 95; i++){
	 cout << "*";
    }      

cout << "\nEnter here: ";
getline(cin, calculator);
       Menu:
 for (i = 1; i <= 95; i++){
	 cout << "*";
    }
cout << "\n\tBefore we proceed, are you here as an employee or guest?\n";     
cout << "\n\t\t\t[E] EMPLOYEE" << "\n\t\t\t[G] GUEST\n"; 
cout << "\n\tPlease enter the corresponding letter here: "; 
cin >> answer;
 switch(answer){
     case 'E':case 'e':
      cout << "\n";
      for (i = 1; i <= 95; i++){
         cout << "*";
        }
            login:
     cout << "\n\t\t--------------------EMPLOYEE LOGIN--------------------\n";
     cout << "\tDo you already have an account, or would you like to create a new one?";
     cout << "\n\t\t\t[1] LOGIN" << "\n\t\t\t[2] CREATE ACCOUNT\n"; 
     cout << "\n\tEnter the number here: "; 
     cin >> number;
         if(number==1){
 while(login<3){
        userpass:  
    cout << "\n\tUsername: ";
    cin >> user;
    cout << "\tPassword: ";
    cin >> password;
 if(user == username && password == code){
    cout << "\n";
    for (i = 1; i <= 95; i++){
         cout << "*";
        }
    cout << "\n\t\t--------------------EMPLOYEE MENU--------------------\n";
    cout << "\tHello " << name << ", welcome to the online management of your withholding tax.\n";
    cout << "\tWhat would you like to do?";
    cout << "\n\t\t\t[1] WITHHOLDING TAX CALCULATOR" << "\n\t\t\t[2] LOGIN SETTINGS\n";
    cout << "\t\t\t[3] LOGOUT\n"; 
    cout << "\n\tEnter the number here: "; 
    cin >> number;
     if(number==1){
       goto Calcu;
       }
     else if(number==2){
       for (i = 1; i <= 65; i++){
         cout << "*";
        }  
       cout << "\n\t-----LOGIN SETTINGS-----\n";
       cout << "\tUsername - " << username << endl;
       cout << "\tPassword - " << code << "\n\n";
       cout << "\tDo you want to change your username or password?\n";
       cout << "\t\t[1] YES" << "\n\t\t[2] NO/LEAVE\n";
       cout << "\tEnter the number here: ";
       cin >> number;
        if(number==1){
            cout << "\n\t-----CHANGE USERNAME/PASSWORD-----\n";
            cout << "\t[1] USERNAME" << "\n\t[2] PASSWORD\n";
            cout << "\tEnter here: ";
            cin >> number;
             if(number==1){
            cout << "\tEnter your new username here: ";
            cin >> username;
            user = username;
             }
             else if(number==2){
            cout << "\tEnter your new password here: ";
            cin >> code;
            password = code;
             }
        else if(number==2){
            goto employeeMenu;
             }          
       }
     }
     else if(number==3){
       goto end;  
     }
    }
 else {
    cout << "\n\tInvalid user, please try again.\n";
            login++;
    cout << "\tEnter [1] to continue or [2] to leave login: ";
    cin >> number;
     if(number==1){
       goto userpass;  
     }
     else if(number==2){
       goto login; 
     }
    }
 }
 if(login == 3){
    cout << "\n\tSorry, it looks like you've reached maximum login attempts. The program will now end.\n";
            goto end;
 }  
         }
         else if(number==2){
    cout << "\n\t-----CREATE ACCOUNT-----\n";
    cout << "\tEnter your username here: ";
    cin >> username;
    user = username;
    cout << "\tEnter password: ";
    cin >> code;
    password = code;
 while(login<3){
    cout << "\n\t-----LOGIN-----\n";
    cout << "\tUsername: ";
    cin >> user;
    cout << "\tPassword: ";
    cin >> password;
 if(user == username && password == code){
    cout << "\n";
         employeeMenu:
    for (i = 1; i <= 95; i++){
	 cout << "*";
    }          
    cout << "\n\t\t--------------------EMPLOYEE MENU--------------------\n";
    cout << "\tHello " << username << ", welcome to the online management of your withholding tax.\n";
    cout << "\tWhat would you like to do?";
    cout << "\n\t\t\t[1] WITHHOLDING TAX CALCULATOR" << "\n\t\t\t[2] LOGIN SETTINGS\n";
    cout << "\t\t\t[3] LOGOUT\n"; 
    cout << "\n\tEnter the number here: "; 
    cin >> number;
     if(number==1){
       goto Calcu;
       }
     else if(number==2){
       for (i = 1; i <= 65; i++){
         cout << "*";
        }  
       cout << "\n\t-----LOGIN SETTINGS-----\n";
       cout << "\tUsername - " << username << endl;
       cout << "\tPassword - " << code << "\n\n";
       cout << "\tDo you want to change your username or password?\n";
       cout << "\t\t[1] YES" << "\n\t\t[2] NO/LEAVE\n";
       cout << "\tEnter the number here: ";
       cin >> number;
        if(number==1){
            cout << "\n\t-----CHANGE USERNAME/PASSWORD-----\n";
            cout << "\t[1] USERNAME" << "\n\t[2] PASSWORD\n";
            cout << "\tEnter here: ";
            cin >> number;
             if(number==1){
            cout << "\tEnter your new username here: ";
            cin >> username;
            user = username;
             }
             else if(number==2){
            cout << "\tEnter your new password here: ";
            cin >> code;
            password = code;
             }
        else if(number==2){
            goto employeeMenu;
             }          
       }
     }
     else if(number==3){
       goto end;  
     }
    }
 else {
    cout << "\n\tInvalid user, please try again.\n" << '\n';
            login++;
    cout << "\tEnter [1] to continue or [2] to leave login: ";
    cin >> number;
     if(number==1){
       goto userpass;  
     }
     else if(number==2){
       goto login; 
     }
    }
 }
 if(login == 3){
    cout << "\n\tSorry, it looks like you've reached maximum login attempts. The program will now end.\n";
            goto end;
 } 
         }
         break;
     case 'G':case 'g': 
         break;                  
 }

    Calcu:
cout << "\n*Please answer with utmost sincerity and honesty*\n";
cout << "Name: ";
getline(cin, name);   
getline(cin, name);   
cout << "Age: ";
getline(cin, age);
cout << "Email Address: ";
getline(cin, email);
cout << "Phone Number: ";
getline(cin, phone);
cout << "\n*Don't include comma[,]*\n" << "Monthly Basic Salary: ";
cin >> basic;
salary = basic;
cout << endl;
    
 for (i = 1; i <= 95; i++){
	 cout << "*";
    }     
  
  back:
cout << "\n*Enter [Y] for YES or [N] for NO*\n";    
cout << "Do you have hour/s of overtime?\n";
cin >> answer;
 switch(answer){
     case 'Y':case 'y':
     overtime = Over_Hours(overtime);
         break;
     case 'N':case 'n':
     cout << "Do you have minutes of overtime?\n";
     cin >> answer;
       switch(answer){
          case 'Y':case 'y':    
          overtime = Over_Minutes(overtime);
               break;
          case 'N':case 'n':
          overtime = withoutOver(overtime);
               break;
          default: cout << "\nSorry, what you entered is invalid.\n";
             for (i = 1; i <= 95; i++){
                 cout << "*";
                }   
             goto back;
       }
          break;
      
     default: cout << "\nSorry, what you entered is invalid.\n";
         for (i = 1; i <= 95; i++){
             cout << "*";
            }   
         goto back;
 }
     
    secondBack:   
cout << "\nDo you have absences?\n";
cin >> answer;
 switch(answer){
     case 'Y':case 'y':     
     absences = withAbsent(absences);
         break;
     case 'N':case 'n':
     absences = withoutAbsent(absences);
         break;
     default: cout << "Sorry, what you entered is invalid.\n";
         for (i = 1; i <= 95; i++){
             cout << "*";
            }   
         goto secondBack;
 }

health = basic*0.035/2;
services = health+pagibig+sss+absences-overtime;
salary -= services;

 if(salary<=20833){
    tax = 0.00;
    }
 else if(salary>20833 && salary<=33332){
    tax = (salary-20833)*0.20;
    } 
 else if(salary>33332 && salary<=66666){
    tax = (salary-33333)*0.25+2500;
    }
 else if(salary>66666 && salary<=166666){
    tax = (salary-66667)*0.30+10833.33;
    }
 else if(salary>166666 && salary<=666666){
    tax = (salary-166667)*0.32+40833.33;
    }
 else if(salary>666666){
    tax = (salary-666667)*0.35+200833.33;
    }

cout << "\n\n";
 for (i = 1; i <= 95; i++){
     cout << "*";
    }   
cout << "\n\t\t\t\tBureau of Internal Revenue";
cout << "\n\t\t\t\t--------------------------";
cout << "\n\t\t\t\tWithholding Tax Calculator" << endl;
 for (i = 1; i <= 95; i++){
     cout << "*";
    }  

cout << "\n\tName: " << name << "\t\t\t\tEmail Address: " << email << endl;  
cout << "\tAge: " << age << "\t\t\t\t\t\t\tPhone Number: " << phone << "\n\n"; 
cout << "\tPhilHealth " << fixed << setprecision(2) << "(" << health << ")" << endl;    
cout << "\tPag-Ibig Fund "  << fixed << setprecision(2) << "(" << pagibig << ")" << endl;  
cout << "\tSSS "  << fixed << setprecision(2) << "(" << sss << ")" << endl;  
cout << "\tOvertime " << fixed << setprecision(2) << "(" << overtime << ")" << endl;    
cout << "\tAbsences "  << fixed << setprecision(2) << "(" << absences << ")" << "\n\n";  
cout << "\tYour Withholding Tax is " << fixed << setprecision(2) << tax << endl;
cout << "\tYour Taxable Income is " << fixed << setprecision(2) << salary << endl;
Date();

cout << "\n\tGo back to menu? Enter [1]\n" << "\tEnd program? Enter [2]\n";
cout << "\t";
cin >> number;
 if(number==1){
 goto Menu;   
 }
 else if(number==2){
 goto end;    
 }
end:    
return 0;
}

float withAbsent(float day){
float absent;
    cout << "How many days? ";
     cin >> day;
     absent = (day/30)*1000;  
    return absent;
}

int withoutAbsent(int day){
int absent;
    day = 0; 
    absent = (day/30)*1000;  
    return absent;   
}

float Over_Hours(float hour){
float over;
    cout << "How many hours? ";
     cin >> hour;
     over = (hour/720)*24000;  
    return over; 
}
float Over_Minutes(float min){
float hour, over;
    cout << "How many minutes? ";
     cin >> min;
     hour = min/60;
     over = (hour/720)*24000;    
    return over; 
}
int withoutOver(int hour){
int over;
     hour = 0;
     over = (hour/720)*24000;    
}