class Solution {
public:
	int getWinner(vector<int>& arr, int k) {
		int Maximum = arr[0];
		map<int, int> mp;

		if (k >= arr.size())
			return *max_element(arr.begin(), arr.end());

		for (int i = 1; i < arr.size() && k > 0; i++)
		{
			if (arr[i] > Maximum)
			{
				Maximum = arr[i];
			}

			mp[Maximum]++;

			if (mp[Maximum] == k)
				return Maximum;
		}

		return Maximum;
	}
};