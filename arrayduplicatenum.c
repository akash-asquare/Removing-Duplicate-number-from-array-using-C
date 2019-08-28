#include<stdio.h>
void main()
{
    int i[20], a, b, c, n;

    printf("\nEnter array size: ");
    scanf("%d", &n);

    printf("\nEnter %d array element: ", n);
    for(a = 0; a < n; a++)
    {
        scanf("%d", &i[a]);
    }

    printf("\nOriginal array is: ");
    for(a = 0; a < n; a++)
    {
        printf(" %d", i[a]);
    }

    printf("\nNew array is: ");
    for(a = 0; a < n; a++)
    {
        for(b = a+1; b < n; )
        {
            if(i[b] == i[a])
            {
                for(c = b; c < n; c++)
                {
                    i[c] = i[c+1];
                }
                n--;
            }
            else
            {
                b++;
            }
        }
    }

    for(a = 0; a < n; a++)
    {
        printf("%d ", i[a]);
    }
  
}
