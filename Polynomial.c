#include <stdio.h>
#include <stdlib.h>
struct Node
{
     int coeff;
     int exp;
    struct Node *next;
};
typedef struct Node *Polynomial;
void insertTerm(Polynomial *p, int coeff, int exp) 
{
    Polynomial newTerm = (Polynomial)malloc(sizeof(struct Node));
    newTerm->coeff = coeff;
    newTerm->exp = exp;
    newTerm->next = NULL;
    if (*p == NULL) 
    {
        *p = newTerm;
    } 
    else
    {
        Polynomial temp = *p;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newTerm;
    }
}
void readPolynomial(Polynomial *p)
{
    int n, coeff, exp;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);
    printf("Enter the polynomial in decreasing order of exponents:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &coeff, &exp);
        insertTerm(p, coeff, exp);
    }
}
void writePolynomial(Polynomial p)
{
    while (p != NULL)
    {
        printf("%dx^%d ", p->coeff, p->exp);
        p = p->next;
        if (p != NULL)
        {
        printf("+ ");
        }
    }
    printf("\n");
}
Polynomial addPolynomials(Polynomial p1, Polynomial p2) 
{
    Polynomial result = NULL;
    while (p1 != NULL && p2 != NULL) 
    {
        if (p1->exp > p2->exp)
        {
            insertTerm(&result, p1->coeff, p1->exp);
            p1 = p1->next;
        } 
        else if (p1->exp < p2->exp)
        {
            insertTerm(&result, p2->coeff, p2->exp);
            p2 = p2->next;
        }
        else 
        {
            int coeff = p1->coeff + p2->coeff;
            if (coeff != 0) 
            {
                insertTerm(&result, coeff, p1->exp);
            }
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    while (p1 != NULL) 
    {
        insertTerm(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }
    while (p2 != NULL) 
    {
        insertTerm(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }
    return result;
}
int main() {
    Polynomial p1 = NULL, p2 = NULL, sum = NULL;
    printf("Enter the first polynomial:\n");
    readPolynomial(&p1);
    printf("Enter the second polynomial:\n");
    readPolynomial(&p2);
    printf("First polynomial: ");
    writePolynomial(p1);
    printf("Second polynomial: ");
    writePolynomial(p2);
    sum = addPolynomials(p1, p2);
    printf("Sum of polynomials: ");
    writePolynomial(sum);
    return 0;
}
out put :
Enter the first polynomial:
Enter the number of terms in the polynomial: 2
Enter the polynomial in decreasing order of exponents:
8
7
6
5
4
3Enter the second polynomial:
Enter the number of terms in the polynomial: 4
Enter the polynomial in decreasing order of exponents:
9
8
6
5
4
3
2
1
First polynomial: 8x^7 + 6x^4 
Second polynomial: 9x^8 + 6x^5 + 4x^3 + 2x^1 
Sum of polynomials: 9x^8 + 8x^7 + 6x^5 + 6x^4 + 4x^3 + 2x^1 

