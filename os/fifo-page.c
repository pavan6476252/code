#include<stdio.h>

int main()
{
    int pages[30], frames[10], i, j, k, n, pf=0, flag, s, avail;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page reference string: ");
    for(i=0; i<n; i++)
        scanf("%d", &pages[i]);

    for(i=0; i<10; i++)
        frames[i] = -1;

    j=0;
    printf("\nPage replacement process: \n");
    for(i=0; i<n; i++)
    {
        flag = 0;
        avail = 0;

        for(k=0; k<10; k++)
        {
            if(frames[k] == pages[i])
            {
                flag = 1;
                avail = 1;
                break;
            }
        }

        if(flag == 0)
        {
            for(k=0; k<10; k++)
            {
                if(frames[k] == -1)
                {
                    pf++;
                    frames[k] = pages[i];
                    avail = 1;
                    break;
                }
            }
        }

        if(avail == 0)
        {
            frames[j] = pages[i];
            j = (j+1) % 10;
            pf++;
        }

        printf("\n");
        for(k=0; k<10; k++)
            printf("%d\t", frames[k]);
    }
    printf("\n\nTotal page faults: %d", pf);

    return 0;
}
