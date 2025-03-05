#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dayName;
    cout << "Please enter a day of the week for a fun fact about that day: ";
    cin >> dayName;
    
    for (auto& x : dayName) {
      x = tolower(x);
    }
    switch (dayName[0])
    {
        case 'm':
            if (dayName == "monday")
            {
                cout << "Monday is the only day of the week that forms an anagram of a word: dynamo." << endl;
            }
            break;
        case 't':
            if (dayName == "tuesday")
            {
                cout << "Tuesday is the day of the week that is least likely to have a Christmas Eve on it." << endl;
            }
            else if (dayName == "thursday")
            {
                cout << "Leonardo Da Vinci was born on Thursday, April 15, 1452." << endl;
            }
            break;
        case 'w':
            if (dayName == "wednesday")
            {
                cout << "The first episode of “The Addams Family” aired on Wednesday, September 18, 1964." << endl;
            }
            break;
        case 'f':
            if (dayName == "friday")
            {
                cout << "Friday is the least productive day of the week." << endl;
            }
            break;
        case 's':
            if (dayName == "saturday")
            {
                cout << "In folklore, Saturday was often viewed as the best day to hunt vampires, as this was the day of the week when they were restricted to their coffins." << endl;
            }
            else if (dayName == "sunday")
            {
                cout << "Months that begin on a Sunday always have a Friday the 13th in them." << endl;
            }
            break;
    default:
        break;
    }
   
}


