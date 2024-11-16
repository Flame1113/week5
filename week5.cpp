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
int calcTakeOffs(airport months[]){
    int totalTakeOffs = 0;
    for (int rep = 0; rep < 12; rep++){
        totalTakeOffs += months[rep].planeDepart;
    }
    return totalTakeOffs;
}

int calcArrivals(airport months[]){
    int totalArrive = 0;
    for (int rep = 0; rep < 12; rep++){
        totalArrive += months[rep].planeArrive;
    }
    return totalArrive;
}

int calcMostLand(airport months[]){
    int mostMonth = 0;
    for (int rep = 0; rep < 12; rep++){
        if (months[rep].mostInDay > months[mostMonth].mostInDay){
            mostMonth = rep;
        }
    }
    return mostMonth;
}

int calcLeastLand(airport months[]){
    int leastMonth = 0;
    for (int rep = 0; rep < 12; rep++){
        if (months[rep].leastInDay < months[leastMonth].leastInDay){
            leastMonth = rep;
        }
    }
    return leastMonth;
}
int main(){
    int calcTakeOffs(airport[]);
    int calcArrivals(airport[]);
    int calcMostLand(airport[]);
    int calcLeastLand(airport[]);
    cout << "Student name:" << setw(18) << "Glen Dsouza" << endl;
    cout << "Student number:" << setw(14) << "900914917" << endl;
    cout << "Student name:" << setw(24) << "Jordon Marchesano" << endl;
    cout << "Student number:" << setw(14) << "900536880" << endl;
    cout << endl << endl;
    airport months[12];
    string monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int singleDepart, singleArrive, bigInDay, smallInDay;

    for (int rep = 0; rep < 12; rep++){
        cout << "Please enter the number of planes that landed in " << monthNames[rep] << ": ";
        cin >> months[rep].planeDepart;

        cout << "Please enter the number of planes that departed in " << monthNames[rep] << ": ";
        cin >> months[rep].planeArrive;

        cout << "Please enter the greatest number of planes that landed on a single day in " << monthNames[rep] << ": ";
        cin >> months[rep].mostInDay;

        cout << "Please enter the least  number of planes that landed on a single day in " << monthNames[rep] << ": ";
        cin >> months[rep].leastInDay;
    }

    cout << "The average monthly landings for the year is " << fixed << setprecision(2) << calcArrivals(months)/12.0 << endl;
    cout << "The average monthly departures for the year is " << fixed << setprecision(2) << calcTakeOffs(months)/12.0 << endl;
    cout << "The total landings for the year is " << calcArrivals(months) << endl;
    cout << "The total departures for the year is " << calcTakeOffs(months) << endl;
    cout << "The greatest number of planes that landed in a single day is " << months[calcMostLand(months)].mostInDay << " which occured in the month of " << monthNames[calcMostLand(months)] << endl;
    cout << "The least number of planes that landed in a single day is " << months[calcLeastLand(months)].leastInDay << " which occured in the month of " << monthNames[calcLeastLand(months)] << endl;
    cin.ignore();
    cin.get();
    return 0;
}
