/*
Author: Harsh Sanjay Roniyar
*/
#include <stdio.h>

int main(void) {
    int m, n, p, q;

    //Order of 1st matrix
    printf("Enter the order of the first matrix (m, n): ");
    scanf("%d %d", &m, &n);

    //Order of 2nd matrix
    printf("Enter the order of the second matrix (p, q): ");
    scanf("%d %d", &p, &q);

    puts("");
    //Create 2D arrays - a[m][n] and b[p][q]
    int a[m][n], b[p][q], c[m][q];
    //Enter elements of the matrices row wise
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the a[%d][%d] element: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    puts("");

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("Enter the b[%d][%d] element: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    puts("");
    //Check if matrix multiplication is possible n == p
    if (n != p) {
        printf("Matrix multiplication not possible!");
        return 1;
    }
    //A third matrix to store result

    //Set an outer loop i from 0 to m 
    for (int i = 0; i < m; i++) {
        //Inner loop j from 0 to q
        for (int j = 0; j < q; j++) {
            c[i][j] = 0;
            //Inner inner loop k from 0 to n
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    //Print the third matrix
    printf("The product of the two matrices is: \n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        puts("");
    }
}
