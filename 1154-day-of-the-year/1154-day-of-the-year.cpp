class Solution {
public:
    int dayOfYear(string date) {
         int year = atoi(date.substr(0,4).c_str());
         int month = atoi(date.substr(5,2).c_str());
         int day = atoi(date.substr(8,2).c_str());
        int daycount = 0;
        int mth[12] = {31,0,31,30,31,30,31,31,30,31,30,31};
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            mth[1] = 29;
        }
        else{
            mth[1] = 28;
        }
        for(int i = 1;i<month;i++)
            daycount += mth[i - 1];
    
        daycount += day;
        return daycount;
    }
};