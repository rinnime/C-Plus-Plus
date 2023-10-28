// WhileLoopInsideWhileLoop.cpp
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter rows: ";
    int rows;
    cin >> rows;

    cout << "Enter columns: ";
    int columns;
    cin >> columns;

    int currentColumn = 0;
    while (currentColumn < columns)
    {
        int currentRow = 0;
        while (currentRow < rows)
        {
            cout << "#";
            currentRow++; //same as currentRow = currentRow + 1;

        }
        cout << endl;
        currentColumn++;
    }
}
