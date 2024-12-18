  // 1. WAP to find ceiling and floor function.
#include <stdio.h>
#include <math.h>
int main() {
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);
    printf("The floor value is %.0f\n", floor(num));
    printf("The ceiling value is %.0f", ceil(num));
    return 0;
}


// 2. Write a program to find Cartesian product of two set.
#include <stdio.h>
int main() {
    int set1[] = {1, 2, 3};
    int set2[] = {4, 5};
    int size1 = sizeof(set1) / sizeof(set1[0]);
    int size2 = sizeof(set2) / sizeof(set2[0]);
    printf("Cartesian Product:\n");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            printf("(%d, %d)\n", set1[i], set2[j]);
        }
    }
    return 0;
}



// 3. Write a program to implement fuzzy set of operations.

#include <stdio.h>
int main() {
    float set1[] = {0.2, 0.5, 0.7, 0.9};
    float set2[] = {0.1, 0.6, 0.3, 0.8};
    int size = 4;
    printf("Union: ");
    for (int i = 0; i < size; i++)
        printf("%.2f ", (set1[i] > set2[i]) ? set1[i] : set2[i]);
    printf("\nIntersection: ");
    for (int i = 0; i < size; i++)
        printf("%.2f ", (set1[i] < set2[i]) ? set1[i] : set2[i]);
    printf("\nComplement of Set 1: ");
    for (int i = 0; i < size; i++)
        printf("%.2f ", 1.0 - set1[i]);
    return 0;
}


// 4. Write a program to implement Euclidean algorithm.

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD is %d\n", a);
    return 0;
}


// 5. Write a program to find addition of two binary number.

#include <stdio.h>
#include <string.h>
int main() {
    char bin1[100], bin2[100], result[101];
    int i, j, k, sum, carry = 0;
    printf("Enter first binary number: ");
    scanf("%s", bin1);
    printf("Enter second binary number: ");
    scanf("%s", bin2);
    for (i = strlen(bin1) - 1, j = strlen(bin2) - 1, k = 100; i >= 0 || j >= 0 || carry; i--, j--, k--) {
        sum = (i >= 0 ? bin1[i] - '0' : 0) + (j >= 0 ? bin2[j] - '0' : 0) + carry;
        result[k] = sum % 2 + '0';
        carry = sum / 2;
    }
    printf("Sum: %s\n", result + k + 1);
    return 0;
}


// 6. Write a program to find subtraction of two binary number.
#include <stdio.h>
#include <string.h>
int main() {
    char bin1[100], bin2[100], result[100];
    int i, j, k, borrow = 0, bit1, bit2;
    printf("Enter first binary number: ");
    scanf("%s", bin1);
    printf("Enter second binary number: ");
    scanf("%s", bin2);
    int len1 = strlen(bin1);
    int len2 = strlen(bin2);
    k = len1 > len2 ? len1 : len2;
    result[k] = '\0';
    for (i = len1 - 1, j = len2 - 1, k--; k >= 0; i--, j--, k--) {
        bit1 = (i >= 0 ? bin1[i] - '0' : 0);
        bit2 = (j >= 0 ? bin2[j] - '0' : 0) + borrow;
        if (bit1 < bit2) {
            bit1 += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result[k] = bit1 - bit2 + '0';
    }
    printf("Difference: %s\n", result[0] == '0' ? result + 1 : result);
    return 0;
}


// 7. Write a program to print truth table of AND operation.

#include <stdio.h>
int main() {
    int a, b;
    printf("A \t B \tA AND B\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d \t %d  \t  %d\n", a, b, a & b);
        }
    }
    return 0;
}


// 8. Write a program to print truth table of OR operation.

#include <stdio.h>
int main() {
    int a, b;
    printf("A \t B \tA OR B\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d \t %d  \t  %d\n", a, b, a | b);
        }
    }
    return 0;
}


//9. Write a program to print truth table of Implication operation.

#include <stdio.h>
int main() {
    int a, b;
    printf("A \t B \tA -> B\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d \t %d  \t  %d\n", a, b, !(a && !b));
        }
    }
    return 0;
}


// 10. Write a program to implement linear search algorithm using recursion.

