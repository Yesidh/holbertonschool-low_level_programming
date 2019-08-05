<p>
<img width="260" height="170" src="https://davidjohncoleman.com/wp-djc/wp-content/uploads/2017/06/HBTN-Borderless-CMYK-Logo-Vertical-Color-Black@1200ppi-300x236.png" align="right" >
</p>





# Singly Linked Lists
How to create, print, count and free linked list. Also some things about the assembler 
and the macro __atribute__((constructor))
  
## Example
int main(void)
.PP{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
.PPOutput:
-> 2 elements

## Prerequisites
language c and compiler gcc with the flags:
```
gcc -Wall -Werror -Wextra -pedantic
```
## Built With
gcc 4.8.4, ubuntu 14.04
## Contributing

-- Yesid Gutierrez - Holberton Student                                        

## Versioning

Holberton School checks

## Authors

  
---Yesid Guttierrez  944@holbertonshcool.com                                    

## Files

| File               | Description                              |
| ------------------ | ---------------------------------------- |
| list.h 		       |file with the prototype of the functions and typedef of structs  |
| 0-print_list.c	       |Function that prints all the elements of a list_t list |
| 1-list_len.c		       |Function that returns the number of elements in a linked list_t list  |
| 2-add_node.c		       |Function that adds a new node at the beginning of a list_t list  |
| 3-add_node_end.c	       |Function that adds a new node at the end of a list_t list  |
| 4-free_list.c                |Function that frees a list_t list  |
| 100_first.c                  |print the function first that the main  |
| 101-hello_holberton.asm      |assembler code to print Hello Holberton doing a called for the function printf() |
