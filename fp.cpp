#include <iostream>
#include <fstream> 
#include <iomanip> 
#include <ios> 
#include <limits> 

using namespace std;

// VARIABLES
const int maxrow = 99;
string StudentName[maxrow] = {};
string StudentID[maxrow] = {};
string Birthday[maxrow] = {};
string Address[maxrow] = {};
string Gender[maxrow] = {};
string DegreeProgram[maxrow] = {};
string Year[maxrow] = {};


// THIS CODE IS FOR SAVING THE DATA INTO TEXT FILE
void OpenFile()
{
    string line;
    ifstream myfile("C:\\studentRecords.txt");
    if (myfile.is_open())
    {
        int x = 0;
        while (getline(myfile, line))
        {
            int l = line.length();
            StudentID[x] = line.substr(0, 3);
            StudentName[x] = line.substr(4, 1 - 4);
            Birthday[x] = line.substr(0, 3);
            Address[x] = line.substr(4, 1 - 4);
            Gender[x] = line.substr(0, 3);
            DegreeProgram[x] = line.substr(4, 1 - 4);
            Year[x] = line.substr(4, 1 - 4);
            x++;
        }
    }
    else
    {
        cout << "Enable to open the file!" << endl;
    }
}



// TO ADD RECORD
void AddRecord()
{
    char fullname[50];
    char studentno[50];
    char birthday[50];
    char address[50];
    char gender[50];
    char degree[50];
    char year[50];

    cin.ignore();

    cout << "Student ID: ";
    cin.getline(studentno, 5);
    cout << "Student Name: ";
    cin.getline(fullname, 50);
    cout << "Birthday: ";
    cin.getline(birthday, 10);
    cout << "Address: ";
    cin.getline(address, 50);
    cout << "Gender: ";
    cin.getline(gender, 10);
    cout << "Degree Program: ";
    cin.getline(degree, 10);
    cout << "Year: ";
    cin.getline(year, 5);

    for (int x = 0; x < maxrow; x++)
    {
        if (StudentID[x] == "\0")
        {
            StudentID[x] = studentno;
            StudentName[x] = fullname;
            Birthday[x] = birthday;
            Address[x] = address;
            Gender[x] = gender;
            DegreeProgram[x] = degree;
            Year[x] = year;
            
            break;
        }
    }

}

// LISTING ALL RECORDS
void ListRecord()
{
    system("clear");
    cout << "Current Record/s" << endl;
    cout << "============================================================================================================================================";

    int counter = 0;

    cout << "\n NO.   |   ID   |       Name       |       Birthday       |       Address       |       Gender       |       Program       |       Year       " << endl << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

    for (int x = 0; x < maxrow; x++)
    {
        if(StudentID[x] != "\0")
        {
            counter++;
            cout << " " << counter << "        " << StudentID[x] << "      " << StudentName[x] << "          " << Birthday[x] << "                  " << Address[x] << "               " << Gender[x] << "                 " << DegreeProgram[x] << "              " << Year[x] << endl;
        }
    
    }

    if (counter == 0)
    {
        cout << "No Record Found!" << endl;
    }

    cout << "============================================================================================================================================\n\n" << endl;


}

// CODE FOR SEARCHING THE RECORD BY STUDENT ID
void SearchRecord(string search)
{
    system("clear");
    cout << "Current Record/s" << endl;
    cout << "============================================================================================================================================";
 
    int counter = 0;
       
 
    for (int x = 0; x < maxrow; x++)
    {
       
        if(StudentID[x] == search)
        {
            counter++;
            cout << "\n NO.   |   ID   |       Name       |       Birthday       |       Address       |       Gender       |       Program       |       Year       " << endl << "--------------------------------------------------------------------------------------------------------------------------------------------\n";
            cout << " " << counter << "        " << StudentID[x] << "      " << StudentName[x] << "          " << Birthday[x] << "                  " << Address[x] << "               " << Gender[x] << "                 " << DegreeProgram[x] << "              " << Year[x] << endl;
            break;
        }
   
    }
 
    if (counter == 0)
    {
        cout << "\n------------------------------------------------------------ No Record Found! ------------------------------------------------------------" << endl;
    }
 
cout << "============================================================================================================================================" << endl;
 
 
}


