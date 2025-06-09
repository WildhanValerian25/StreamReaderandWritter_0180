 #include <fstream>
 #include <iostream>
 #include <string>
 using namespace std;

 int main() {
    string baris;

    // membuat objek output file stream
    ofstream Outfile;
    // membuka file untuk ditulisi
    Outfile.open("contohfile.txt");

    cout << ">= Menulis file, /'q'/ untuk keluar" << endl;

    
    //unlimited loop untuk menulis
    while(true) {
          cout << "- ";
           //mendapatkan setiap karakter dalam satu baris
           getline(cin, baris);
           //loop akan berhenti jika anda memasukkan karakter q
            if (baris == "q") break;
             // menulis dan memasukkan nilai dari 'baris' ke dalam file 
             Outfile << baris << endl;
    }
    //selasai dalam menulis sekarang tutup filenya 
    Outfile.close();
    // membuat objek input file stream
    ifstream infile;
    // membuka file yang dituliskan 
    infile.open("contohfile.txt");

    cout << endl << "> Membuka dan membaca file" << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan disini 
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selasai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini 
    else cout << "Unable to open file";
    return 0;
 }
 