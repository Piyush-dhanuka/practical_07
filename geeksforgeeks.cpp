class Solution
{
public:
    static int optimalSearchTree(int keys[], int freq[], int n)
    {
       
        int cost[n][n];

        int pref[n + 1];
        pref[0] = 0;
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + freq[i];

       
        for (int i = 0; i < n; i++)
            cost[i][i] = freq[i];

        
        for (int x = 2; x <= n; x++)
        {
            for (int i = 0; i <= n - x; i++)
            {
                int j = i + x - 1;
                cost[i][j] = INT_MAX;

                int sumFreq = pref[j + 1] - pref[i];

                for (int r = i; r <= j; r++)
                {
                    int leftCost = (r > i) ? cost[i][r - 1] : 0;
                    int rightCost = (r < j) ? cost[r + 1][j] : 0;
                    int totalCost = leftCost + rightCost + sumFreq;

                    if (totalCost < cost[i][j])
                        cost[i][j] = totalCost;
                }
            }
        }

        return cost[0][n - 1];
    }
};