#include <stdio.h>
int linearSearch(int arr[], int size, int target, int index) {
    if (index >= size) return -1;
    if (arr[index] == target) return index;
    return linearSearch(arr, size, target, index + 1);
}
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, result;
    printf("Enter the target value: ");
    scanf("%d", &target);
    result = linearSearch(arr, size, target, 0);
    if (result != -1) {
        printf("Target found at index %d\n", result);
    } else {
        printf("Target not found\n");
    }
    return 0;
}


// 11. WAP to print truth table of universal gate
#include <stdio.h>
int main() {
    int A, B;
    printf("A |\t B |\t NAND \t| NOR\n");
    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            printf("%d |\t %d |\t %d \t| %d\n", A, B, !(A && B), !(A || B));
        }
    }
    return 0;
}


// 12. WAP to find Extended Euclidean algorithm.                       
#include<stdio.h>
int extendedGCD(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extendedGCD(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return gcd;
}
int main() {
    int a, b, x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int gcd = extendedGCD(a, b, &x, &y);
    printf("GCD(%d, %d) = %d\n", a, b, gcd);
    printf("Coefficients: x = %d, y = %d\n", x, y);
    return 0;
}


// 13. Write a program to find the union and intersection of the two sets of integers.
#include <stdio.h>
void findUnionAndIntersection(int set1[], int set2[], int n1, int n2) {
    int i = 0, j = 0;
    printf("Union: ");
    while (i < n1 || j < n2) {
        if (i < n1 && (j >= n2 || set1[i] < set2[j])) printf("%d ", set1[i++]);
        else if (j < n2 && (i >= n1 || set2[j] < set1[i])) printf("%d ", set2[j++]);
        else { printf("%d ", set1[i++]); j++; }
    }
    i = j = 0;
    printf("\nIntersection: ");
    while (i < n1 && j < n2) {
        if (set1[i] < set2[j]) i++;
        else if (set2[j] < set1[i]) j++;
        else { printf("%d ", set1[i++]); j++; }
    }
    printf("\n");
}
int main() {
    int set1[] = {1, 3, 4, 5, 7};
    int set2[] = {2, 3, 5, 6};
    findUnionAndIntersection(set1, set2, 5, 4);
    return 0;
}


// 14. WAP to implement Binary search algorithm.
#include <stdio.h>
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int result = binarySearch(arr, n, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}


// 15. WAP to implement Sorting algorithm.
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}


// 16.Programs to implement Boolean matrix operations join, product, and Boolean product.
#include <stdio.h>
#define N 3
void booleanOperations(int A[N][N], int B[N][N]) {
    int join[N][N], product[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            join[i][j] = A[i][j] || B[i][j];
            product[i][j] = 0;
            for (int k = 0; k < N; k++)
                product[i][j] |= (A[i][k] && B[k][j]);
        }
    }
    printf("Boolean Join:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("%d ", join[i][j]);
        printf("\n");
    }
    printf("Boolean Product:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("%d ", product[i][j]);
        printf("\n");
    }
}
int main() {
    int A[N][N] = {{1, 0, 1}, {0, 1, 0}, {1, 1, 0}};
    int B[N][N] = {{1, 1, 0}, {0, 1, 1}, {1, 0, 1}};
    booleanOperations(A, B); 
    return 0;
}


// 17.Programs to generate permutations and combinations.
#include <stdio.h>
void swap(int *x, int *y) { int temp = *x; *x = *y; *y = temp; }
void generatePermutations(int arr[], int l, int r) {
    if (l == r) { for (int i = 0; i <= r; i++) printf("%d ", arr[i]); printf("\n"); }
    else {
        for (int i = l; i <= r; i++) {
            swap(&arr[l], &arr[i]);
            generatePermutations(arr, l + 1, r);
            swap(&arr[l], &arr[i]);
        }}}
void generateCombinations(int arr[], int data[], int start, int end, int index, int r) {
    if (index == r) { for (int j = 0; j < r; j++) printf("%d ", data[j]); printf("\n"); return; }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++) {
        data[index] = arr[i];
        generateCombinations(arr, data, i + 1, end, index + 1, r);
    }}
