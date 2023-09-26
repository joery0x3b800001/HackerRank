// https://www.hackerrank.com/challenges/one-month-preparation-kit-pangrams/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
   set<char> st;
   for (int i=0; i<s.size(); ++i) {
      if (s[i] != ' ') st.insert(tolower(s[i]));
   }

   return (st.size() == 26) ? "pangram" : "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


// string pangrams(string s) {
//    int bit = 0;
//    for (int i=0; i<s.size(); i++) {
//       bit |= 1 << (s[i] - 'a');
//    }

//    return (bit == 67108863) ? "not pangram" : "pangram";
// }


// string pangrams(string s) {
//    return (set<char>(s.begin(), s.end()).size() == 26) ? "pangram" : "not pangram";
// }