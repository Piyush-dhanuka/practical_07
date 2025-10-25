#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#define MAX 20

double obst_cost(double *p, double *q, int n)
{
    double cost[MAX][MAX], weight[MAX][MAX];
    int i, j, r, l;
    
    for (i = 1; i <= n + 1; i++)
    {
        cost[i][i - 1] = q[i - 1];
        weight[i][i - 1] = q[i - 1];
    }

    for (l = 1; l <= n; l++)
    {
        for (i = 1; i <= n - l + 1; i++)
        {
            j = i + l - 1;
            weight[i][j] = weight[i][j - 1] + p[j] + q[j];
            cost[i][j] = DBL_MAX;

            for (r = i; r <= j; r++)
            {
                double total = cost[i][r - 1] + cost[r + 1][j] + weight[i][j];
                if (total < cost[i][j])
                    cost[i][j] = total;
            }
        }
    }

    return cost[1][n];
}

int main()
{
    int n, i;
    double p[MAX], q[MAX];
    printf("Enter number of keys: ");
    scanf("%d", &n);

    printf("Enter probabilities for successful searches (p1 to p%d):\n", n);
    for (i = 1; i <= n; i++)
        scanf("%lf", &p[i]);

    printf("Enter probabilities for unsuccessful searches (q0 to q%d):\n", n);
    for (i = 0; i <= n; i++)
        scanf("%lf", &q[i]);

    double result = obst_cost(p, q, n);
    printf("Minimum expected cost of OBST = %.4f\n", result);

    return 0;
}
