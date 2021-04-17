#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     
     int hour = 0;
     int min = 0;
     int sec = 0;
     char ampm[3];
     sscanf(s.c_str(), "%d:%d:%d%s",&hour,&min,&sec,ampm);
     
     if (ampm[0] == 'P' && hour != 12) {
         hour += 12;
     }
     
     if (ampm[0] == 'A' && hour == 12)
     {
         hour = 0;
     }
     
     char convTime[10];
     sprintf(convTime, "%02d:%02d:%02d",hour, min, sec);
     
     string ss(convTime);
     return ss;
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
