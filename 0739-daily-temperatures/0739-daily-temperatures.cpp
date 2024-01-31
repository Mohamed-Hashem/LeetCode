class Solution
{
    public:
        vector<int> dailyTemperatures(vector<int> &temperatures)
        {
            int size = temperatures.size();

            vector<int> ans(size, 0);

            stack<pair<int, int>> stk;

            int j = 0;

            for (int i = 0; i < size; i++)
            {
                while (!stk.empty() && temperatures[i] > stk.top().first)
                {
                    j = stk.top().second;
                    ans[j] = i - j;
                    stk.pop();
                }

                stk.push({ temperatures[i], i });
            }

            return ans;
        }
};