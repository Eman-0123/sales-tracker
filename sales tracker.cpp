 #include <iostream>
 #include <iomanip>
 using namespace std;
 const int MAX_DAYS = 31;
 void inputSales(float sales[], int days) {
 for (int i = 0; i < days; i++) {
 cout << "Enter sales for Day " << i + 1 << ": $";
 cin >> sales[i];
 }
 }
 void displaySales(float sales[], int days) {
 cout << "\n--- Sales Data ---\n";
 for (int i = 0; i < days; i++) {
 cout << "Day " << setw(2) << i + 1 << ": $" << fixed << setprecision(2) << sales[i] << endl;
 }
 }
 float totalSales(float sales[], int days) {
 float total = 0;
 for (int i = 0; i < days; i++)
 total += sales[i];
 return total;
}
 void displayBarGraph(float sales[], int days) {
 cout << "\n--- Sales Bar Graph (Each * = $100) ---\n";
 for (int i = 0; i < days; i++) {
 cout << "Day " << setw(2) << i + 1 << ": ";
 int stars = static_cast<int>(sales[i] / 100);
 for (int j = 0; j < stars; j++)
 cout << "*";
 cout << " ($" << fixed << setprecision(2) << sales[i] << ")" << endl;
 }
 }
 int main() {
 float sales[MAX_DAYS];
 int choice, days;
 cout << "=== Sales Tracker ===\n";
 cout << "Enter number of days to track sales: ";
 cin >> days;
 if (days <= 0 || days > MAX_DAYS) {
 cout << "Invalid number of days!\n";
 return 1;
 }
 inputSales(sales, days);
do {
 cout << "\n===== MENU =====\n";
 cout << "1. Display Sales\n";
 cout << "2. Display Total & Average\n";
 cout << "3. Display Sales Bar Graph\n";
 cout << "4. Exit\n";
 cout << "Choose an option: ";
 cin >> choice;
 switch (choice) {
 case 1:
 displaySales(sales, days);
 break;
 case 2:
 cout << "\nTotal Sales: $" << totalSales(sales, days);
 cout << "\nAverage Sales: $" << totalSales(sales, days) / days << endl;
 break;
 case 3:
 displayBarGraph(sales, days);
 break;
 case 4:
 cout << "Exiting Sales Tracker...\n";
 break;
 default:
 cout << "Invalid choice! Try again.\n";
 }
} while (choice != 4);
 return 0;
 }
 /*Output
 === Sales Tracker ===
 Enter number of days to track sales: 5
 Enter sales for Day 1: $234
 Enter sales for Day 2: $456
 Enter sales for Day 3: $54
 Enter sales for Day 4: $356
 Enter sales for Day 5: $789
 ===== MENU =====
 1. Display Sales
 2. Display Total & Average
 3. Display Sales Bar Graph
 4. Exit
 Choose an option: 2
 Total Sales: $1889
 Average Sales: $377.8
 ===== MENU =====
 1. Display Sales
 2. Display Total & Average
 3. Display Sales Bar Graph
4. Exit
 Choose an option: 3--- Sales Bar Graph (Each * = $100) --
Day  1: ** ($234.00)
 Day  2: **** ($456.00)
 Day  3:  ($54.00)
 Day  4: *** ($356.00)
 Day  5: ******* ($789.00)
 ===== MENU =====
 1. Display Sales
 2. Display Total & Average
 3. Display Sales Bar Graph
 4. Exit
 Choose an option: 4
 Exiting Sales Tracker..*/
