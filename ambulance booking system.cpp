#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>
using namespace std;
class patient
{
	private:
	public:
	string patientname;
    string ambulancename;
    string time;
    string ambulancetype;
    char data;

};
class fees : public patient
{
	public:
	int  speed=0,totalfees=0;
	void data()
	{
	cout << "\nPlease Enter Patient Name: ";
    cin >> patientname;
    cout<<endl;
    do
    {
        cout <<"\tPlease Select an Ambulance Type"<<endl;
        cout<<"\tEnter 'A' for Individual Ambulance."<<endl;
        cout<<"\ttEnter 'B' for Mobile ICU Ambulance."<<endl;
        cout<<"\tEnter 'C' for Basic Life Support Ambulance."<<endl;
        cout<<endl;
        cout<<"\tChoose an ambulance from the above options: ";
        cin >>ambulancename;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(ambulancename=="A")
 {
 	system("CLS");
        time = "10.00AM to 12:00 PM";
		cout<<"You have choosed INDIVIDUAL AMBULANCE"<<endl;
		 ifstream inA("A.txt");
         char str[10000];
         while(inA) {
         inA.getline(str, 10000);
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(ambulancename=="B")
  {
  	system("CLS");
        time = "08.00AM to 5:00 AM";
		cout<<"You have chosen MOBILE ICU AMBULANCE"<<endl;
		 ifstream inB("B.txt");
         char str[10000];
         while(inB) {
         inB.getline(str, 10000);
         if(inB) cout << str << endl;

     }
     sleep(2);
 }
 if(ambulancename=="C")
 {
 	system("CLS");
        time = "08.00AM to 11:00 PM";
	     cout<<"You have chosen BASIC LIFE SUPPORT AMBULANCE."<<endl;
		 ifstream inC("C.txt");
         char str[10000];
         while(inC) {
         inC.getline(str, 10000);
         if(inC) cout << str << endl;
     }
     sleep(2);
}
if(ambulancename !="A" && ambulancename !="B" &&  ambulancename !="C" )

      cout<<"Invaild Ambulance Model. Please try again!"<<endl;
        }
while(ambulancename !="A" && ambulancename !="B" &&  ambulancename !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;

    cout<<"Please select an Ambulance Type No. : ";
    cin >> ambulancetype;
    cout<<"Number of km: ";
    cin >> speed;
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating fees. Please wait......"<<endl;
		sleep(2);
		if( ambulancename == "A"|| ambulancename=="a")
        totalfees=speed*40;
        if(ambulancename == "B" || ambulancename=="b")
        totalfees=speed*50;
        if(ambulancename == "C" ||ambulancename=="c")
        totalfees=speed*45;
    }
void showfees()
    {
    cout << "\n                       Ambulance Booking - Customer Invoice                  "<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout << "	| Invoice No.     : " << "#Cnb8135" <<endl;
    cout << "	| Patient Name    : " << patientname <<endl;
    cout << "	| Ambulance Type  : " << ambulancename  <<endl;
    cout << "	| Ambulance No.   : " << ambulancetype <<endl;
    cout << "	| Number of rides : " << speed <<endl;
    cout << "        | Time Schedule   : " << time << endl;
    cout << "	| Your fees is    : " << totalfees <<endl;
    cout << "	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "	| Total Amount is : "<< totalfees <<endl;
    cout << "	 ________________________________________________________"<<endl;
    cout <<" "<<endl;
    int f;
    system("PAUSE");

    system ("CLS");

     ifstream inf("thanks.txt");


  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};
int main()
{
fees obj2;

obj2.data();
obj2.calculate();
obj2.showfees();

return 0;
}

