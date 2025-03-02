#include <stdio.h>

void GetMatrix(int *value, int row, int col);
void PrintMatrix(int *value, int row, int col);

int main() {
    int data[100][100];
    int m, n;

    
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

 
    GetMatrix(&data[0][0], m, n);
    PrintMatrix(&data[0][0], m, n);

    return 0;
}

void GetMatrix(int *value, int row, int col) {
    printf("Enter elements of the matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &value[i * col + j]);
        }
    }
}

void PrintMatrix(int *value, int row, int col) {
    printf("Matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", value[i * col + j]); 
        }
        printf("\n");
    }
}