// CODE FOR UPDATING THE RECORD/S INFORMATION
void UpdateRecord (string search)
{
    char fullname[50];
    char studentno[50];
    char birthday[50];
    char address[50];
    char gender[50];
    char degree[50];
    char year[50];

    int counter = 0;

    for (int x = 0; x < maxrow; x++)
    {
        if (StudentID[x] == search)
        {
            counter++;

            
            cout << "Student Name: ";
            cin.getline(fullname, 50);
            cout << "Birthday: ";
            cin.getline(birthday, 10);
            cout << "Address: ";
            cin.getline(address, 50);
            cout << "Gender: ";
            cin.getline(gender, 10);
            cout << "Degree Program: ";
            cin.getline(degree, 10);
            cout << "Year: ";
            cin.getline(year, 5);


            StudentName[x] = fullname;
            Birthday[x] = birthday;
            Address[x] = address;
            Gender[x] = gender;
            DegreeProgram[x] = degree;
            Year[x] = year;

            break;
        }
    }


    if (counter == 0)
    {
        cout << "ID Doest not exist!" << endl;
    }
}

// DELETING RECORDS BY STUDENT ID
void DeleteRecord(string search)
{
    
    int counter = 0;

    for (int x = 0; x < maxrow; x++)
    {
        if (StudentID[x] == search)
        {
            counter++;
            
            StudentID[x] = "";
            StudentName[x] = "";
            Birthday[x] = "";
            Address[x] = "";
            Gender[x] = "";
            DegreeProgram[x] = "";
            Year[x] = "";

            cout << "Successfully Deleted!" << endl;
            break;
        }
    }

    if (counter == 0)
    {
        cout << "ID Doest not exist!" << endl;
    }
}

void SaveToFile()
{
    ofstream myfile;
    myfile.open("C:\\studentRecords.txt", ios::out);

    for (int x = 0; x < maxrow; x++)
    {
        if (StudentID[x] == "\0")
        {
            break;
        }
        else
        {

            myfile << "Student ID: " + StudentID[x] + "\nFull Name: " + StudentName[x] + "\nBirthday: "  + Birthday[x] + "\nAddress" + Address[x] + "\nGender: " + Gender[x] + "\nDegree Prgram: " + DegreeProgram[x] + "\nYear: " + Year[x] << endl;
        }
    }
}


int main ()
{
    int option;
    string studentID;
    system ("clear");

    do {
        // MENU
        cout << "+==============================================+" << endl;
        cout << "\t\t      MENU\t\t\t" << endl;
        cout << "+==============================================+" << endl;
        cout << "1 - Create Records" << endl;
        cout << "2 - Update Records" << endl;
        cout << "3 - Delete Records" << endl;
        cout << "4 - Search Records" << endl;
        cout << "5 - Display All Records" << endl;
        cout << "6 - Exit......Saving File" << endl;
        cout << "+==============================================+" << endl;
    
        cout << "Select Option: ";
        cin >> option;

    // SWITCH STATEMENT
    switch (option)
    {
        case 1: AddRecord();
                system("clear");
                cout << "\nRECORD ADDED!\n\n";
                break;

        case 2:
                cin.ignore();
                cout << "Search by ID: ";
                getline(cin, studentID);
                UpdateRecord(studentID);
                cout << "\nRECORD UPDATED!\n\n";
                system ("clear");
                break;

        case 3:
                cin.ignore();
                cout << "Delete by ID: ";
                getline(cin, studentID);
                DeleteRecord(studentID);
                cin.ignore();
                system ("clear");
                break;

        case 4: 
                cin.ignore();
                cout << "Search by ID: ";
                getline(cin, studentID);
                SearchRecord(studentID);
                break;

        case 5: ListRecord();
                break;

    }

    } while (option != 6); 

    SaveToFile();
    cout << "Exit....Saving to file" << endl;
    
    cout << "\n\nGroup Name: RK";
    cout << "\nMembers: Richard Meneses and Krista Enriquez\n\n";

    return 3;
}