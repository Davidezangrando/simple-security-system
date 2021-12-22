#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a;
    string line,old,pass1,pass2,pass;
    cout<<"ZANGRANDO SECURITY SYSTEM PROGRAM";
    do{
    cout<<endl<<endl<<"***************************************"<<endl;
    cout<<"* 1 ->       Cambia password      *"<<endl;
    cout<<"* 2 ->       Trona nel Login      *"<<endl;
    cout<<"* 3 ->       Esci                 *"<<endl;
    cout<<"***************************************"<<endl<<endl;
    cout<<"Inserisci il tuo numero :- ";
    cin>>a;
    switch(a)
    {
        case 1:
        {
            ifstream outf;
            outf.open("file.txt");
            cout<<"Inserisci la vecchia password :-";
            cin>>old;
            if (outf.is_open())
            {
            	while(!outf.eof())
            	{
             		outf>>line;
            		if(old==line)
            		{
                		outf.close();
                		ofstream outf1;
                		outf1.open("file.txt");
                		if (outf1.is_open())
             			{
             				cout<<"Inserisci la nuova password :-";
		                	cin>>pass1;
             				cout<<"Inserisci la passowrd di nuovo :-";
             				cin>>pass2;
             				if(pass1==pass2)
             				{
                 				outf1<<pass1;
                 				cout<<"password cambiata";
             				}
             			}
            		}
            		else
            		{
              			cout<<"inserisci una pssword valida";
            		}
            	}
            }
           break;
        }
    case 2:
        {
            ifstream outf2;
            outf2.open("file.txt");
            cout<<"inserisci una password :-";
            cin>>pass;
            if (outf2.is_open())
            {
            	while(!outf2.eof())
            	{
             		outf2>>line;
           		if(pass==line)
           		{
               			cout<<"accesso consentito";
           		}
           		else
           		{
               			cout<<"password sbagliata"<<endl;
           		}
            	}
       	     }
    	break;
       }
    case 3:
        {
            break;
        }
    	default:
        	cout<<"inserisci il valore (numero)";
    }
    }
    while(a != 3);
    return 0;
}
