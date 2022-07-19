class Solution
{
    int bit_count(int num)
    {
        int count = 0;
        while (num)
        {
            count++;
            num &= (num - 1);
        }
        return count;
    }

public:
    vector<string> readBinaryWatch(int turnedOn)
    {
        vector<string> result;
        for (int h = 0; h < 12; h++)
        {
            for (int m = 0; m < 60; m++)
            {
                if (bit_count(h) + bit_count(m) == turnedOn)
                {
                    result.push_back(to_string(h) + ":" + (m < 10 ? ("0" + to_string(m)) : to_string(m)));
                }
            }
        }
        return result;
    }
};