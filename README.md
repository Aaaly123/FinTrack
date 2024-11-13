# **FinTrack: Mastering Personal Finance**

**FinTrack** is a personal finance management system designed using Object-Oriented Programming (OOP) principles in C++. It helps individuals track their salary, expenses, savings, and financial goals while providing real-time insights into their financial health. With an easy-to-use, compact structure, FinTrack is a solid choice for those looking to stay on top of their finances with a simple, maintainable system.

## **Features**

- **Transaction Management**:  
  Track your expenses and savings, each represented by specialized transaction types, with real-time updates and summaries.

- **Financial Goal Tracking**:  
  Set, manage, and track financial goals such as saving for a car or a home down payment. Monitor your progress towards achieving these goals.

- **Comprehensive Financial Reports**:  
  Generate detailed reports summarizing salary, expenses, savings, and goals for a complete overview of your financial health.

- **Modular Design**:  
  Despite being in a single file, the system's design follows modular principles that allow for easy scalability and future enhancements.

- **Real-Time Progress Updates**:  
  View real-time updates on savings and expenses, as well as progress towards your financial goals.

## **Technologies Used**

- **C++**  
  The entire system is implemented in C++, making use of Object-Oriented Programming (OOP) concepts such as inheritance, polymorphism, abstraction, and encapsulation.

- **Object-Oriented Principles**  
  The project applies core OOP principles to create a maintainable and extensible structure for managing personal finances.

## **How It Works**

1. **Set Up Your Salary**:  
   Create a `Salary` object to input your monthly income.

2. **Add Financial Goals**:  
   Define goals like saving for a car or a house using the `Goal` class.

3. **Track Your Expenses**:  
   Create `Expense` objects for each type of spending (e.g., rent, groceries).

4. **Manage Your Savings**:  
   Track your savings using the `Savings` class for different funds (e.g., emergency fund, vacation fund).

5. **Generate Reports**:  
   Use the `Report` class to generate a comprehensive overview of your finances, including salary, expenses, savings, and goals.

6. **Monitor Progress**:  
   Apply changes to transactions and monitor real-time progress towards your financial goals.

## **Example Usage**

```cpp
// Create salary object
Salary mySalary(5000);

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
```

## **Project Structure**

```plaintext
.
├── FinTrack.cpp
└── README.md
```

### **FinTrack.cpp**
This file contains all the necessary code, including class definitions, methods, and the `main` function that ties everything together.

## **Installation**

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/FinTrack.git
   ```

2. Navigate to the project directory:
   ```bash
   cd FinTrack
   ```

3. Compile the code using a C++ compiler:
   ```bash
   g++ -o FinTrack FinTrack.cpp
   ```

4. Run the application:
   ```bash
   ./FinTrack
   ```

## **Contribution**

If you'd like to contribute, you are welcome to fork the repository, create a new branch, and submit a pull request with your changes. Contributions can include:

- Bug fixes
- Feature enhancements
- Documentation improvements

## **License**

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.

---

By maintaining a clean and easy-to-understand structure, **FinTrack** allows users to manage their finances effectively while showcasing practical Object-Oriented Programming principles in a single `.cpp` file. Whether you're saving for a specific goal or simply tracking your expenses, this system provides a straightforward and efficient approach to financial management.

