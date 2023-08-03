#include <iostream>
using namespace std;


struct airport //struct for airport info
{
    int landed, departed, great, low;
};

int avLand(airport[]);
int avDepart(airport[]);
int totalLand(airport[]);
int totalDepart(airport[]);
int highFind(airport[]);
int lowFind(airport[]);



int main()
{
    airport month[12];//airport array for each month of the year
    for (int count = 1; count <= 12; count++)//for loop asks user for info for each month for airport
    {
        cout << "How many planes landed in month " << count << "?" << endl;
        cin >> month[count].landed;
        cout << "How many planes departed in month " << count << "?" << endl;
        cin >> month[count].departed;
        cout << "Please enter the greatest number of planes landed on a given day " << endl;
        cin >> month[count].great;
        cout << "Please enter the least number of planes landed on a given day" << endl;
        cin >> month[count].low;
    }
    
    cout << "Planes summary" << endl;
    cout << endl;
    for (int i = 1; i <= 12; i++){//relays info recieved from the user
        cout << "Month " << i << " had " << month[i].landed << " planes landed.\n";
        cout << "Month " << i << " had " << month[i].departed << " planes departed.\n";
        cout << "Month " << i << " had a high of " << month[i].great << " planes landed in a day.\n";
        cout << "Month " << i << " had a low of " << month[i].low << " planes landed in a day.\n";
    }
    cout << "The average landing is " << avLand(month) << " flights.\n";
    cout << "The average departing is " << avDepart(month) << " flights.\n";
    cout << "The total landings are " << totalLand(month) << " flights.\n";
    cout << "The total departs are " << totalDepart(month) << " flights.\n";
    cout << "The greatest number of flights in a day are " << highFind(month) << " flights.\n";
    cout << "The lowest number of flights in a day are " << lowFind(month) << " flights.\n";
    
    return 0;
}

int avLand(airport month[]){//finds average airplanes landed for the year
    float av;
    float total = 0.0;
    for (int count = 1; count <= 12; count++){
        total = total + month[count].landed;
    }
    av = total/12;
    return av;
}

int avDepart(airport month[]){//finds average airplanes departed for the year
    float av;
    float total = 0.0;
    for (int count = 1; count <= 12; count++){
        total = total + month[count].departed;
    }
    av = total/12;
    return av;
}

int totalLand(airport month[]){//finds total airplanes landed for the year
    int total = 0;
    for (int count = 1; count <= 12; count++){
        total = total + month[count].landed;
    }
    return total;
}

int totalDepart(airport month[]){//finds total airplanes departed for the year
    int total = 0;
    for (int count = 1; count <= 12; count++){
        total = total + month[count].departed;
    }
    return total;
}

int highFind(airport month[])//find the highest number of planes landed throughout the whole year
{
    int highest;
    highest = month[1].great;
    
    for (int count = 1; count <= 12; count++)
    {
        if (month[count].great > highest){
            highest = month[count].great;
        }
    }
    
    return highest;
}


int lowFind(airport month[])//finds the lowest number of planes landed throughout the whole year
{
    int lowest;
    lowest = month[1].low;
    
    for (int count = 1; count <= 12; count++)
    {
        if (month[count].low < lowest){
            lowest = month[count].low;
        }
    }
    
    return lowest;
}
