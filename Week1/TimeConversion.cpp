// https://www.hackerrank.com/challenges/one-month-preparation-kit-time-conversion/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    stringstream os ( s );
    if (s == "12:00:00PM") return "12:00:00";
    if (s == "12:00:00AM") return "00:00:00";

    string min_sec_ap; int hour; string result;
    os >> hour >> min_sec_ap;
    if ((s.find("PM") != string::npos) && hour != 12) {
        hour += 12;
    } else if ((s.find("AM") != string::npos) && hour == 12) {
        hour = 0;
    }
    hour %= 24;

    if (hour < 10) {
        result += "0";
    }
    result += to_string(hour) + min_sec_ap.substr(0, min_sec_ap.length()-2);;
    return result;
}

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
