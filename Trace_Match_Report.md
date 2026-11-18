# Trace-Match Report – Hash Table Implementation

## 1. Project Details
- **PRN:** 202501100074
- **Seed (S):** 74
- **Scenario:** Student Marks
- **Dataset Size:** 20
- **Hash Table Size (m):** 23
- **Hashing Method:** Division Method
- **Collision Resolution:** Linear Probing

## 2. Dataset

The dataset is generated using the formula:

`v[i] = (S + 13 * i) % 100`

Generated dataset:

`74, 87, 0, 13, 26, 39, 52, 65, 78, 91, 4, 17, 30, 43, 56, 69, 82, 95, 8, 21`

## 3. Hash Function

The Division Method is used:

`h(key) = key % 23`

If a collision occurs, Linear Probing checks the next index until an empty position is found.

## 4. Hand-Predicted Trace

| Key | Hash Index | Final Index |
|---|---:|---:|
| 74 | 5 | 5 |
| 87 | 18 | 18 |
| 0 | 0 | 0 |
| 13 | 13 | 13 |
| 26 | 3 | 3 |
| 39 | 16 | 16 |
| 52 | 6 | 6 |
| 65 | 19 | 19 |
| 78 | 9 | 9 |
| 91 | 22 | 22 |
| 4 | 4 | 4 |
| 17 | 17 | 17 |
| 30 | 7 | 7 |
| 43 | 20 | 20 |
| 56 | 10 | 10 |
| 69 | 0 | 1 |
| 82 | 13 | 14 |
| 95 | 3 | 8 |
| 8 | 8 | 11 |
| 21 | 21 | 21 |

## 5. Final Hash Table

| Index | Stored Value |
|---:|---:|
| 0 | 0 |
| 1 | 69 |
| 2 | EMPTY |
| 3 | 26 |
| 4 | 4 |
| 5 | 74 |
| 6 | 52 |
| 7 | 30 |
| 8 | 95 |
| 9 | 78 |
| 10 | 56 |
| 11 | 8 |
| 12 | EMPTY |
| 13 | 13 |
| 14 | 82 |
| 15 | EMPTY |
| 16 | 39 |
| 17 | 17 |
| 18 | 87 |
| 19 | 65 |
| 20 | 43 |
| 21 | 21 |
| 22 | 91 |

## 6. Collision Analysis

The following collisions occurred during insertion
