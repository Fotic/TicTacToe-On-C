/*
	Foititis: Paparounas Fotios
	Tmima: Mixanikon Pliroforikis TEI Kavalas
	Mathima: Eidagogi ston Programmatismo
	Didaskon: Moisiadis Eleutherios
*/

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

char pedio[10] = {'X','1','2','3','4','5','6','7','8','9'};

int CheckWinner();
void PrintTril();

int main(){
	int player = 1,i,epilogi;
    string p1,p2;
	char sim;

	cout <<"Dwse to onoma tou 1ou pekti: "; cin>>p1;   //Eisagoume ta onomata twn 2 pektwn
	cout <<"Dwse to onoma tou 2ou pekti: "; cin>>p2;
	do
	{
		PrintTril();        //Ektiponei ka8e fora tin triliza me to sim 'X' h 'O'
		player= player%2;   //Elenei pios pektis 8a peksei prota (Enalasei tous pektes ka8e fora)

        if (player == 1)
             {cout << p1 << " dwse arithmo(1-9): "; cin >> epilogi;} //O pektis pou exei to 'X'(pezei panta protos)
        else {cout << p2 << " dwse arithmo(1-9): "; cin >> epilogi;} //O pektis pou exei to 'O'

        if (player == 1)//Ta simbola pou 8a ektiponontai ka8e fora 8a einai to 'X' or to 'O'
             sim='X';
        else sim='O';

		if (epilogi == 1 && pedio[1] == '1')
			pedio[1] = sim;

		else if (epilogi == 2 && pedio[2] == '2')
                pedio[2] = sim;

		else if (epilogi == 3 && pedio[3] == '3')
                pedio[3] = sim;

		else if (epilogi == 4 && pedio[4] == '4')
                pedio[4] = sim;

		else if (epilogi == 5 && pedio[5] == '5')
                pedio[5] = sim;

		else if (epilogi == 6 && pedio[6] == '6')
                pedio[6] = sim;

		else if (epilogi == 7 && pedio[7] == '7')
                pedio[7] = sim;

		else if (epilogi == 8 && pedio[8] == '8')
                pedio[8] = sim;

		else if (epilogi == 9 && pedio[9] == '9')
                pedio[9] = sim;

		else
		{
			cout<<"\nLathos Kataxwrisi, Prospathise Ksana!!!\n"
                <<"Pata ENTER gia na ksana eisageis arithmo!!!\n";

			player--;      //Se periptwsi lathous 8a ksana peksi pali o idios pektis kai den 8a paei ston epomeno
			cin.ignore();
			cin.get();
		}
		i=CheckWinner(); //to i pernei tin epistrefomenh timh (1 or -1 or 0)

		player++;   //Metritis (boi8aei stin analagei metaksei ton pektwn)
	}while(i==-1);  //Ekteleitai oso to 'i' tha einai '-1'

	PrintTril();    //8a ektipwsei gia mia teleutaia fora ton pinaka

	if(i==1)        //An einai '1' uparxei nikhths
        {
            if (player==2)
                 cout<<"Nikhths einai o "<<p1 << endl;
            else cout<<"Nikhths einai o "<<p2 << endl;
        }
	else if (i==0)  //An einai '0' einai Isopalia
            cout<<"Isopalia\n";
    system ( "PAUSE" );
	return 0;
}

int CheckWinner(){
	if (pedio[1] == pedio[2] && pedio[2] == pedio[3])       //1h orizodia
		return 1;

	else if (pedio[4] == pedio[5] && pedio[5] == pedio[6])  //2h orizodia
		return 1;

	else if (pedio[7] ==pedio[8] && pedio[8] == pedio[9])   //3h orizontia
		return 1;

	else if (pedio[1] == pedio[4] && pedio[4] == pedio[7])  //1h ka8eta
		return 1;

	else if (pedio[2] == pedio[5] && pedio[5] == pedio[8])  //2h ka8eta
		return 1;

	else if (pedio[3] == pedio[6] && pedio[6] == pedio[9])  //3h ka8eta
		return 1;

	else if (pedio[1] == pedio[5] && pedio[5] == pedio[9])  //1h diagonia
        return 1;

	else if (pedio[3] == pedio[5] && pedio[5] == pedio[7])  //2h diagonia
		return 1;

	else if (pedio[1] != '1' && pedio[2] != '2' && pedio[3] != '3'  //Elenxei an oi 8eseis einai katelilimenes,
          && pedio[4] != '4' && pedio[5] != '5' && pedio[6] != '6'  //An NAI tote stelnei 0 kai telionei to prog.(to idio isxiei kai gia to 1)
          && pedio[7] != '7' && pedio[8] != '8' && pedio[9] != '9') //An OXI tote stelnei -1 kai sinexizei na ekteleitai to prog.

		return 0;
	else
		return -1;
}

void PrintTril(){
	cout << endl << "     |     |     " << endl;
	cout << "  " << pedio[1] << "  |  " << pedio[2] << "  |  " << pedio[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << pedio[4] << "  |  " << pedio[5] << "  |  " << pedio[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << pedio[7] << "  |  " << pedio[8] << "  |  " << pedio[9] << endl;

	cout << "     |     |     " << endl;
    cout <<"______________________" << endl << endl;
}
