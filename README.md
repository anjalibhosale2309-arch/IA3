# Personalized Hash Table Implementation in C++

## Project Overview
This project implements a Hash Table in C++ using the **Division Method** for hashing and **Linear Probing** for collision resolution.

The project is developed as part of the Data Structures and Algorithms (DSA) Internal Activity.

## Personalization Details
- **Scenario:** Student Marks
- **Seed (S):** 74
- **Dataset Size:** 20 values
- **Hash Table Size:** 23
- **Hashing Method:** Division Method
- **Collision Resolution:** Linear Probing

## Dataset Generation
The dataset is generated using the formula:

`v[i] = (S + 13 * i) % 100`

Generated dataset:

`74, 87, 0, 13, 26, 39, 52, 65, 78, 91, 4, 17, 30, 43, 56, 69, 82, 95, 8, 21`

## Hash Function
The Division Method is used:

`h(key) = key % 23`

If a collision occurs, Linear Probing checks the next available index until an empty position is found.

## Technologies Used
- Programming Language: C++
- Data Structure: Hash Table
- Hashing Technique: Division Method
- Collision Handling: Linear Probing
- IDE: Dev-C++ / VS Code
- Version Control: Git and GitHub

## Project Files
- `hashingpl.cpp` – Main C++ implementation of the hash table.
- `hashing_test.cpp` – Test program to check the hash table full condition.
- `git_log.txt` – Git commit history and file change details.
- `Debugging_Log.txt` – Development and debugging notes.
- `Trace_Match_Report.txt` – Comparison of predicted and actual hash table output.

## How to Run the Program

1. Download or clone the repository.
2. Open the project folder in your C++ IDE.
3. Compile the program:

```bash
g++ hashingpl.cpp -o hashingpl
```

4. Run the program:

```bash
./hashingpl
```

On Windows, run:

```bash
hashingpl.exe
```

## Testing
The program is tested with the personalized dataset and a separate test case to check what happens when the hash table becomes full.

## Git Development
The project uses Git for version control. Development is recorded through incremental commits to show the changes made during implementation and testing.

## Conclusion
This project demonstrates the working of a Hash Table using the Division Method and Linear Probing. It also explains collision handling, insertion, testing, and version control using
