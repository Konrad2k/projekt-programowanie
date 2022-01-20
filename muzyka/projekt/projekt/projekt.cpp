#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <string>

using namespace std;

void jakapiosenka(int tab[], int h) {
    if (tab[h] == 1) {
        cout << 1;
        PlaySound(TEXT("Take_my_breath_away.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 2) {
        cout << 2;
        PlaySound(TEXT("Can You Feel My Heart.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 3) {
        cout << 3;
        PlaySound(TEXT("Careless_whisper.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 4) {
        cout << 4;
        PlaySound(TEXT("MJF.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 5) {
        cout << 5;
        PlaySound(TEXT("Never Fade Away.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 6) {
        cout << 6;
        PlaySound(TEXT("Ona_jest.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 7) {
        cout << 7;
        PlaySound(TEXT("The Devil You Know.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 8) {
        cout << 8;
        PlaySound(TEXT("Victory.wav"), NULL, SND_ASYNC);
    }
    else if (tab[h] == 9) {
        cout << 9;
        PlaySound(TEXT("Was wollen wir trinken.wav"), NULL, SND_ASYNC);
    }
    else {
        cout << 10;
        PlaySound(TEXT("Where Is My Mind.wav"), NULL, SND_ASYNC);
    }
}

int odpowiedz(int tab[], int g, string odpowiedz) {
    if (tab[g] == 1) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 2) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 3) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 4) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 5) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 6) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 7) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 8) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 9) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
            return true;
        }
        else
            return false;
    }
    if (tab[g] == 10) {
        if (odpowiedz == "Take my breath away" || odpowiedz == "take my breath away") {
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
    return(rand() % 10) + 1;
}



int main()
{
    
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
        } //if
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
    string imie;
    
    int j = 1;
    cout << "witaj w jaka to melodia! " << endl;
    //  Sleep(1000);
    cout << "jak masz na imie? " << endl;
    getline(cin, imie);
    cout << "witaj " << imie << "!" << endl;
    cout << "zanim zaczniesz gre w jaka to melodia, przedstawie ci zasady!" << endl;
    //   Sleep(2000);
    cout << "podaj poprawny pelny tytul w jak najszybszym czasie, zaby otrzymac najwieksza ilosc punktow!" << endl;
    //  Sleep(2000);
    cout << "gra sklada sie z 10 rund" << endl;
    //  Sleep(2000);
    cout << "wygraj ostatnia, aby zostac uwiecznionym jako najwiekszy znawca muzyki!" << endl;
    //  Sleep(2000);
    cout << "jesli jestes gotowy na pierwsza piosenke wcisnij 1" << endl;
    cin >> piosenka;
    if (piosenka == 1) {
        
        system("cls");
        cout << "piosenka " << j << ": ";
         jakapiosenka(tabellka, j);
         
        start = time(NULL);
        cin.ignore();
        getline(cin, tekst);
        end = time(NULL);
        PlaySound(NULL, NULL, SND_ASYNC);
        if (odpowiedz(tabellka,j,tekst)==true) {
            j++;
            cout << "wygrales!" << endl;
            czas = end - start;

            cout << "odpowiedziales w czasie " << czas << " sekund!" << endl;
            if (czas > 40) {
                czas = 40;
            }
            //  Sleep(3000);
            cout << "w zwiazku z tym otrzymujesz " << 40 - czas << " punktow!" << endl;
            
            punkty = punkty + 40 - czas;
            cout << "Twoja obecna ilosc punktow wynosi : " << punkty << endl;
            cout << "za 5 sekund uslyszysz kolejna piosenke!" << endl;
            //  Sleep(5000);
            start = 0;
            end = 0;
            {

                system("cls");
                cout << "piosenka " << j << ":";
                jakapiosenka(tabellka, j);
                
                start = time(NULL);
                
                getline(cin, tekst);
                end = time(NULL);
                PlaySound(NULL, NULL, SND_ASYNC);
                if (odpowiedz(tabellka, j, tekst) == true) {
                    j++;
                    cout << "wygrales!" << endl;
                    czas = end - start;

                    cout << "odpowiedziales w czasie " << czas << " sekund!" << endl;
                    if (czas > 40) {
                        czas = 40;
                    }
                    //  Sleep(3000);
                    cout << "w zwiazku z tym otrzymujesz " << 40 - czas << " punktow!" << endl;
                   
                    punkty = punkty + 40 - czas;
                    cout << "Twoja obecna ilosc punktow wynosi : " << punkty << endl;
                    cout << "za 5 sekund uslyszysz kolejna piosenke!" << endl;
                    //  Sleep(5000);
                    start = 0;
                    end = 0;

                }
                else {
                    cout << "niestety nie tak nazywa sie ta piosenka ;((" << endl;
                    Sleep(3000);
                    cout << "niemniej naleza ci sie gratulacje, zebrales az " << punkty << " punktow!";
                }
            }

        }
            else {
            
                cout << "niestety nie tak nazywa sie ta piosenka ;((" << endl;
                Sleep(3000);
                cout << "niemniej naleza ci sie gratulacje, zebrales az " << punkty << " punktow!";
            }
        }
        system("pause");
        
    }