 #include <stdio.h>
void main()
{
    int Year;
    scanf("%d", &Year);
    if ((Year % 400) == 0)
    printf("Yes");
    else if ((Year % 100) == 0)
    printf("No");
    else if ((Year % 4) == 0)
    printf("Yes");
    else
    printf("No");
}
