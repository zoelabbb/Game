#include <iostream>

/**
 *
 * Game Gunting - Batu - Kertas
 * Code by      : @zoelabbb
 * Telegram     : @domicadoesca
 * Game GMS     : V.0.1
 */

using namespace std;

int main()
{
    char P1, P2; // Variabel player 1 & 2
    int lanjut; // Variabel lanjut

    do
    {
        cout << "[!] READ ME" << endl;
        cout << "[!] Cukup inputkan G / M / S" << endl;
        cout << "[!] Untuk selesai permain input 0" << endl;
        cout << "[!] Good Luck !!" << endl;
        cout << "[!] Selamat Bermain :D" << endl;
        cout << endl;
        cout << "[+] Player 1  : "; // Inputan player 1
        cin >> P1; // Menyimpan inputan player 1
        cout << "[+] Player 2  : "; // Inputan player 2
        cin >> P2; // Menyimpan inputan player 2
        if(P1 == 'G' | P1 == 'g' && P2 == 'M' | P2 == 'm') // Gajah vs Manusia
        {
            cout << endl;
            cout << "[W] Player 1 Menang" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P1 == 'G' | P1 == 'g' && P2 == 'S' | P2 == 's') // Gajah vs Semut
        {
            cout << endl;
            cout << "[W] Player 2 Menang" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P1 == 'G' | P1 == 'g' && P2 == 'G' | P2 == 'g') // Gajah vs Gajah
        {
            cout << endl;
            cout << "[D] GAME SERI" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'G' | P2 == 'g' && P1 == 'S' | P1 == 's') // Gajah vs Semut
        {
            cout << endl;
            cout << "[W] Player 1 Menang" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'G' | P2 == 'g' && P1 == 'M' | P1 == 'm') // Gajah vs Manusia
        {
            cout << endl;
            cout << "[W] Player 2 Menang" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'G' | P2 == 'g' && P1 == 'G' | P1 == 'g') // Gajah vs Gajah
        {
            cout << endl;
            cout << "[D] GAME SERI" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'S' | P2 == 's' && P1 == 'M' || P1 == 'm')
        {
            cout << endl;
            cout << "[W] Player 1 MENANG" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'S' | P2 == 's' && P1 == 's' || P1 == 's')
        {
            cout << endl;
            cout << "[D] GAME SERI" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'S' | P2 == 's' && P1 == 'G' || P1 == 'G')
        {
            cout << endl;
            cout << "[D] Player 2 MENANG" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P1 == 'S' | P1 == 's' && P2 == 'M' || P2 == 'm')
        {
            cout << endl;
            cout << "[W] Player 2 MENANG" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P1 == 'S' | P1 == 's' && P2 == 'S' || P2 == 's')
        {
            cout << endl;
            cout << "[D] GAME SERI" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P1 == 'S' | P1 == 's' && P2 == 'G' || P2 == 'G')
        {
            cout << endl;
            cout << "[W] Player 1 MENANG" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'M' | P2 == 'm' && P1 == 'M' || P1 == 'm')
        {
            cout << endl;
            cout << "[D] GAME SERI" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'M' | P2 == 'm' && P1 == 'G' || P1 == 'g')
        {
            cout << endl;
            cout << "[W] Player 1 MENANG" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P2 == 'M' | P2 == 'm' && P1 == 'S' || P1 == 's')
        {
            cout << endl;
            cout << "[W] Player 2 Menang" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P1 == 'M' | P1 == 'm' && P2 == 'M' || P2 == 'm')
        {
            cout << endl;
            cout << "[D] GAME SERI" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P1 == 'M' | P1 == 'm' && P2 == 'S' || P2 == 's')
        {
        cout << endl;
            cout << "[W] Player 1 Menang" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
        else if(P1 == 'M' | P1 == 'm' && P2 == 'G' || P2 == 'g')
        {
            cout << endl;
            cout << "[W] Player 2 Menang" << endl;
            cout << endl;
            cout << "[!] Lanjut main ? (1)/0 " << endl; // Inputan lanjutkan game / tidak
            cout << "[*] ";
            cin >> lanjut; // Menyimpan inputan lanjut
            cout << endl;
        }
    }
    while(lanjut != 0); //Jika user tidak lanjut bermain maka game berhenti.

    if(lanjut == 0) //Jika game berhenti,maka akan menampilkan pesan ini.
    {
        cout << "[!] !! READ ME !!" << endl;
        cout << "[T] Terimakasih telah mendownload Game GMS" << endl;
        cout << "[T] Jangan lupa like, share, follow & subscribe ";
        cout << "untuk support saya :D" << endl;
        cout << "[T] Support kalian sangat berarti bagi saya untuk ";
        cout << "membuat project yang lainnya" << endl;
        cout << endl;
        cout << "[!] LIKE - SHARE - FOLLOW & SUBSCRIBE" << endl;
        cout << "[S] INSTAGRAM  : @zoelabbb" << endl;
        cout << "[S] YouTube    : zoelabbb" << endl;
        cout << "[S] GitHub     : @zoelabbb" << endl;
        cout << "[S] Telegram   : https://t.me/domicadoesca" << endl;
    }

    return 0;
}
