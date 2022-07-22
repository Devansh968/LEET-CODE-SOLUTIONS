class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        
        //Jan 01, 1971 is Friday
        vector<string> daysOfWeek = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        
        vector<int> months = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int nrDays = 0;
        
        //calculate years
        for(int i=1971; i<year; i++)
            nrDays += 365 + (i%4 == 0);
        
        //calculate months
        for(int i=1; i<month; i++)
            nrDays += months[i];
        
        if(year < 2100 && year%4 == 0 && month > 2)
            nrDays++;
        
        //calculate days
            nrDays += day-1;
        
        return daysOfWeek[nrDays%7];
    }
};