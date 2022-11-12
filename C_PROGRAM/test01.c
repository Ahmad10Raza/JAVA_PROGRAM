#include <stdio.h>
    int large(int[], int, int);

    int main()
    {

        int size;
        int largest;
        int list[20];
        int i;

        printf("Enter size of the list:");
        scanf("%d", &size);

        printf("Printing the list:\n");
        for (i = 0; i < size ; i++)
        {
            list[i] = rand() % size;
            printf("%d \t", list[i]);
        }

        if (size == 0)
        {
            printf("Empty list\n");
        }

        else
        {
            largest = list[0];
            largest = large(list, size - 1, largest);
            printf("\nThe largest number in the list is: %d\n", largest);
        }

    }

    int large(int list[], int position, int largest)
    {

        if (position == 0)
            return largest;

        if (position > 0)
        {
            if (list[position] > largest)
            {
                largest = list[position];
            }
            return large(list, position - 1, largest);
        }

    }
