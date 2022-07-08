#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];
    string toFind = get_string("Enter Name: ");

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, toFind) == 0)
        {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
