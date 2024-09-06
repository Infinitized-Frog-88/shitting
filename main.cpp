#include <iostream>
#include <process.h>
#include <conio.h>
#include <windows.h>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    char dir;
    double x = 0, y = 0, s, s_new, xt, yt;
    bool l = 0;
    xt = rand() % 31 - 15;
    cout << "shitting...\n";
    for (int i = 0; i <= 1000000000; i++) {
        if (i % 10000000 == 0) {
            cout << i / 10000000 << "%\r";
        }
    }
    cout << "shitted\n";
    Sleep(2000);
    cout << endl;
    cout << "Someone shitted a fresh pile of shit here... I can smell it and feel its warmth.\nWith this thermal radar I'll find it!" << endl;
    Sleep(6000);
    yt = rand() % 31 - 15;
//    xt = 0; yt = 0;
    if (!xt && !yt) {
        cout << "\n";
        Sleep(1000);
        cout << '.';
        Sleep(1000);
        cout << '.';
        Sleep(1000);
        cout << '.';
        Sleep(3000);
        cout << "\rYou're already standing on the shit!\n";
        Sleep(3000);
        cout << "no fucking way\n";
        Sleep(3000);
        cout << "IT WAS YOU\n";
        Sleep(3000);
        cout << "\nSUPER";
        Sleep(1000);
        cout << " FUCKING";
        Sleep(1000);
        cout << " RARE";
        Sleep(1000);
        cout << " SECRET";
        Sleep(1000);
        cout << " ENDING";
        Sleep(2000);
        cout << "\nYou're damn lucky\n";
        Sleep(10000);
        exit(0);
    }
    s = sqrt(xt * xt + yt * yt);
    do {
        cout << "\nYour location: " << static_cast<int>(x) << ", " << static_cast<int>(y);
        cout << "\nChoose a direction (w, a, s, d): ";
        dir = getche();
        if (dir < 97) {
            dir += 32;
        }
        switch (dir) {
            case 'w': y++; break;
            case 'a': x--; break;
            case 's': y--; break;
            case 'd': x++; break;
            case 'e':
                if (static_cast<int>(s) == 1) {
                    Sleep(1000);
                    cout << "\n\nTHE SHIT\n";
                    Sleep(2000);
                    cout << "WAS\n";
                    Sleep(2000);
                    cout << "ABSORBED\n";
                    Sleep(2000);
                    for (int i = 0; i < 100000; i++) {
                        cout << "AH";
                    }
                    cout << "\n\nTRUE ENDING\n";
                    Sleep(10000);
                    exit(0);
                }
                else {
                    cout << "\n\n";
                    Sleep(1000);
                    cout << '.';
                    Sleep(1000);
                    cout << '.';
                    Sleep(1000);
                    cout << '.';
                    Sleep(3000);
                    cout << "\rThere's nothing to eat...\n";
                    Sleep(3000);
                    continue;
                }
                break;
            case 'b':
                if (!l) {
                    cout << '\n';
                    Sleep(2000);
                    cout << "\nK-12 was obtained\nUse it with the same button\n";
                    Sleep(3000);
                    l = 1;
                }
                else {
                    if (static_cast<int>(s) == 1) {
                        Sleep(2000);
                        cout << "\n\nShit";
                        Sleep(700);
                        cout << " was";
                        Sleep(700);
                        cout << " fucking";
                        Sleep(700);
                        cout << " BLOWN";
                        Sleep(1000);
                        cout << '\n';
                        Sleep(2500);
                        cout << "\nGOOD";
                        Sleep(1000);
                        cout << " ENDING";
                        Sleep(1000);
                        cout << '\n';
                        Sleep(10000);
                        cout << "\n(31; 37)\n";
                        Sleep(4000);
                        cout << "\nHmm";
                        Sleep(1000);
                        cout << '.';
                        Sleep(1000);
                        cout << '.';
                        Sleep(1000);
                        cout << '.';
                        Sleep(4000);
                        cout << "\nWhat does it mean?..\n";
                        Sleep(4000);
                    }
                    else {
                        Sleep(500);
                        cout << "\n\nAMBADEBLOW";
                        Sleep(2000);
                        cout << "\n[sounds of ambadeblowing]\n";
                        Sleep(3000);
                        cout << "\nBAD";
                        Sleep(1000);
                        cout << " ENDING";
                        Sleep(3000);
                        cout << "\nUse it when you're close to shit\n";
                    }
                    Sleep(20000);
                    cout << "\nhttps://www.youtube.com/watch?v=dQw4w9WgXcQ\n";
                    Sleep(500);
                    exit(0);
                }
                continue;
            default:
                cout << "\n\nCongratulations!\n";
                Sleep(3000);
                cout << "You shitted yourself\n";
                Sleep(3000);
                cout << "\nBAD";
                Sleep(1000);
                cout << " ENDING";
                Sleep(1000);
                cout << '\n';
                Sleep(20000);
                cout << "\nhttps://www.youtube.com/watch?v=dQw4w9WgXcQ\n";
                Sleep(500);
                exit(0);
        }
        cout << endl;
        if (x == 31 && y == 37) {
            Sleep(2000);
            cout << "\nYou know that there's a secret here, don't you?)\n";
            Sleep(3000);
            cout << "Yes\n";
            Sleep(3000);
            cout << "That's it\n";
            Sleep(3000);
            cout << "When you're close to shit press the button\n";
            Sleep(3500);
            cout << "\"Which button?\" you will ask me\n";
            Sleep(3500);
            cout << "This is the letter that the name of the most shitfuckful shitfucker begins with\n";
            Sleep(10000);
            cout << "Egor\n";
            Sleep(450);
            exit(0);
        }
        s_new = sqrt((x - xt) * (x - xt) + (y - yt) * (y - yt));
        if(!static_cast<int>(s_new)) {
            Sleep(3000);
            cout << "\nFuck!\n";
            Sleep(4000);
            cout << "I've stepped on it!\n";
            Sleep(3000);
            cout << "\nNEUTRAL";
            Sleep(1000);
            cout << " ENDING";
            Sleep(1000);
            cout << '\n';
            Sleep(6000);
            if (!l) {
                cout << "\nSay. What if I told you I knew some way to get you a better ending?\n";
                Sleep(4500);
                cout << "Obtain powerful item with button 'b' next time\n";
            }
            else {
                cout << "You love stepping on shit as I see\n";
            }
            Sleep(20000);
            cout << "\nhttps://www.youtube.com/watch?v=dQw4w9WgXcQ\n";
            Sleep(500);
            exit(0);
        }
        if (static_cast<int>(s_new) == 1 && l) {
            cout << "\nBLOW IT UP!\n";
        }
        else {
            (s > s_new) ? cout << "warmer\n" : cout << "colder\n";
        }
        s = s_new;
    } while(dir != '\r');
    return 0;
}

