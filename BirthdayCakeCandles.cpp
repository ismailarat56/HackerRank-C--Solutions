// HackerRank Soru Adı: Birthday Cake Candles
// Zorluk: Kolay (Easy)
// Çözüm Dili: C++
// Bu kod, verilen bir dizideki en büyük değeri (en uzun mumu) bulur 
// ve bu değerden dizide kaç tane olduğunu hesaplayarak ekrana yazdırır.

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



//-----MY SOLUTION STARTS HERE -----
int birthdayCakeCandles(vector<int> candles) {

    if(candles.empty()){
        return 0;
    }
    int max = candles[0];
    int res = 0;
    for(auto i=candles.begin(); i!= candles.end();i++){
        if(*i > max){
            max = *i;
            res = 1;
            continue;
        }
        if(*i == max){
            res += 1;
        }
    }
    return res;

}
//-------- MY SOLUTION ENDS HERE--------

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string candles_count_temp;
    getline(cin, candles_count_temp);

    int candles_count = stoi(ltrim(rtrim(candles_count_temp)));

    string candles_temp_temp;
    getline(cin, candles_temp_temp);

    vector<string> candles_temp = split(rtrim(candles_temp_temp));

    vector<int> candles(candles_count);

    for (int i = 0; i < candles_count; i++) {
        int candles_item = stoi(candles_temp[i]);

        candles[i] = candles_item;
    }

    int result = birthdayCakeCandles(candles);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
