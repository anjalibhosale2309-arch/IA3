# Debugging Log – Personalized Hash Table Implementation

## Project Details
- **PRN:** 202501100074
- **Seed (S):** 74
- **Scenario:** Student Marks
- **Programming Language:** C++
- **Hashing Method:** Division Method
- **Collision Resolution:** Linear Probing
- **Hash Table Size:** 23

## Commit 1: Initial Hash Table Implementation
**Work Done:** Created the initial C++ program for implementing a hash table.

**Debugging:** Initially, I focused on creating the hash table array and inserting values using the Division Method. I checked whether the hash function generated the correct index for each key.

**Result:** The basic hash table implementation was completed successfully.

## Commit 2: Add Assignment Details and Documentation
**Work Done:** Added project details, personalization values, and dataset information.

**Debugging:** I verified the dataset using the formula `v[i] = (S + 13 * i) % 100`. I checked all 20 generated values to avoid incorrect data insertion.

**Result:** The personalized dataset was generated correctly.

## Commit 3: Clean Up the Program
**Work Done:** Removed unused header files and cleaned the program.

**Debugging:** During code review, I noticed that an unnecessary header file was included. I removed it and checked whether the program still compiled correctly.

**Result:** The program compiled successfully after cleanup.

## Commit 4: Add Full Table Protection
**Work Done:** Added a condition to handle the situation when the hash table becomes full.

**Debugging:** Initially, the linear probing loop could continue searching without stopping if no empty position was available. I improved the approach by storing the starting index and stopping the search when probing returned to that index.

**Failed Approach:** An unlimited probing loop was not suitable because it could run continuously when the table was full.

**Solution:** I used a full-cycle checking condition to stop insertion when all table positions had been checked.

**Result:** The program now handles a full hash table safely.

## Commit 5: Test Hash Table Full Condition
**Work Done:** Created a separate test program to check the full table condition.

**Debugging:** I tested the program by inserting more values than the available table capacity. This helped verify whether the full-table condition worked correctly.

**Result:** The program displayed a message when no more values could be inserted.

## Commit 6: Final Project Documentation
**Work Done:** Added final project documentation and checked the program output.

**Debugging:** I compared the final console output with the hand-predicted hash table. I verified the collision positions and checked that all 20 values were inserted correctly.

**Result:** The final program output matched the predicted hash table.

## Overall Conclusion
During development, I tested the hash function, dataset generation, collision handling, and full-table condition. I also corrected the unlimited probing issue by adding a stopping condition. The final implementation successfully uses the Division Method and Linear Probing to insert the personalized dataset into a hash table.
