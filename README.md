# 📅 Simple Calendar in C++

This is a simple **C++ program** that prints a calendar for any given **month and year**.  
It uses `<time.h>` and basic date functions to calculate the number of days in each month and the starting day of the week.

---

## 🚀 Features
- Check for **leap years**.
- Display the **calendar of any month and year**.
- Automatically adjusts for correct **day alignment**.
- Simple and beginner-friendly code.

---

## 📂 Code Overview
- `isLeapYear(year)` → Checks if a given year is a leap year.
- `daysInMonth(year, month)` → Returns the number of days in the given month.
- Uses `mktime()` to determine the first day of the month.
- Prints the calendar in a formatted structure.

---

## 🖥️ How to Run
1. Clone this repository or copy the code.
2. Save the program as `calendar.cpp`.
3. Compile using:
   ```bash
   g++ calendar.cpp -o calendar
