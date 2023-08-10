#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*
Matthew Christofas
February 23, 2023
Computer Systems & LL Programming
Lab 05 Processing 2D arrays
Mission: To design and implement functions to process 2DArrays. 
*/

static int rows,cols;


void displayOutputs(int array[][cols]);
void max(int array[][cols]);
void rowSum(int array[][cols]);
void colSum(int array[][cols]);
void isSquare(int array[][cols]);


void main(){


   puts("\nLet's create a 2Dim array!\n");
   printf("\tHow many rows? ");
   scanf("%d", &rows);
   printf("\tHow many columns? ");
   scanf("%d", &cols);


   int array[rows][cols];


   puts("\n");
   for(int i = 0; i < rows; i++){
       for(int y = 0; y < cols; y++){
           printf("\tenter [%d][%d]: ",i,y);
           scanf("%d", &array[i][y]);


       }
   }



   max(array);
   rowSum(array);
   colSum(array);
   isSquare(array);
   displayOutputs(array);

}

void isSquare(int array[][cols]){

    if(rows == cols){
        printf("\nThis is a square array.\n");
    }

    if(rows != cols){
        printf("\nThis is not a square array.\n");
    }

}

void colSum(int array[][cols]){
    int sum = 0;

    for(int i = 0; i < cols; i++){
        sum = 0;
        for(int j = 0; j < rows; j++){
            sum += array[j][i];
        }
        printf("Sum of column %d = %d\n", i+1, sum);
    }
}

void rowSum(int array[][cols]){

    int sum = 0;

    for(int i = 0; i < rows; i++){
        sum = 0;
        for(int j = 0; j < cols; j++){
            sum += array[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, sum);
    }
   puts("\n");
}


void max(int array[][cols]){
   int max = array[0][0];


   for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){

            if(array[i][j] > max){
                max = array[i][j];
       }
      
   }
   }
    printf("\nMax element: %d\n\n",max);

}


void displayOutputs(int array[][cols]){
   puts("\nHere is your 2Dim array: \n");
   for(int i = 0; i < rows; ++i){
       for(int j = 0; j < cols; ++j){
           printf("%d ", array[i][j]);
       }
       printf("\n");
   }


}
