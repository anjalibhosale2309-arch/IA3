
#include <iostream>
using namespace std;

#define M 23

int main()
{
    // Assignment 3 - Data Structures
    // Topic: Hash Table using Linear Probing
    // PRN: 202501100074
    // Dataset: Personalized student marks
    // Hash Function: key % 23
    // Collision Resolution: Linear Probing

    int data[20] = {
        74, 87, 0, 13, 26,
        39, 52, 65, 78, 91,
        4, 17, 30, 43, 56,
        69, 82, 95, 8, 21
    };

    int hashTable[M];

    for(int i = 0; i < M; i++)
        hashTable[i] = -1;

    cout << "STUDENT MARKS HASH TABLE\n";
    cout << "Hash Function: key % " << M << endl;
    cout << "Collision Method: Linear Probing\n\n";

    for(int i = 0; i < 20; i++)
    {
        int key = data[i];
        int index = key % M;
        int startIndex = index;

        cout << "Inserting: " << key;
        cout << " Hash Index: " << index;

        while(hashTable[index] != -1)
        {
            cout << " Collision at " << index;
            index = (index + 1) % M;

            if(index == startIndex)
            {
                cout << "\nHash Table is Full! Cannot insert "
                     << key << endl;
                break;
            }
        }

        if(hashTable[index] != -1)
            continue;

        hashTable[index] = key;

        cout << " Final Index: " << index << endl;

        cout << "Table: ";

        for(int j = 0; j < M; j++)
        {
            if(hashTable[j] == -1)
                cout << "_ ";
            else
                cout << hashTable[j] << " ";
        }

        cout << "\n\n";
    }

    cout << "\nFINAL HASH TABLE\n";

    for(int i = 0; i < M; i++)
    {
        cout << i << " : ";

        if(hashTable[i] == -1)
            cout << "EMPTY";
        else
            cout << hashTable[i];

        cout << endl;
    }

    return 0;
}
