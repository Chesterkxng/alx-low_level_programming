# C - Search Algorithms

This was my ALX project on search algorithms. I implemented
various types of search algorithms and stated the corresponding space/time
complexities for each.

## Header File :file_folder:

* [search_algos.h](./search_algos.h): Header file containing definitions and
prototypes for all types and functions written for the project.

Data Structures
```
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

Function Prototypes

| File                    | Prototype                                                       |
| ----------------------- | --------------------------------------------------------------- |
| `0-linear.c`            | `int linear_search(int *array, size_t size, int value);`        |
| `1-binary.c`            | `int binary_search(int *array, size_t size, int value);`        |
| `100-jump.c`            | `int jump_search(int *array, size_t size, int value);`          |
| `102-interpolation.c`   | `int interpolation_search(int *array, size_t size, int value);` |
| `103-exponential.c`     | `int exponential_search(int *array, size_t size, int value);`   |

## Tasks :page_with_curl:

* **0. Linear search**
  * [0-linear.c](./0-linear.c): C function that searches for a value in an array
  of integers using linear search.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* **1. Binary search**
  * [1-binary.c](./1-binary.c): C function that searches for a value in a sorted
  array of integers using binary search.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

* **2. Big O #0**
  * [2-O](./2-O): Text file containing the worst case time complexity of linear
  search.

* **3. Big O #1**
  * [3-O](./3-O): Text file containing the worst case space complexity of
  iterative linear search.

* **4. Big O #2**
  * [4-O](./4-O): Text file containing worst case case time complexity
  of binary search.

* **5. Big O #3**
  * [5-O](./5-O): Text file containing the worst case space complexity
  of binary search.

* **6. Big O #4**
  * [6-O](./6-O): Text file containing the space complexity of the following algorithm:
```
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
		}
		return (map);
}
```

* **7. Jump search**
  * [100-jump.c](./100-jump.c): C function that searches for a value in a
  sorted array of integers using jump search.
  * Uses the square root of the size of the array as the jump step.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

* **8. Big O #5**
  * [101-O](./101-O): Text file containing the average case time complexity of
  jump search in an array of size `n` using `step = sqrt(n)`.

* **9. Interpolation search**
  * [102-interpolation.c](./102-interpolation.c): C function that searches for
  a value in a sorted array of integers using interpolation search.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* **10. Exponential search**
  * [103-exponential.c](./103-exponential.c): C function that searches for a
  value in a sorted array of integers using exponential search.
  * Uses powers of 2 as exponential ranges to search the array.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

