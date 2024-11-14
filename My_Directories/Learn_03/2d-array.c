#include <stdio.h>
#include <math.h>

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    int b[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // brackets indicate rows. a = b here though
    int c[3][2] = {1, 2};                   // the skipped elements are initialized with 0
    int d[2][2] = {{1}, {3, 4}};            // the skipped elements are initialized with 0
    int e[][3] = {1, 2, 3, 4, 5, 6};        // here, we skipped row size as it can be calculated in such type of initialization
    //But the column size can't be skipped, the compiler will give error in this case if done
    int f[2][2]; // here the array is just declared but not initialized hence it will take garbage values

    printf("%d\n", a[2][1]); // here it will print the element of 3rd row and 2nd column

    int n,m;
    printf("Enter rows & coldumns: ");
    scanf("%d%d", &n, &m);
    int arr[n][m];
INPUT:
    for (int i = 0; i < n; i++)
    {
        printf("\nRow: %d", i+1);
        for (int j = 0; j < m; j++)
        {
            scanf("%d", arr[i][j]);
        }
        printf("\n");
    }
OUTPUT:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]); // to print in column-major format, use arr[j][i] instead!
        }
        printf("\n");
    }
    

    return 0;
}