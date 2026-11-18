
#include <iostream>
using namespace std;

#define M 23

int main()
{
    int data[24] = {
        74, 87, 0, 13, 26, 39,
        52, 65, 78, 91, 4, 17,
        30, 43, 56, 69, 82, 95,
        8, 21, 10, 11, 12, 14
    };

    int hashTable[M];

    for(int i = 0; i < M; i++)
        hashTable[i] = -1;

    for(int i = 0; i < 24; i++)
    {
        int key = data[i];
        int index = key % M;
        int startIndex = index;

        cout << "\nInserting: " << key;

        while(hashTable[index] != -1)
        {
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
        cout << " Inserted at index: " << index << endl;
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
