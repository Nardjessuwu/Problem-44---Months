# 📅 Months of the Year

A simple C++ program that uses an `enum` to represent the months of the year.

The program displays a menu containing all 12 months, asks the user to enter a month number, and then prints the corresponding month name.

## 🛠️ Concepts Used

- `enum`
- `switch` statements
- Functions
- User input with `cin`
- Output with `cout`
- Type casting
- `return` statements

## ⚙️ How It Works

1. An `enum` called `enMonths` is created to represent the 12 months.
2. `ShowMenue()` displays the months and their corresponding numbers.
3. `ReadMonth()` asks the user to enter a month number.
4. `PrintMonth()` uses a `switch` statement to convert the selected number into the month name.
5. The result is displayed in the console.

## 💻 Example

```text
------------------------------------------
                  Months
------------------------------------------
1 : January
2 : February
3 : March
4 : April
5 : May
6 : June
7 : July
8 : August
9 : September
10 : October
11 : November
12 : December

Enter Number Of Month:
8

This Month Is: August
