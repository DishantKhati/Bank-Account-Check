#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class Account{
public: 
string n;
char t;
int ano,w,d,b;
Account()
{system("clear");
  cout<<"\tBank Account Registration\n\t*************************\nEnter The Account Holder's Name: ";
  getline(cin,n);
  cout<<"Enter The Account Type(s/z/c): ";
  cin>>t;
  cout<<"Enter The Account Number: ";
  cin>>ano;
  cout<<"Balance Amount: ";
  cin>>b;
  cout<<"Congrats!!! Your Has Been Created!!!\n";
}
void Withdraw()
{system("clear");
 if(b<=500)
 cout<<"Your Balance Amount Is Less Than The Bank's Terms And Conditions\n";
 else
{ cout<<"Enter the Amount to be withdrawned: ";
 cin>>w;
 cout<<"Amount updated\n";b-=w;} 
}
void Deposit()
{cout<<"enter the Amount to be Deposit: ";
 cin>>d;
 b+=d;
}
void Display()
{system("clear");
 cout<<"ACCOUNT DETAILS\n****************\n\tAccount Holder's name: "<<n<<"\nAccount number: "<<ano<<"\n\tBalance amount: "<<b;
 if(t=='z'||t=='Z')
  cout<<"\nAccount Type: Zero Balance Account";
 else if(t=='s'||t=='S') 
 cout<<"\nAccount Type: Saving Account";
 else 
 cout<<"\nAccount Type: Current Account";
}
};
char ask(){
char l;
cout<<"\tWelcome To Bank Account Services\n\t********************************\n\n     Do You Want To Make A Bank Account :";
cin>>l;
return l;
}
main()
{char c;
 c=ask();
 cin.ignore();
 if(c=='y'||c=='Y'){
Account a1;
int c;
while(1)
{
system("clear");
cout<<"\tBank account menu\n\t*****************\nDeposit(0)\nWithdraw(1)\nDisplay(2)\nExit(3)\nEnter your choice: ";
cin>>c;
switch(c){case 0:a1.Deposit();break;
           case 1:a1.Withdraw();break;
	   case 2:a1.Display();break;
           case 3:return 0;
           default:cout<<'\a';}
           }}
else {system("clear");cout<<"\n\n\t\t B*\t\t\t*B\n\t\t\tA*\t*A\n\n\t\t\tN*\t*N\n\t\t\t K*   *K\n\t\t\t   ***\n\n\n\n\n\t\tNice to Meet You!!!!\n\n\n\nBye See Yaaa\n\n\n\n\n\n";
return 0;           }
}
