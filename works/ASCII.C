#include <stdio.h>

int main()
{
    FILE *ptr_file;
 ptr_file = fopen("ASCIItable.txt", "w");
    char a[17][9];
    a[11][0] = 'A'; a[12][0] = 'B'; a[13][0] = 'C'; a[14][0] = 'D'; a[15][0] = 'E'; a[16][0] = 'F';
    a[0][0] = '/';
    for (int i = 0; i < 10; i++) {
        a[i + 1][0] = 48 + i;
    }
    for (int i = 0; i < 8; i++) {
        a[0][i + 1] = 48 + i;
    }
    int c = 0;
    for (int i = 1; i < 9; i++) {
        for(int j = 1; j < 17; j++){
            if(c >= 32){
                a[j][i] = c;
            } else {
                a[j][i] = 2;
            }
            c++;
        }
    }
    
    for(int j = 0; j < 9; j++){
        for(int x = 0; x < 17; x++){
            fprintf(ptr_file,"  %c  ", a[x][j]);
            printf("  %c  ", a[x][j]);
        }
        printf("\n\n\n");
        fprintf(ptr_file,"\n\n\n");
    }
}
