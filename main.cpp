#include <iostream>
using namespace std;

char kvadrati[10] = {'o','1','2','3','4','5','6','7','8','9'};

int uzvaras_parbaude();
void speles_laukums();

int main()
{
	int Speletajs = 1,i,izvele;

    char mark;
    do
    {
        speles_laukums();
        Speletajs=(Speletajs%2)?1:2;

        cout << "Speletajs " << Speletajs << ", ievadi speles laukuma zonu:  ";
        cin >> izvele;

        mark=(Speletajs == 1) ? 'X' : 'O';

        if (izvele == 1 && kvadrati[1] == '1')

            kvadrati[1] = mark;
        else if (izvele == 2 && kvadrati[2] == '2')

            kvadrati[2] = mark;
        else if (izvele == 3 && kvadrati[3] == '3')

            kvadrati[3] = mark;
        else if (izvele == 4 && kvadrati[4] == '4')

            kvadrati[4] = mark;
        else if (izvele == 5 && kvadrati[5] == '5')

            kvadrati[5] = mark;
        else if (izvele == 6 && kvadrati[6] == '6')

            kvadrati[6] = mark;
        else if (izvele == 7 && kvadrati[7] == '7')

            kvadrati[7] = mark;
        else if (izvele == 8 && kvadrati[8] == '8')

            kvadrati[8] = mark;
        else if (izvele == 9 && kvadrati[9] == '9')

            kvadrati[9] = mark;
        else
        {
            cout<<"Nederīga izvēle ";

            Speletajs--;
            cin.ignore();
            cin.get();
        }
        i=uzvaras_parbaude();

        Speletajs++;
    }while(i==-1);
    speles_laukums();
    if(i==1)

        cout<<"==>\aSpeletajs "<<--Speletajs<<" uzvar!!!!!!!!!! ";
    else
        cout<<"==>\aSpēles rezultāts ir neizšķirts";

    cin.ignore();
    cin.get();
    return 0;
}

/**Funkcijas kas atgriež spēles rezultātu
    1 Spēle ar uzvarētāju
    -1 Spēle vēl notiek
    O Spēle ir neizšķirta
**********************************************/

int uzvaras_parbaude()
{
    if (kvadrati[1] == kvadrati[2] && kvadrati[2] == kvadrati[3])

        return 1;
    else if (kvadrati[4] == kvadrati[5] && kvadrati[5] == kvadrati[6])

        return 1;
    else if (kvadrati[7] == kvadrati[8] && kvadrati[8] == kvadrati[9])

        return 1;
    else if (kvadrati[1] == kvadrati[4] && kvadrati[4] == kvadrati[7])

        return 1;
    else if (kvadrati[2] == kvadrati[5] && kvadrati[5] == kvadrati[8])

        return 1;
    else if (kvadrati[3] == kvadrati[6] && kvadrati[6] == kvadrati[9])

        return 1;
    else if (kvadrati[1] == kvadrati[5] && kvadrati[5] == kvadrati[9])

        return 1;
    else if (kvadrati[3] == kvadrati[5] && kvadrati[5] == kvadrati[7])

        return 1;
    else if (kvadrati[1] != '1' && kvadrati[2] != '2' && kvadrati[3] != '3' 
                    && kvadrati[4] != '4' && kvadrati[5] != '5' && kvadrati[6] != '6' 
                  && kvadrati[7] != '7' && kvadrati[8] != '8' && kvadrati[9] != '9')

        return 0;
    else
        return -1;
}

void speles_laukums()
{
    system("cls");
    cout << "\n\n\tKrustiņi un nullītes\n\n";

    cout << "Speletajs 1 (X)  -  Speletajs 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << kvadrati[1] << "  |  " << kvadrati[2] << "  |  " << kvadrati[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kvadrati[4] << "  |  " << kvadrati[5] << "  |  " << kvadrati[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kvadrati[7] << "  |  " << kvadrati[8] << "  |  " << kvadrati[9] << endl;

    cout << "     |     |     " << endl << endl;
}

