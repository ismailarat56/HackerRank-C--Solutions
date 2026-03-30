// HackerRank Soru Adı: Time Conversion
// Zorluk: Kolay (Easy)
// Çözüm Dili: C++
// Bu kod, 12 saatlik AM/PM formatında verilen bir saat bilgisini (string)
// 24 saatlik (askeri) formata dönüştürür ve sonucu metin olarak döndürür.

#include <bits/stdc++.h>

using namespace std;

//-----MY SOLUTION STARTS HERE -----
string timeConversion(string s) {

    string hourString = s.substr(0,2);
    
    int hourInt = stoi(hourString);
    
    size_t pos = s.find("PM");
    
    if(pos != string::npos)// if "PM" hour
    {
        if(hourInt + 12 < 24) // i.e. always except for 12:AA:
            hourString = to_string(hourInt + 12);
    }else {
        if(hourInt == 12)
            hourString = "00";
    }
    
    s.replace(0,2,hourString);
    s.erase(s.size()-2);
    return s;

}
//-------- MY SOLUTION ENDS HERE--------

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
