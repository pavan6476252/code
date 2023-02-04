static void sum(int mat[][], int r, int c)
    {
        int i, j;
        int upper_sum = 0;
        int lower_sum = 0;
 
        /*Calculate sum of upper triangle*/
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++) {
                if (i <= j) {
                    upper_sum += mat[i][j];
                }
            }
 
        System.out.println("Upper sum is " + upper_sum);
 
        /*Calculate sum of lower*/
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++) {
                if (j <= i) {
                    lower_sum += mat[i][j];
                }
            }
 
        System.out.print("Lower sum is " + lower_sum);
    }
