#include "list.h"

// Bubble sort implementation for a linked list
t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int     temp;
    t_list  *current;
    t_list  *next;


    // Perform bubble sort
    current = lst;
    while (current)
    {
        next = current->next;
        while (next)
        {
            if (!cmp(current->data, next->data)) // Check if out of order
            {
                // Swap the data values
                temp = current->data;
                current->data = next->data;
                next->data = temp;
            }
            next = next->next; // Move to the next node
        }
        current = current->next; // Move the outer loop to the next node
    }

    return (lst); // Return the head of the sorted list
}
