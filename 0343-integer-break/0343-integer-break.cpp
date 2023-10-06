static const auto fast = []()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
} ();

class Solution {
public:

	int solution(int n, int dp[]) {
		if (n == 0)
			return 0;
		else if (dp[n] != 0)
			return dp[n];

		int ans = 0;

		for (int i = 1; i <= n / 2; ++i) {
			ans = max(ans, max(i, solution(i, dp)) * max(n - i, solution(n - i, dp)));
		}

		dp[n] = ans;

		return dp[n];
	}

	int integerBreak(int n) {
		int dp[60]{ 0 };
		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 1;

		return solution(n, dp);
	}
};