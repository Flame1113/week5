#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct airport {
    int planeDepart;
    int planeArrive;
    int mostInDay;
    int leastInDay;
};
int main(){
    cout << "Student name:" << setw(18) << "Glen Dsouza" << endl;
    cout << "Student number:" << setw(14) << "900914917" << endl;
    cout << "Student name:" << setw(24) << "Jordon Marchesano" << endl;
    cout << "Student number:" << setw(14) << "900536880" << endl;
    cout << endl << endl;
    airport months[12];
    string monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int singleDepart, singleArrive, bigInDay, smallInDay;
    int totalLandings = 0, totaltakeOffs = 0;

    for (int rep = 0; rep < 12; rep++){
        cout << "Please enter the number of planes that landed in " << monthNames[rep] << ": ";
        cin >> singleDepart;
        months[rep].planeDepart = singleDepart;
        totaltakeOffs += singleDepart;

        cout << "Please enter the number of planes that departed in " << monthNames[rep] << ": ";
        cin >> singleArrive;
        months[rep].planeArrive = singleArrive;
        totalLandings += singleArrive;

        cout << "Please enter the greatest number of planes that landed on a single day in " << monthNames[rep] << ": ";
        cin >> bigInDay;
        months[rep].mostInDay = bigInDay;

        cout << "Please enter the least  number of planes that landed on a single day in " << monthNames[rep] << ": ";
        cin >> smallInDay;
        months[rep].leastInDay = smallInDay;
    }
    
    string mostMonth = "January", leastMonth = "January";
    int mostLand = months[0].mostInDay, smallLand = months[0].leastInDay;
    for (int i = 0; i < 12; i++){
        if (months[i].mostInDay > mostLand){
            mostLand = months[i].mostInDay;
            mostMonth = monthNames[i];
        }
        if (months[i].leastInDay < smallLand){
            smallLand = months[i].leastInDay;
            leastMonth = monthNames[i];
        }
    }

    cout << "The average monthly landings for the year is " << setprecision(2) << totalLandings/12.0 << endl;
    cout << "The average monthly departures for the year is " << setprecision(2) << totaltakeOffs/12.0 << endl;
    cout << "The total landings for the year is " << totalLandings << endl;
    cout << "The total departures for the year is " << totaltakeOffs << endl;
    cout << "The greatest number of planes that landed in a single day is " << mostLand << " which occured in the month of " << mostMonth << endl;
    cout << "The least number of planes that landed in a single day is " << smallLand << " which occured in the month of " << leastMonth << endl;
    cin.ignore();
    cin.get();
    return 0;
}
