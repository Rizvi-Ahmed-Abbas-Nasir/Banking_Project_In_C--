#include<iostream>
#include<conio.h>
#include<Windows.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;
 
int Welcome();
int Registered(char another);
int Unregistered();

class Logic
{
    int Money = 0,add;
    char choices,re,Re = 'Y';
    int cho = 1;
    int A=2500,i;
        int Increment =0;
        int Plus = 0,gain;
        string Ask,Accept = "Yes";
    
public: 

        int bankFunction(char name[],char No,int NEW_passwords,int NEW_pa)
        {
        

            while(1)
            {
                system ("cls");
                cout<<"\t\t\t\t\t\tWelcome "<<name<<endl;
                cout<<"\t\t1.Deposite "<<endl;
                cout<<"\t\t2.Withdraw "<<endl;
                cout<<"\t\t3.Inqure Your Account"<<endl<<endl;
                cout<<"\t\tEnter Your Choice ";
                fflush(stdin);
                choices = getche();
                switch (choices)
                {
                    case '1':
                    Deposite(NEW_passwords,NEW_pa);
                    break;
                    case '3':
                    Inqure_Your_Account(NEW_passwords,NEW_pa,name);
                    break;
                    case '2':
                    withDraw(NEW_passwords,NEW_pa,name);
                    break;
                default:
                    break;
                }
            }

        return 0;
        }

        int Deposite(int NEW_password,int NEW_p)
        {
            int b = 2000;
        
        
                                cout<<endl;
                                cout<<endl;
                                cout<<"\t\tDeposite Area: "<<endl;
                                cout<<"\t\t1.Current =>";
                                cout<<"\t\t2.Saving =>"<<endl<<endl;
                                cout<<"\t\tChoice The Option: ";
                                cin>>cho;
                        
                            if (Increment == Plus && cho == 1 && Increment == gain)
                            {
                                cout<<endl;
                                cout<<"\t\tEnter Your Re-Amount: ";
                                cin>>add;
                                cout<<"\t\tEnter Your Password: ";
                                cin>>NEW_password;
                                if(NEW_password == NEW_p)
                                {
                                    cout<<endl;
                                    cout<<"\t\tAre Your Comfired If Say Yes ";
                                    cin>>Ask;
                                    if(Ask == Accept)
                                    {
                                        
                                        Increment++;
                                        Plus++;
                                        Money += add;
                                    }
                                     else{
                                        cout<<"\t\t Enter Wrong Password";
                                        
                                    }
                                    Sleep(b);
                                     cout<<endl;
                                    cout<<"\t\tPlease Wait Processing....."<<endl;
                                    Sleep(b);
                                    cout<<endl;                                                             
                                    cout<<"\t\tYour Amount Is Successfully Deposited";    
                                    gain = Increment;                
                                }
                
                                Sleep(A);
                                
                            
                            }
                           else if (cho == 1)
                            {
                                 cout<<endl;
                                cout<<"\t\tEnter Your Amount: ";
                                cin>>Money;
                                cout<<"\t\tEnter Your Password: ";
                                cin>>NEW_password;
                                if(NEW_password == NEW_p)
                                {
                                    cout<<endl;
                                    cout<<"\t\tAre Your Comfired If Say Yes ";
                                    cin>>Ask;
                                    if(Ask == Accept)
                                    {
                                        Increment++;
                                        Plus++;
                                    }
                                    else{
                                        cout<<"\t\t Enter Wrong Password";
                                       Sleep(b);
                                    }
                                    
                                     
                                    cout<<endl;
                                    cout<<"\t\tPlease Wait Processing.....>>"<<endl;
                                    Sleep(b);  
                                    cout<<endl;                        
                                    cout<<"\t\tYour Amount Is Successfully Deposited";
                                    gain = Increment;
                                Sleep(A);
                                }
                                
                            }
                            else
                            {
                                cout<<endl;
                                cout<<"\t\tEnter Your Amount: ";
                                cin>>Money;
                                cout<<"\t\tEnter Your Password: ";
                                cin>>NEW_password;
                                if(NEW_password == NEW_p)
                                {
                                    cout<<endl;
                                    cout<<"\t\tAre Your Comfired If Say Yes ";
                                    cin>>Ask;
                                     if(Ask == Accept)
                                    {
                                        Increment++;
                                        Plus++;
                                    }
                                     else{
                                        cout<<"\t\t Enter Wrong Password";
                                         Sleep(A);
                                    }
                                    
                                     cout<<endl;
                                    cout<<"\t\tPlease Wait Processing....."<<endl;
                                    Sleep(b);
                                     cout<<endl;
                                    cout<<"\t\tYour Amount Is Successfully Deposited"; 
                                    gain = Increment;
                                } 
                            }
                        
                             cout<<endl;
                            cout<<endl;
                            // cout<<"\t\tDid Your Wanted Redeposite: ";
                            // fflush(stdin);
                            // re = getche();
                            // if(re == Re)
                            // {
                            //     cout<<endl;
                            //     cout<<"\t\tEnter Your Amount: ";
                            //     cin>>add;
                            //     cout<<endl;
                            //     cout<<"\t\tEnter Your Password: ";
                            //     cin>>NEW_passwords;
                            //     cout<<endl;
                            //     if(NEW_passwords == NEW_pa)
                            //     {
                            //         Money+=add;
                            //         cout<<endl;
                            //         cout<<"\t\tYour Amount Have Successfully Redeposited";
                            //         Sleep(d);
                            //     }
                            // }


        return 0;
        }
        int Inqure_Your_Account(int NEW_passwords,int NEW_paa,char namea[])
        {
            int a = 3000;

                    cout<<endl;
                    cout<<endl;
                    cout<<"\t\tWelcome "<<namea<<endl;
                    cout<<"\t\tEnter Your Password: ";
                    cin>>NEW_passwords;
                    if(NEW_passwords == NEW_paa)
                    {
                        cout<<endl;
                        cout<<"\t\tGood Day "<<namea<<endl;
                       cout<<"\t\tYour Amount "<<Money;
                    }
                    else{
                        cout<<"\t\t Enter Wrong Password";
                        Sleep(a);
                    }
                    
        Sleep(a);

        return 0;
        }
        int withDraw(int NEW_passworde,int NEW_pae,char namee[])
        {
            int sub;


            cout<<endl;
            cout<<endl;
            cout<<"\t\tWelcome "<<namee<<endl;
            cout<<"\t\tWithdraw Your Amount ";
            cin>>sub;
            cout<<"\t\tEnter Your Password: ";
            cin>>NEW_passworde;
            if(NEW_passworde == NEW_pae)
            {
                    cout<<endl;
                    Money -= sub;
                    cout<<"\t\tGood Day "<<namee<<endl;

            if(sub < Money)
            {
            cout<<endl;
            cout<<"\t\tPlease Wait Processing....."<<endl;
            Sleep(A);
            cout<<endl;
            cout<<"\t\tYour Amount Is Successfully Withdrawed "<<sub;
            Sleep(A);
            }
            else if (sub > Money)
            {
                cout<<endl;
                cout<<"\t\tNot Enough Money To Withdraw"<<endl;
                Sleep(A);
            }

            }
           
            else
            {
                cout<<endl;
                cout<<"\t\t Enter Wrong Password";
                Sleep(A);
            }
            



        return 0;
        }


};

