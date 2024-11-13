#include <iostream>
#include <string>

using namespace std;

// Base Class: Transaction
class Transaction
{
protected:
    float amount;
    string description;
    string date;

public:
    // Constructor
    Transaction(float amt, string desc, string d) : amount(amt), description(desc), date(d) {}

    // Getters
    float getAmount() const { return amount; }
    string getDescription() const { return description; }
    string getDate() const { return date; }

    // Setters
    void setAmount(float amt) { amount = amt; }
    void setDescription(string desc) { description = desc; }
    void setDate(string d) { date = d; }

    // Pure virtual function (polymorphism example)
    virtual void applyChanges() = 0; // Derived classes must implement this method
};

// Derived Class: Expense
class Expense : public Transaction
{
public:
    // Constructor
    Expense(float amt, string desc, string d) : Transaction(amt, desc, d) {}

    // Implement the applyChanges method
    void applyChanges() override
    {
        cout << "Expense of " << amount << " on " << date << " for " << description << endl;
    }
};

// Derived Class: Savings
class Savings : public Transaction
{
private:
    float savingsGoal;

public:
    // Constructor
    Savings(float amt, string desc, string d, float goal) : Transaction(amt, desc, d), savingsGoal(goal) {}

    // Implement the applyChanges method
    void applyChanges() override
    {
        cout << "Saved " << amount << " for " << description << ". Savings goal is: " << savingsGoal << endl;
    }

    // Getter and setter for savings goal
    float getSavingsGoal() const { return savingsGoal; }
    void setSavingsGoal(float goal) { savingsGoal = goal; }
};

// Class to manage salary
class Salary
{
private:
    float monthlySalary;

public:
    // Constructor
    Salary(float salary) : monthlySalary(salary) {}

    // Getter and setter for salary
    float getSalary() const { return monthlySalary; }
    void setSalary(float salary) { monthlySalary = salary; }
};

// Class to define financial goals
class Goal
{
private:
    string goalName;
    float targetAmount;
    float currentAmount;

public:
    // Constructor
    Goal(string name, float target) : goalName(name), targetAmount(target), currentAmount(0) {}

    // Method to add contributions to the goal
    void addContribution(float amount) { currentAmount += amount; }

    // Method to get the remaining amount for the goal
    float getRemainingAmount() const { return targetAmount - currentAmount; }

    // Method to display goal status
    void displayGoalStatus() const
    {
        cout << "Goal: " << goalName << ", Target: " << targetAmount
             << ", Saved so far: " << currentAmount << ", Remaining: " << getRemainingAmount() << endl;
    }
};

// Class to generate financial reports
class Report
{
public:
    // Method to generate a financial report
    void generateReport(Salary salary, Expense rentExpense, Expense groceriesExpense, Savings emergencyFund, Savings vacationFund, Goal carGoal, Goal houseGoal)
    {
        float totalExpenses = rentExpense.getAmount() + groceriesExpense.getAmount();
        float totalSavings = emergencyFund.getAmount() + vacationFund.getAmount();

        cout << "Report Summary:" << endl;
        cout << "Salary: " << salary.getSalary() << endl;
        cout << "Total Expenses: " << totalExpenses << endl;
        cout << "Total Savings: " << totalSavings << endl;
        cout << "Goals:" << endl;
        carGoal.displayGoalStatus();
        houseGoal.displayGoalStatus();
    }
};

// Main function to drive the program
int main()
{
    // Create salary object
    Salary mySalary(5000); // Assume a salary of 5000

    // Create goal objects
    Goal carGoal("Buy Car", 15000);
    Goal houseGoal("House Downpayment", 50000);

    // Create expense objects
    Expense rentExpense(1200, "Monthly Rent", "2024-09-01");
    Expense groceriesExpense(300, "Groceries", "2024-09-05");

    // Create savings objects
    Savings emergencyFund(500, "Emergency Fund", "2024-09-10", 2000);
    Savings vacationFund(200, "Vacation Fund", "2024-09-12", 3000);

    // Generate the financial report
    Report financialReport;
    financialReport.generateReport(mySalary, rentExpense, groceriesExpense, emergencyFund, vacationFund, carGoal, houseGoal);

    // Apply changes (expenses and savings)
    rentExpense.applyChanges();
    groceriesExpense.applyChanges();
    emergencyFund.applyChanges();
    vacationFund.applyChanges();

    return 0;
}
