 #include <stdio.h>
void main()
{
    int YEAR;
    scanf("%d", &YEAR);
    if ((YEAR % 400) == 0)
    printf("Yes");
    else if ((YEAR % 100) == 0)
    printf("No");
    else if ((YEAR % 4) == 0)
    printf("Yes");
    else
    printf("No");
}