int main()
{
   Welcome();

getch();
return 0;
}


int Welcome()
{
    char Choice,n='Y';
    cout<<"\t\t\t\t\t<===Welcome to Rizvi Bank ===>"<<endl<<endl;
    cout<<"\t\t\t\t\t---The First Virtual Bank---\n\n\n"<<endl;
    cout<<"\t\tThank You For Using Our Virtual Bank\n"<<endl;
    cout<<"\t\tIf You Are New To Our Bank Please register First"<<endl<<endl;
    cout<<"\t\tIf Already Registered Please Enter Your Name And Password"<<endl<<endl;
    cout<<"\t\tEnter Y If You Registered, If Not Enter N: ";
    cin>>Choice;
system("cls");
    if (Choice == n)
    {
        Registered(n);
    }
    else
    {
        Unregistered();
    }
    
   
return 0;
}

int Registered(char another)
{
 char Name[10];
 int password,pa;
pa = 8835;
int A = 2500;

    cout<<endl;
    cout<<"\t\tEnter Your Name: ";
    cin>>Name;
   cout<<endl;
    cout<<"\t\tEnter your Password: ";
    cin>>password;
    cout<<endl;
system("cls");
    if(password ==  pa)
    {
        cout<<"\t\tWelcome "<<Name<<" To Our Virtual Bank"<<endl;
        Logic s;
    s.bankFunction(Name,another,password,pa);
    }
    else{
        cout<<"Entered Wrong Password"<<endl;
    }
     Sleep(A);
    

return 0;
}

int Unregistered()
{

return 0;
}