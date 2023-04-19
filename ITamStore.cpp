#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // variables for Contact Information
    long long int ID_Number, Contact_Number;
    string Full_Name;
    char ID_Type, Address;
    double Discount;

    cout << "\n+-----------------------------------------------------------------------------------------------------------------------+";
    cout << "\n                %%                   %                                                                                ";
    cout << "\n               %%&                   %%%               ___  _________  ________  _____ ______                          ";
    cout << "\n              %%%%                   %(%&             |\\  \\|\\___   ___\\\\   __  \\|\\   _ \\  _   \\                        ";
    cout << "\n             &%/%%                   %/%%             \\ \\  \\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\\\\\__\\ \\  \\                       ";
    cout << "\n             %%//%%                 %%,/%(             \\ \\  \\   \\ \\  \\ \\ \\   __  \\ \\  \\\\|__| \\  \\                     ";
    cout << "\n              %%(%/%%               %%,,*%#              \\ \\  \\   \\ \\  \\ \\ \\  \\ \\  \\ \\  \\    \\ \\  \\                     ";
    cout << "\n              %%%,((%%%           %&,,,(%(                \\ \\__\\   \\ \\__\\ \\ \\__\\ \\__\\ \\__\\    \\ \\__\\                   ";
    cout << "\n               %%%,*,%/,%%%@@&%%%,,,,,,#%&                 \\|__|    \\|__|  \\|__|\\|__|\\|__|     \\|__|                   ";
    cout << "\n               #%%/,%(*%#,,%%%,,,,,,,,#%&                                                                              ";
    cout << "\n               &%%(,*,((/(%,,,,,,,,%%                          ________  _________  ________  ________  _______        ";
    cout << "\n           %##(%***,%*#/#(*,,,,,,&%%#,,/%&                    |\\   ____\\|\\___   ___\\\\   __  \\|\\   __  \\|\\  ___ \\       ";
    cout << "\n         &#%/%%%%(%%%##,*&(/,,,,%%%%,%%*,,,&%                 \\ \\  \\___|\\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\|\\  \\ \\   __/|      ";
    cout << "\n           ,.   %*,%  &%%,%*,,/%* *%*,%   %.                   \\ \\_____  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\   _  _\\ \\  \\_|/__    ";
    cout << "\n                %/(#*(%*%%%*,,#%%%%%*/%                         \\|____|\\  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\  \\\\  \\\\ \\  \\_|\\ \\   ";
    cout << "\n                 %(#,%*%%,%*,,,,/%,%%%                            ____\\_\\  \\   \\ \\__\\ \\ \\_______\\ \\__\\\\ _\\\\ \\_______\\  ";
    cout << "\n                    ,&,%%*%*,,%**%%                              |\\_________\\   \\|__|  \\|_______|\\|__|\\|__|\\|_______|  ";
    cout << "\n                     %*%%*%*,/,,(%                               \\|_________|                                          ";
    cout << "\n                     *%%%%*%%,,,*%                                                                                     ";
    cout << "\n                      %%%%*%/,,/%                                                                                      ";
    cout << "\n                       %%/*%%%%                                                                                        ";
    cout << "\n                                                                                                    .... v.1.0.1<dev>";
    cout << "\n+-----------------------------------------------------------------------------------------------------------------------+";

    //For Custumer Details
    cout << "\n\nCONTACT DETAILS:";
    cout << "\nPlease fill up the following details:";

    cout << "\n\nFirst Name and Last Name: ";
    getline(cin, Full_Name); // instead na cin >> First_Name >> Last_Name we use get line para hindi matapos agad yung program
    cout << "";              // pag inalis ito mag kakaroon ng new line agad para hindi mag karoon ng space kay ID Number

    cout << "ID Number: ";
    cin >> ID_Number;

    // to determine discount percentage
    cout << "ID Type (Teacher or Student, Type T/S): ";
    cin >> ID_Type; // long long int para di matapos agad program

    if ((ID_Type == 'T') || (ID_Type == 't'))
    {
        Discount = 0.10;
    }
    if ((ID_Type == 'S') || (ID_Type == 's'))
    {
        Discount = 0.20;
    }

    cout << "Contact No#: "; 
    cin >> Contact_Number;   //long long int para mas malaki kaya niyang ienter ng num kasi diba 0917******** since may limit ang kayang hold

    cout << "What is your location [L - Luzon, V - Visayas, M - Mindanao]: ";
    cin >> Address;

    cout << "\n+-----------------------------------------------------------------------------------------------------------------------+";

    cout << "\n\n\t\t\t\t+---------------------------------------------------------+";
    cout << "\n\t\t\t\t|                   ~~~ MERCHANDISE ~~~                   |";
    cout << "\n\t\t\t\t+---------------------------------------------------------+";
    cout << "\n\t\t\t\t|  PRODUCT NUMBER   |   PRODUCT NAME   |    ITEM PRICE    |";
    cout << "\n\t\t\t\t+---------------------------------------------------------+";
    cout << "\n\t\t\t\t|        [1]        |     JACKET       |    Php 800.00    |";
    cout << "\n\t\t\t\t|        [2]        |     TUMBLER      |    Php 650.00    |";
    cout << "\n\t\t\t\t|        [3]        |     T-SHIRT      |    Php 500.00    |";
    cout << "\n\t\t\t\t|        [4]        |     CAP          |    Php 200.00    |";
    cout << "\n\t\t\t\t|        [5]        |     LANYARD      |    Php 100.00    |";
    cout << "\n\t\t\t\t+---------------------------------------------------------+";
    cout << "\nPlease Refer to the table above to input the product number: ";

    //Variable for mechandise
    string product;
    int productNum, qty, Jacketqty = 0, Tumblerqty = 0, Tshirtqty = 0, Capqty = 0, Lanyardqty = 0;
    double jacket_price = 800.00, tshirt_price = 500.00, lanyard_price = 100.00, tumbler_price = 650.00, cap_price = 200.00, Total_Price, sum;
    char choice;
    bool activateJacket = false, activateTumbler = false, activateTshirt = false, activateCap = false, activateLanyard = false;
    double totalCalulated = 0, totalJacket = 0, totalTumbler = 0, totalTee = 0, totalCap = 0, totalLanyard = 0;
    int totalItems;

    do
    {

        cout << "\n\nEnter Product Number: ";
        cin >> productNum;

        switch (productNum)
        {
        case 1:
            product = "Jacket";
            activateJacket = true;

            cout << "How many " << product << " would you like: ";
            cin >> qty;
            Jacketqty = Jacketqty + qty;
            totalJacket = jacket_price * Jacketqty;
            break;

        case 2:
            product = "Tumbler";
            activateTumbler = true;

            cout << "How many " << product << " would you like: ";
            cin >> qty;
            Tumblerqty = Tumblerqty + qty;
            totalTumbler = tumbler_price * Tumblerqty;

            break;

        case 3:
            product = "T-Shirt";
            activateTshirt = true;

            cout << "How many " << product << " would you like: ";
            cin >> qty;
            Tshirtqty = Tshirtqty + qty;
            totalTee = tshirt_price * Tshirtqty;
            break;

        case 4:
            product = "Cap";
            activateCap = true;

            cout << "How many " << product << " would you like: ";
            cin >> qty;
            Capqty = Capqty + qty;
            totalCap = cap_price * Capqty;
            break;

        case 5:
            product = "Lanyard";
            activateLanyard = true;

            cout << "How many " << product << " would you like: ";
            cin >> qty;
            Lanyardqty = Lanyardqty + qty;
            totalLanyard = lanyard_price * Lanyardqty;

            break;

        default:
            cout << "Invalid";
            cout << "\nPlease Try Again";
            break;
        }

        cout << "\n\nAdd another Item? Y/N: "; // If user want add another items
        cin >> choice;
    } while (choice == 'Y' || choice == 'y'); 

    totalCalulated = totalJacket + totalTumbler + totalTee + totalCap + totalLanyard; // Compute initial price
    totalItems = Jacketqty + Tumblerqty + Tshirtqty + Capqty + Lanyardqty; // Compute all items

    cout << "\n+-----------------------------------------------------------------------------------------------------------------------+";

    //For display ng price na may .00 kasi pag wala whole number lang lalabas
    cout << fixed;
    cout.precision(2);

    cout << "\n\n\n\t\t\t\t\t   +-------------------------------+";
    cout << "\n\t\t\t\t\t   |     ~~~ MODE OF PAYMENT ~~~   |";
    cout << "\n\t\t\t\t\t   +-------------------------------+";
    cout << "\n\t\t\t\t\t   |     [1]     |  G-Cash         |";
    cout << "\n\t\t\t\t\t   |     [2]     |  Paymaya        |";
    cout << "\n\t\t\t\t\t   |     [3]     |  Remittance     |";
    cout << "\n\t\t\t\t\t   |     [4]     |  Online Banking |";
    cout << "\n\t\t\t\t\t   +-------------------------------+";

    //Variable for mode of payment
    int Mode_of_Payment;
    string MOD = " ";
    
    cout << "\n\nWhat is your Mode of Payment? ";
    cin >> Mode_of_Payment;

    switch (Mode_of_Payment)
    {
    case 1:
        cout << "You choose G-Cash for Payment";
        MOD = "GCASH";
        break;
    case 2:
        cout << "You choose Paymaya for Payment";
        MOD = "Paymaya";
        break;
    case 3:
        cout << "You choose Remittance for Payment";
        MOD = "Remittance";
        break;
    case 4:
        cout << "You choose Online Banking for Payment";
        MOD = "Online Banking";
        break;
    default:
        cout << "INVALID";
    }
    
    cout << "\n+-----------------------------------------------------------------------------------------------------------------------+";

    cout << "\n\n\n\t+----------------------------------+\t +------------------------------------------------------------+";
    cout << "\n\t|          ~~~ COURIER ~~~         |\t |              ~~~ SHIPPING FEE PER REGION ~~~               |";
    cout << "\n\t+----------------------------------+\t +------------------------------------------------------------+";
    cout << "\n\t| COURIER NUMBER  |  COURIER NAME  |\t |  METRO MANILA  |    LUZON     |   VISAYAS   |   MINDANAO   |";
    cout << "\n\t+----------------------------------+\t +------------------------------------------------------------+";
    cout << "\n\t|       [1]       |   LBC          |\t |   Php 180.00   |  Php 200.00  |  Php 250.00 |  Php 300.00  |";
    cout << "\n\t|       [2]       |   GoGo Xpress  |\t |   Php 80.00    |  Php 100.00  |  Php 150.00 |  Php 200.00  |";
    cout << "\n\t|       [3]       |   J&T Express  |\t |   Php 85.00    |  Php 95.00   |  Php 100.00 |  Php 150.00  |";
    cout << "\n\t+----------------------------------+\t +------------------------------------------------------------+";

    //Variable for Shipping section
    int courier, region;
    string courier_type;
    char entered;
    double shipping_fee;

    do
    {
        cout << "\n\nWhat is your prefered courier [Choose from 1 to 3]: ";
        cin >> courier;
        entered = '0';

        if (courier == 1)
        {
            courier_type = "LBC";
            cout << "What is your Region [1 - Metro Manila, 2 - Luzon, 3 - Visayas, 4 - Mindanao]: ";
            cin >> region;
            if (region == 1)
            {
                shipping_fee = 180.00;
            }
            else if (region == 2)
            {
                shipping_fee = 200.00;
            }
            else if (region == 3)
            {
                shipping_fee = 250.00;
            }
            else if (region == 4)
            {
                shipping_fee = 300.00;
            }
            else
            {
                cout << "Invalid Region\n";
                cout << "Press 1 to try again:";
                cin >> entered;
                
            }
        }
        else if (courier == 2)
        {
            courier_type = "GOGOXPRESS";
            cout << "\nWhat is your Region [1 - Metro Manila, 2 - Luzon, 3 - Visayas, 4 - Mindanao]: ";
            cin >> region;
            if (region == 1)
            {
                shipping_fee = 80.00;
            }
            else if (region == 2)
            {
                shipping_fee = 100.00;
            }
            else if (region == 3)
            {
                shipping_fee = 150.00;
            }
            else if (region == 4)
            {
                shipping_fee = 200.00;
            }
            else
            {
                cout << "Invalid Region\n";
                cout << "Press 1 to try again:";
                cin >> entered;
            }
        }
        else if (courier == 3)
        {
            courier_type = "J&T";
            cout << "\nWhat is your Region [1 - Metro Manila, 2 - Luzon, 3 - Visayas, 4 - Mindanao]: ";
            cin >> region;
            if (region == 1)
            {
                shipping_fee = 85.00;
            }
            else if (region == 2)
            {
                shipping_fee = 95.00;
            }
            else if (region == 3)
            {
                shipping_fee = 100.00;
            }
            else if (region == 4)
            {
                shipping_fee = 150.00;
            }
            else
            {
                cout << "Invalid Region\n";
                cout << "Press 1 to try again:";
                cin >> entered;
            }
        }
        else
        {
            // If wala sa choices, the system ask user to try again by pressing 1 
            cout << "Invalid Courier\n";
            cout << "Press 1 to try again:";
            cin >> entered;
            
        }
    } while (entered == '1');
    

    cout << "\n+-----------------------------------------------------------------------------------------------------------------------+";
    cout << "\n\t\t\t \t\t        OFFICIAL RECIEPT:";

    //Discount and Total Price computation    
    double discountedPrice, price; // variables
    discountedPrice = Discount * totalCalulated;
    price = totalCalulated - discountedPrice;
    Total_Price = price + shipping_fee;

    // To generate random number
    int refNum;
    srand(time(NULL));
    refNum = rand() % 999999 + 111111;

    // Generate Time and Date
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string discountType;

    cout << "\n\t\t\t+-----------------------------------------------------------+";
    cout << "\n\t\t\t|\t\t                          \t\t    |";
    cout << "\n\t\t\t|\t\t    ITAM MERCHANDISE STORE \t\t    |";
    cout << "\n\t\t\t|\t\t   P. Paredes St, Sampaloc \t\t    |";
    cout << "\n\t\t\t|\t\t  Manila, 1015 Metro Manila \t\t    |";
    cout << "\n\t\t\t|\t\t       (02) 8281 8888      \t\t    |";
    cout << "\n\t\t\t|\t\t                          \t\t    |";
    cout << "\n\t\t\t|   -----------------------------------------------------   |";
    cout << "\n\t\t\t|\t\t                          \t\t    |";
    cout << "\n\t\t\t|   REF NO# " << refNum << "\t\t\t\t\t    |";
    cout << "\n\t\t\t|   DATE: " << ltm->tm_mon + 1 << "/" << ltm->tm_mday << "/" << ltm->tm_year + 1900 << "\t\t\t\t\t    |";
    cout << "\n\t\t\t|   TIME: " << 1 + ltm->tm_hour << ":" << 1 + ltm->tm_min << ":" << 1 + ltm->tm_sec << "\t\t\t\t\t    | ";
    cout << "\n\t\t\t|\t\t                          \t\t    |";
    cout << "\n\t\t\t|   -----------------------------------------------------   |";
    cout << "\n\t\t\t|   ITEM\tQTY\t  UNIT PRICE\t    AMOUNT\t    |";
    cout << "\n\t\t\t|   -----------------------------------------------------   |";

    if (activateJacket)
    {
        cout << "\n\t\t\t|   JACKET\t" << Jacketqty << "\t  Php " << jacket_price << "\t    Php " << totalJacket << "\t    |";
    }

    if (activateTumbler)
    {
        cout << "\n\t\t\t|   TUMBLER\t" << Tumblerqty << "\t  Php " << tumbler_price << "\t    Php " << totalTumbler << "\t    |";
    }

    if (activateTshirt)
    {
        cout << "\n\t\t\t|   T-SHIRT\t" << Tshirtqty << "\t  Php " << tshirt_price << "\t    Php " << totalTee << "\t    |";
    }

    if (activateCap)
    {
        cout << "\n\t\t\t|   CAP\t\t" << Capqty << "\t  Php " << cap_price << "\t    Php " << totalCap << "\t    |";
    }

    if (activateLanyard)
    {
        cout << "\n\t\t\t|   LANYARD\t" << Lanyardqty << "\t  Php " << lanyard_price << "\t    Php " << totalLanyard << "\t    |";
    }

    //discount label
    if ((ID_Type == 's') || (ID_Type == 'S'))
    {
        discountType = "20% STUDENT DISCOUNT";
    }
    else if ((ID_Type == 't') || (ID_Type == 'T'))
    {
        discountType = "10% TEACHER DISCOUNT";
    }
    cout << "\n\t\t\t|\t\t                          \t\t    |";
    cout << "\n\t\t\t|   Total Items\t\t\t\t         " << totalItems << "\t    |";
    cout << "\n\t\t\t|   " << discountType << "\t\t  - Php " << discountedPrice << "\t    |";
    cout << "\n\t\t\t|   Discounted Price\t\t\t    Php " << price << "\t    |";
    cout << "\n\t\t\t|   Delivery Fee    \t\t\t    Php " << shipping_fee << "\t    |";
    cout << "\n\t\t\t|   Amount Due      \t\t\t    Php " << Total_Price << "\t    |";
    cout << "\n\t\t\t|\t\t                          \t\t    |";

    if ((ID_Type == 's') || (ID_Type == 'S'))
    {
        cout << "\n\t\t\t|   ID Type: Student                       \t\t    |";
    }
    else if ((ID_Type == 't') || (ID_Type == 'T'))
    {
        cout << "\n\t\t\t|   ID Type: Teacher                       \t\t    |";
    }

    cout << "\n\t\t\t|   Customer's Name: " << Full_Name << "\t\t\t             |";
    cout << "\n\t\t\t|   Contact Number: " << Contact_Number << "\t\t\t\t    |";

    if ((Address == 'l') || (Address == 'L'))
    {
        cout << "\n\t\t\t|   Location: Luzon    \t\t\t\t\t    |";
    }
    else if ((Address == 'v') || (Address == 'V'))
    {
        cout << "\n\t\t\t|   Location: Visayas    \t\t\t\t    |";
    }
    else if ((Address == 'm') || (Address == 'M'))
    {
        cout << "\n\t\t\t|   Location: Mindanao    \t\t\t\t    |";
    }

    if (MOD == "Online Banking")
    {
        cout << "\n\t\t\t|   Mode of Payment: " << MOD << "\t\t\t    |";
    }
    else
    {
        cout << "\n\t\t\t|   Mode of Payment: " << MOD << "\t\t\t\t    |";
    }
    cout << "\n\t\t\t|\t\t                          \t\t    |";
    cout << "\n\t\t\t+-----------------------------------------------------------+";

    cout << endl;
    return (0);
}
