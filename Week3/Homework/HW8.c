#include <stdio.h>

#define HOURS_PER_DAY 8.5
#define DAYS_PER_MONTH 20
#define SHEKELS_PER_HOUR 32.3

int main() {
    float workHoursPerMonth = DAYS_PER_MONTH * HOURS_PER_DAY;
    float salaryPerMonth = workHoursPerMonth * SHEKELS_PER_HOUR;
    float annualSalary = salaryPerMonth * 12;
    
    printf("Annual Salary in Shekels: %.2f\n", annualSalary);
    
    return 0;
}
//#include <stdio.h>

//#define HOURS_PER_DAY 8.5
//#define DAYS_PER_MONTH 24 שינינו את הדיפיין של ימים בחודש לכמות הימים החדשה
//#define SHEKELS_PER_HOUR 32.3
//#define EUROS_PER_SHEKEL 0.265 // Conversion rate הוספנו דיפיין חדש שהוא הערך המרה של השקל ליורו
//
//int main() {
    //float workHoursPerMonth = DAYS_PER_MONTH * HOURS_PER_DAY;
    //float salaryPerMonthInShekels = workHoursPerMonth * SHEKELS_PER_HOUR;
    //float salaryPerMonthInEuros = salaryPerMonthInShekels * EUROS_PER_SHEKEL; הוספנו שורה שממירה את המשכורת השעתית משקל ליורו
    //float annualSalary = salaryPerMonthInEuros * 12; משנים את המשכורת משקל ליורו
    
    //printf("Annual Salary in Euros: %.2f\n", annualSalary);
    
    //return 0;
//}