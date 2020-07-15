#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include<fstream>

using namespace std;


int main()
{
    int num=0;
    vector <string> firstname(11);
    vector <string> lastname(11);
    vector<string> locator(11);
    int Class;
    int passportnumber[11]={};
    int DOB[11]={};
    int seat[11]={};
    char decision;
    int x=1;
    int y=5;
    int a=1;
    int tor=0;
    char decide;
    bool leave_or_not = 1;
    while(leave_or_not)
    {

        cout<<"\n\n\n*** Welcome to ABC airline reservation system ***\n";
        cout<<"====================================================\n";


        cout<<"Please type 1 to make a new reservation\n";
        cout<<"Please type 2 to show current booking status\n";
        cout<<"Please type 3 to print boarding pass for a record\n";
        cout<<"Please type 4 to save all records in a file\n";
        cout<<"Please type 5 to exit the system\n";
        cout<<"Enter your selection Here:";
        cin>>num;

        cout<<"====================================================\n";


        if(num==1)
        {

               cout<<"Please enter passenger・s first name: ";
               cin>>firstname[a];
               cout<<"Please enter passenger・s last name: ";
               cin>>lastname[a];

               cout<<"Please enter passenger・s DOB: ";
               cin>>DOB[a];
               while(1)
                {

                        if((DOB[a]%10000)/100==1 || (DOB[a]%10000)/100==3 || (DOB[a]%10000)/100==5 || (DOB[a]%10000)/100==7 || (DOB[a]%10000)/100==8 || (DOB[a]%10000)/100==10 || (DOB[a]%10000)/100==12 )
                        {
                           if(DOB[a]%100 >= 1 && DOB[a]%100<=31)
                           {
                               DOB[a];
                               break;
                           }
                           else
                           {
                               cout<<"this is wrong ,please enter again\n";
                               cin>>DOB[a];
                            }
                        }
                        else if((DOB[a]%10000)/100==2 || (DOB[a]%10000)/100==4 || (DOB[a]%10000)/100==6 || (DOB[a]%10000)/100==9 || (DOB[a]%10000)/100==11 )
                        {
                           if(DOB[a]%100 >= 1 && DOB[a]%100<=30)
                           {
                               DOB[a];
                               break;
                           }
                           else
                           {
                                cout<<"this is wrong ,please enter again\n";
                                cin>>DOB[a];
                            }
                        }
                        else
                        {
                            cout<<"this is wrong ,please enter again\n";
                            cin>>DOB[a];
                        } // end else
                      }


               cout<<"Please enter passenger・s passport number: ";
               cin>>passportnumber[a];
               cout<<"Please type 1 for First Class \n";
               cout<<"Please type 2 for Economy Class: ";
               cin>>Class;



    if(Class == 1 || Class == 2)
    {
        if(Class == 1)
        {

                if( x <= 4)
                {
                    seat[a]=x;
                    cout << "*** The reservation is successfully made! ***\n" ;
                    cout << "\nRecord Locator: " <<a;
                    cout << "\nName:" <<firstname[a]<<" "<<lastname[a];
                    cout<<"\nBOB:"<<DOB[a];
                    cout<<"\nPassport Num:"<<passportnumber[a];
                    cout<<"\nSeat Type/Num: "<<"First/"<<x<<endl;
                    locator[a]="First";
                    a++;
                    x++;
                }//end if
                if(seat[1] == 1 && seat[2] == 1 && seat[3] == 1 && seat[4] == 1 && x >= 4 )
                {
                    cout << "***First Class is all booked***" << endl;
                    cout << "Do you want to switch to Economy Class?" << endl;
                    cout << "Enter Y to confirm: " ;
                    cin >> decision;
                    switch(decision)
                    {
                        case'Y' :
                        case'y' :
                            if(seat[10] == 0)
                            {
                                Class= 2;
                                break;
                            }
                        case'N' :
                        case'n' :
                            cout << "No available seats and your reservation is not successfully made" << endl;
                            break;
                        case'\n' :
                        case'\t' :
                        case' ' :
                            break;
                    }//end switch
                }//end if

        }//end if
        if(Class == 2)
        {

                if( y <= 10)
                {
                    seat[a]=y;
                    cout << "*** The reservation is successfully made! ***\n" ;
                    cout << "\nRecord Locator: " <<a;
                    cout << "\nName:" <<firstname[a]<<" "<<lastname[a];
                    cout<<"\nDOB:"<<DOB[a];
                    cout<<"\nPassport Num:"<<passportnumber[a];
                    cout<<"\nSeat Type/Num:"<<"Economy/"<<y<<endl;
                    locator[a]="Economy";
                    a++;
                    y++;


                }//end if
                if(seat[5] == 1 && seat[6] == 1 && seat[7] == 1 && seat[8] == 1 && seat[9] == 1 && seat[10] == 1 && y >10)
                {
                    cout << "***Economy Class is all booked***" << endl;
                    cout << "Do you want to switch to First Class?" << endl;
                    cout << "Enter Y to confirm: " ;
                    cin >> decision;
                    switch(decision)
                    {
                        case'Y' :
                        case'y' :
                            if(seat[4] == 0)
                            {
                                Class = 1;
                                break;
                            }
                        case'N' :
                        case'n' :
                            cout << "No available seats and your reservation is not successfully made" << endl;
                            break;
                        case'\n' :
                        case'\t' :
                        case' ' :
                            break;
                    }//end switch
                }//end if

        }//end if
        if(seat[4] == 1 && seat[10] == 1)
        {
            cout << "This flight is completely full" << endl;
        }

    }//end if

    }//end if num1
    else if(num==2)
    {
        cout<<"*****************************************************\n";
        cout<<"Seat capacity:\n";
        cout<<setw(16)<<"Sold"<<setw(12)<<"Available"<<setw(11)<<"Total"<<endl;
        cout<<"\nFirst"<<setw(11)<<x-1<<setw(12)<<5-x<<setw(11)<<"4";
        cout<<"\n\nEconomy"<<setw(9)<<y-5<<setw(12)<<11-y<<setw(11)<<"6";
        cout<<"\n*****************************************************";


    }
    else if(num==3)
    {
        cout<<"Please enter record locator:";
        cin>>tor;
        if( tor<a)
        {

            cout<<"******************************************************\n";
            cout<<"*"<<setw(35)<<"Boarding Pass"<<setw(22)<<"*"<<endl;
            cout<<"*"<<setw(15)<<"Name:"<<firstname[tor]<<" "<<lastname[tor]<<setw(33)<<"*"<<endl;
            cout<<"*"<<setw(25)<<"Record Locator:"<<tor<<setw(31)<<"*"<<endl;
            if ( locator[tor] == "First" )
                cout<<"*"<<setw(16)<<"Seat: "<<locator[tor]<<"/"<<seat[tor]<<setw(34)<<"*"<<endl;
            else
                cout<<"*"<<setw(16)<<"Seat: "<<locator[tor]<<"/"<<seat[tor]<<setw(32)<<"*"<<endl;

        }
        else
            cout<<"The record locator cannot be found!\n\n";

    }
    else if (num==4)
    {
        cout<<"The record is stored in booking_record.txt\n";
        ofstream booking("booking_recode.txt", ios::out );
        booking << "RR"<<setw(10)<<"Name"<<setw(10)<<"DOB"<<setw(19)<<"PassPort#"<<setw(13)<<"Class"<<setw(11)<<"Seat\n";
        for(int b=1;b<a;b++)
        {
            booking <<b<<setw(13)<<firstname[b]<<" "<<lastname[b]<<setw(10)<<DOB[b]<<setw(11)<<passportnumber[b]<<setw(12)<<locator[b]<<setw(11)<<b<<endl;
        }
    }

    else if(num==5)
    {
        bool check = 1;
        cout<<"Be sure to store booking records into a file\n";
        cout<<"before you exist the program!\n";
        cout<<"Do you want to exist the program now?[Y/N]";
        cin>>decide;
        while(check)
        {
            switch(decide)
            {
              case'Y':
              case'y':
                leave_or_not = false;
                check = 0;
              break;

              case'N':
              case'n':
                check = 0;
                break;

              default:
                cout << "Enter again.";
                cin >> decision;


            }
        }




    }
    else
        cout << "wrong selection" << endl;
    }//end while
    return 0;
}//end main

