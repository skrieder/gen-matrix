//============================================
#include<stdio.h>
#include<stdlib.h>

//#define ROW 5
//#define COLUMN 5

void writeMatrixtoFile(int row, int column, double mtrx[row][column]);

int ROW = 5;
int COLUMN = 5;

int a=0, b=0;
//------------------------------------------------------------------------------
//Main function

int main(int argc, char **argv)
{
  if( argc>2 ){
    ROW = atoi(argv[1]);       //could be used to pass in parameters                                                                                                      
    COLUMN = atoi(argv[1]);       //could be used to pass in parameters                                                                                                      
  }
  double stuff[ROW][COLUMN];
  for(a=0; a<ROW;a++)
    {
      for(b=0; b<COLUMN;b++)
        {
	  stuff[a][b]=rand();
        }
    }

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
