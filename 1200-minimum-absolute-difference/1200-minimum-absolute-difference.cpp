using namespace std;
static const auto fast = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
} ();

class Solution {
public:
	vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

		sort(arr.begin(), arr.end());

		vector<vector<int>> results;

		int diff = INT_MAX, min_diff = INT_MAX;

		for (int i = 1; i < arr.size(); i++) {
            
			diff = arr[i] - arr[i-1];
            
            if (diff == min_diff)
			{
				results.push_back({ arr[i - 1],arr[i] });
                min_diff = diff;
			} 
            else if (diff < min_diff){
                results.clear();
                results.push_back({ arr[i - 1],arr[i] });
                min_diff = diff;
            }
		}

		return results;
	}
};