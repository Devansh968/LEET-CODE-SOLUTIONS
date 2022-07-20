class Solution
{
    public:
        vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
        {
            unordered_map<string, int> map1;
            unordered_map<string, int> map2;
            for (int i = 0; i < list1.size(); i++)
            {
                map1[list1[i]] = i;
            }
            for (int i = 0; i < list2.size(); i++)
            {
                map2[list2[i]] = i;
            }
            vector<pair<int, string>> res;
            int mini = INT_MIN;
            for (auto it: map1)
            {
                if (map2.find(it.first) != map2.end())
                {
                    int temp = it.second + map2[it.first];
                    res.push_back(make_pair(temp, it.first));
                }
            }
            sort(res.begin(), res.end());
            int temp = res[0].first;
            vector<string> ans;
            for (int i = 0; i < res.size(); i++)
            {
                if (res[i].first == temp)
                {
                    ans.push_back(res[i].second);
                }
                else
                {
                    break;
                }
            }
            return ans;
        }
};