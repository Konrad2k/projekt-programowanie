#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <string>

using namespace std;

void jakapiosenka(int tab[], int h) {
    if (tab[h] == 1) {
        PlaySound(TEXT("africa.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 2) {
        PlaySound(TEXT("another brick in the wall.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 3) {
        PlaySound(TEXT("back in black.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 4) {
        PlaySound(TEXT("diamonds.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 5) {
        PlaySound(TEXT("enjoy the silence.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 6) {
        PlaySound(TEXT("every breath.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 7) {
        PlaySound(TEXT("everybody wants to rule.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 8) {
        PlaySound(TEXT("everywhere.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 9) {
        PlaySound(TEXT("happy.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 10) {
        PlaySound(TEXT("immigrant song.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 11) {
        PlaySound(TEXT("knockin' on heavens.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 12) {
        PlaySound(TEXT("Ona_jest.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 13) {
        PlaySound(TEXT("smells like teen spirit.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 14) {
        PlaySound(TEXT("somebody that i used.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 15) {
        PlaySound(TEXT("stay with me.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 16) {
        PlaySound(TEXT("summer.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 17) {
        PlaySound(TEXT("wake me up.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 18) {
        PlaySound(TEXT("wind of change.wav"), NULL, SND_ASYNC);
    }
    else {
       
        PlaySound(TEXT("i can't dance.wav"), NULL, SND_ASYNC);
    }
}

int odpowiedz(int tab[], int g, string odpowiedz) {
    if (tab[g] == 1) {
        if (odpowiedz == "africa" || odpowiedz == "Africa" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 2) {
        if (odpowiedz == "another brick in the wall" || odpowiedz == "Another brick in the wall" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 3) {
        if (odpowiedz == "back in black" || odpowiedz == "Back in black" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 4) {
        if (odpowiedz == "diamonds" || odpowiedz == "Diamonds" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 5) {
        if (odpowiedz == "enjoy the silence" || odpowiedz == "Enjoy the silence" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 6) {
        if (odpowiedz == "every breath you take" || odpowiedz == "Every breath you take" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 7) {
        if (odpowiedz == "everybody wants to rule the world" || odpowiedz == "Everybody wants to rule the world" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 8) {
        if (odpowiedz == "everywhere" || odpowiedz == "Everywhere" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 9) {
        if (odpowiedz == "happy" || odpowiedz == "Happy" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 10) {
        if (odpowiedz == "immigrant song" || odpowiedz == "Immigrant song" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 11) {
        if (odpowiedz == "knockin' on heavens door" || odpowiedz == "Knockin' on heavens door" || odpowiedz == "knocking on heavens door" || odpowiedz == "Knocking on heavens door" || odpowiedz == "knockin on heavens door" || odpowiedz == "Knockin on heavens door" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 12) {
        if (odpowiedz == "ona jest ze snu" || odpowiedz == "Ona jest ze snu" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 13) {
        if (odpowiedz == "smells like teen spirit" || odpowiedz == "Smells like teen spirit" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 14) {
        if (odpowiedz == "somebody that i used to know" || odpowiedz == "Somebody that i used to know" || odpowiedz == "somebody that I used to know" || odpowiedz == "Somebody that I used to know" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 15) {
        if (odpowiedz == "stay with me" || odpowiedz == "Stay with me" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 16) {
        if (odpowiedz == "summer" || odpowiedz == "Summer" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 17) {
        if (odpowiedz == "wake me up" || odpowiedz == "Wake me up" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 18) {
        if (odpowiedz == "wind of change" || odpowiedz == "Wind of change" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 19) {
        if (odpowiedz == "i can't dance" || odpowiedz == "I can't dance" || odpowiedz == "i cant dance" || odpowiedz == "I cant dance" || odpowiedz == "1") {
            return true;
        }
        else
            return false;
    }
}


bool czywylosowana(int liczba, int tabela[], int ilosc) {
    if (ilosc == 0)
        return false;
    for (int i = 0; i < ilosc; i++) {
        if (liczba == tabela[i]) {
            return true;
        }

    }
    return false;
}

int wylosuj()
{
    return(rand() % 19) + 1;
}

void losowanie(string imie) {
    string tekst;
    int tabellka[10];
    int ilosc = 10;
    srand(time(0));
    int wylosowanych = 0;
    int wylosowane[10];

    do
    {
        int liczba = wylosuj();
        if (czywylosowana(liczba, wylosowane, wylosowanych) == false)
        {
            wylosowane[wylosowanych] = liczba;
            wylosowanych++;
        } 
    } while (wylosowanych < 10);

    wylosowanych = 0;
    do
    {
        tabellka[wylosowanych] = wylosowane[wylosowanych];
        wylosowanych++;
    } while (wylosowanych < 10);
    int piosenka{};
    int punkty{};
    int start, end, czas;
    

    int j = 1;
    cout << "witaj w jaka to melodia! " << endl;
      Sleep(1000);
    cout << "jak masz na imie? " << endl;
    getline(cin, imie);
    cout << "witaj " << imie << "!" << endl;
    cout << "zanim zaczniesz gre w jaka to melodia, przedstawie ci zasady!" << endl;
       Sleep(2000);
    cout << "podaj poprawny pelny tytul w jak najszybszym czasie, zaby otrzymac najwieksza ilosc punktow!" << endl;
      Sleep(2000);
    cout << "gra sklada sie z 10 rund" << endl;
      Sleep(2000);
    cout << "wygraj ostatnia, aby zostac uwiecznionym jako najwiekszy znawca muzyki!" << endl;
      Sleep(2000);
    cout << "jesli jestes gotowy na pierwsza piosenke wcisnij 1" << endl;
    cin >> piosenka;
    if (piosenka == 1) {
        cin.ignore();
        for (int j = 0; j < 10; j++) {
            system("cls");
            cout << "piosenka " << j + 1 << ": ";
            jakapiosenka(tabellka, j);
            start = time(NULL);

            system("pause");
            end = time(NULL);
            PlaySound(NULL, NULL, SND_ASYNC);
            system("cls");
            cout << "piosenka " << j + 1 << ": ";

            getline(cin, tekst);

            if (odpowiedz(tabellka, j, tekst) == true) {

                cout << "wygrales!" << endl;
                czas = end - start;

                cout << "odpowiedziales w czasie " << czas << " sekund!" << endl;
                if (czas > 40) {
                    czas = 40;
                }
                  Sleep(3000);
                cout << "w zwiazku z tym otrzymujesz " << 40 - czas << " punktow!" << endl;

                punkty = punkty + 40 - czas;
                cout << "Twoja obecna ilosc punktow wynosi : " << punkty << endl;
                if (j < 9) {
                    cout << "za 5 sekund uslyszysz kolejna piosenke!" << endl;
                     Sleep(5000);
                    start = 0;
                    end = 0;
                }
                else if (j == 9) {
                    cout << "gratulacje!" << imie <<  "udowodniles, ze jestes prawdziwym znawca muzyki" << endl;
                    cout << "odpowiedziales poprawnie na wszystkie pytania i zdobyles przy tym az: " << punkty << "punktow!" << endl;
                    cout << "pani Sylwia wreczy teraz ci kuferek <3" << endl;

                }
            }

            else {
                cout << "niestety" << imie << "nie tak nazywa sie ta piosenka; ((" << endl;
                Sleep(3000);
                cout << "niemniej naleza ci sie gratulacje, zebrales az " << punkty << " punktow!";
                system("pause");
                break;
                
            }
        }
        
    }
}

int main()
{
    string imie;
    char ponownie;
    do {
        losowanie(imie);
        cout << "czy chcesz sprobowac ponownie? (y/n)" << endl;
        cin >> ponownie;
    } while (ponownie == 'y' || ponownie == 'Y');
    
    system("pause");
}