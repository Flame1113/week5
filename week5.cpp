#include <iostream>
#include <string>
using namespace std;
struct airport {
    int planeDepart;
    int planeArrive;
    int mostInDay;
    int leastInDay;
};
int main(){
    string getMonth(int);
    int singleDepart, singleArrive, bigInDay, smallInDay;
    int totalLandings = 0, totaltakeOffs = 0;
    airport months[12];
    for (int rep = 0; rep < 12; rep++){
        cout << "Please enter the number of planes that landed in " << getMonth(rep) << ": ";
        cin >> singleDepart;
        months[rep].planeDepart = singleDepart;
        totaltakeOffs += singleDepart;

        cout << "Please enter the number of planes that departed in " << getMonth(rep) << ": ";
        cin >> singleArrive;
        months[rep].planeArrive = singleArrive;
        totalLandings += singleArrive;

        cout << "Please enter the greatest number of planes that landed on a single day in " << getMonth(rep) << ": ";
        cin >> bigInDay;
        months[rep].mostInDay = bigInDay;

        cout << "Please enter the least  number of planes that landed on a single day in " << getMonth(rep) << ": ";
        cin >> smallInDay;
        months[rep].leastInDay = smallInDay;
    }
    string mostMonth, leastMonth;
    int mostLand = months[0].mostInDay, smallLand = months[0].leastInDay;
    for (int rep = 0; rep < 12; rep++){
        if (months[rep].mostInDay > mostLand){
            mostLand = months[rep].mostInDay;
            mostMonth = getMonth(rep);
        }
        if (months[rep].leastInDay < smallLand){
            smallLand = months[rep].leastInDay;
            leastMonth = getMonth(rep);
        }
    }
    cout << "The average monthly landings for the year is " << totalLandings/12.0 << endl;
    cout << "The average monthly departures for the year is " << totaltakeOffs/12.0 << endl;
    cout << "The total landings for the year is " << totalLandings << endl;
    cout << "The total departures for the year is " << totaltakeOffs << endl;
    cout << "The greatest number of planes that landed in a single day is " << mostLand << " which occured in the month of " << mostMonth << endl;
    cout << "The least number of planes that landed in a single day is " << smallLand << " which occured in the month of " << leastMonth << endl;
    return 0;
}
string getMonth(int month){
    switch (month){
        case 0:
            return "January";
        case 1:
            return "February";
        case 2:
            return "March";
        case 3:
            return "April";
        case 4:
            return "May";
        case 5:
            return "June";
        case 6:
            return "July";
        case 7:
            return "August";
        case 8:
            return "September";
        case 9:
            return "October";
        case 10:
            return "November";
        case 11:
            return "December";
    }
}