int main() {
    int arr[] = {4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = 2, data[r];
    printf("Permutations:\n"); generatePermutations(arr, 0, n - 1);
    printf("Combinations:\n"); generateCombinations(arr, data, 0, n - 1, 0, r);
    return 0;
}



// 18. Programs for representing relations.
#include <stdio.h>
#define N 3
void displayRelationMatrix(int relation[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", relation[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int setA[N] = {1, 2, 3};
    int setB[N] = {2, 3, 4};
    int relation[N][N] = {
        {1, 1, 0},
        {0, 1, 1},
        {1, 0, 1}
    };
    printf("Relation Matrix:\n");
    displayRelationMatrix(relation);
    return 0;
}


// 19. Programs to implements some probabilistic and randomized algorithms.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
double monteCarloPi(int iterations) {
    int insideCircle = 0;
    for (int i = 0; i < iterations; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1) insideCircle++;
    }
    return (double)insideCircle / iterations * 4;
}
void swap(int *a, int *b) { int temp = *a; *a = *b; *b = temp; }
int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1, randomIndex = low + rand() % (high - low + 1);
    swap(&arr[randomIndex], &arr[high]);
    for (int j = low; j <= high - 1; j++)
        if (arr[j] <= pivot) swap(&arr[++i], &arr[j]);
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}
void randomizedQuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        randomizedQuickSort(arr, low, pi - 1);
        randomizedQuickSort(arr, pi + 1, high);
    }
}
int main() {
    srand(time(0));
    int iterations = 1000000;
    printf("Estimated Pi: %f\n", monteCarloPi(iterations));
    int arr[SIZE] = {64, 34, 25, 12, 22, 11, 90, 15, 7, 5};
    randomizedQuickSort(arr, 0, SIZE - 1);
    printf("Sorted array: ");
    for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
    return 0;
}


// 20. Write a program to implement Kruskal's algorithm for MST.  
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct {
    int u, v, w;
} Edge;
typedef struct {
    int parent, rank;
} Subset;
Edge edges[MAX];
Subset subsets[MAX];
int numEdges, numVertices;

int find(int i) {
    if (subsets[i].parent != i) subsets[i].parent = find(subsets[i].parent);
    return subsets[i].parent;
}
void unionSets(int x, int y) {
    int xroot = find(x), yroot = find(y);
    if (subsets[xroot].rank < subsets[yroot].rank) subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank) subsets[yroot].parent = xroot;
    else { subsets[yroot].parent = xroot; subsets[xroot].rank++; }
}
int compare(const void *a, const void *b) {
    return ((Edge*)a)->w - ((Edge*)b)->w;
}
void kruskal() {
    int mstWeight = 0, edgeCount = 0;
    for (int i = 0; i < numVertices; i++) { subsets[i].parent = i; subsets[i].rank = 0; }
    qsort(edges, numEdges, sizeof(Edge), compare);
    printf("Edges in MST:\n");
    for (int i = 0; i < numEdges && edgeCount < numVertices - 1; i++) {
        int u = edges[i].u, v = edges[i].v, w = edges[i].w;
        if (find(u) != find(v)) {
            printf("%d - %d: %d\n", u, v, w);
            mstWeight += w;
            unionSets(find(u), find(v));
            edgeCount++;
        }
    }
    printf("Total weight of MST: %d\n", mstWeight);
}
int main() {
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &numVertices, &numEdges);
    printf("Enter edges (u v w):\n");
    for (int i = 0; i < numEdges; i++) scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    kruskal();
    return 0;
}


// 21. WAP to implement  dijkstras algorithm for finding shortest path.
#include <stdio.h>
#include <limits.h>
#define V 5
int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, minIndex;
    for (int v = 0; v < V; v++)
        if (!sptSet[v] && dist[v] <= min) min = dist[v], minIndex = v;
    return minIndex;
}
void dijkstra(int graph[V][V], int src) {
    int dist[V], sptSet[V];
    for (int i = 0; i < V; i++) dist[i] = INT_MAX, sptSet[i] = 0;
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = 1;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    printf("Vertex \t| Distance from Source\n");
    for (int i = 0; i < V; i++) printf("%d \t| %d\n", i, dist[i]);
}
int main() {
    int graph[V][V] = {
        {0, 10, 0, 0, 5},
        {0, 0, 1, 0, 2},
        {0, 0, 0, 4, 0},
        {7, 0, 6, 0, 0},
        {0, 3, 9, 2, 0}
    };
    dijkstra(graph, 0);
    return 0;
}










