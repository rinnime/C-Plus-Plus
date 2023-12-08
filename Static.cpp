#include <iostream>

using namespace std;

enum class Day
{
    MONDAY = 1, START_OF_WEEK = MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY, END_OF_WEEK = SUNDAY
};

Day& operator++(Day& d)
{
    return d = (d == Day::END_OF_WEEK) ? Day::MONDAY : static_cast<Day>(static_cast<int>(d) + 1);
}

ostream& operator<<(ostream& left, const Day& right)
{
    switch (right)
    {
    case Day::MONDAY:
        left << "MONDAY";
        break;
    case Day::TUESDAY:
        left << "TUESDAY";
        break;
    case Day::WEDNESDAY:
        left << "WEDNESDAY";
        break;
    case Day::THURSDAY:
        left << "THURSDAY";
        break;
    case Day::FRIDAY:
        left << "FRIDAY";
        break;
    case Day::SATURDAY:
        left << "SATURDAY";
        break;
    case Day::SUNDAY:
        left << "SUNDAY";
        break;
    default:
        left << "INVALID";
        break;
    }
    return left;
}

int main()
{
    Day today = Day::FRIDAY;
    if (today < Day::SATURDAY)
        cout << "Today is a weekday :)" << endl;

    ++today;
    if (today > Day::FRIDAY)
        cout << "Today is a weekend :)" << endl;

    ++today;
    cout << today << endl;

    ++today;
    cout << today << endl;

    return 0;
}
