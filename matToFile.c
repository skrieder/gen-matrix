//============================================
#include<stdio.h>
#include<stdlib.h>

#define ROW 5
#define COLUMN 4

void writeMatrixtoFile(int row, int column, double mtrx[row][column]);

double stuff[ROW][COLUMN];
int a=0, b=0;
//------------------------------------------------------------------------------
//Main function

int main()
{
  for(a=0; a<ROW;a++)
    {
      for(b=0; b<COLUMN;b++)
        {
	  stuff[a][b]=rand();
        }
    }
  //  double (*)[(long unsigned int)(column)]
  //  writeMatrixtoFile(ROW, COLUMN, stuff[ROW][COLUMN]);
  writeMatrixtoFile(ROW, COLUMN, stuff);

  return 0;
}

//------------------------------------------------------------------------------
//This function is for writing a matrix into a file
void writeMatrixtoFile(int row, int column, double mtrx[row][column])
{
  FILE *matrix=fopen("matrix.txt", "w");
  int a=0, b=0;
            
  for(a=0;a<row;a++)     
    {
      for(b=0;b<column;b++)  
        {              
	  fprintf(matrix, "%lf\t", mtrx[a][b]);
        }
      fprintf(matrix, "\n");
    } 
      
  fclose(matrix);
}
