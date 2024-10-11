#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <math.h>

// Constructor for MainWindow class, initializes the UI components
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // Set up the user interface elements
}

// Destructor for MainWindow class, cleans up the UI components
MainWindow::~MainWindow()
{
    delete ui;
}

// Global variables used to store the current input, previous number, operator, and result
QString current_number = "";
double previous_number = 0;
QString pOperator = "";
double result = 0;

// Function to append '1' when button is clicked
void MainWindow::on_pushButton_clicked()
{
    current_number += "1";  // Append '1' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '2' when button is clicked
void MainWindow::on_pushButton_3_clicked()
{
    current_number += "2";  // Append '2' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '3' when button is clicked
void MainWindow::on_pushButton_4_clicked()
{
    current_number += "3";  // Append '3' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '4' when button is clicked
void MainWindow::on_pushButton_2_clicked()
{
    current_number += "4";  // Append '4' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '5' when button is clicked
void MainWindow::on_pushButton_6_clicked()
{
    current_number += "5";  // Append '5' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '6' when button is clicked
void MainWindow::on_pushButton_5_clicked()
{
    current_number += "6";  // Append '6' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '7' when button is clicked
void MainWindow::on_pushButton_8_clicked()
{
    current_number += "7";  // Append '7' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '8' when button is clicked
void MainWindow::on_pushButton_7_clicked()
{
    current_number += "8";  // Append '8' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '9' when button is clicked
void MainWindow::on_pushButton_10_clicked()
{
    current_number += "9";  // Append '9' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to append '0' when button is clicked
void MainWindow::on_pushButton_9_clicked()
{
    current_number += "0";  // Append '0' to the current number
    ui->lineEdit->setText(current_number);  // Update the display with the current number
}

// Function to handle addition operation
void MainWindow::on_addBtn_clicked()
{
    pOperator = "+";  // Set the operator to '+'
    if (current_number != "") {
        previous_number = current_number.toDouble();  // Store the current number as previous number
        current_number = "";  // Clear the current number for the next input
    }
}

// Function to handle equals operation and calculate the result
void MainWindow::on_pushButton_11_clicked()
{
    // Perform calculation based on the operator selected
    if (pOperator == "+") {
        result = previous_number + current_number.toDouble();  // Add numbers
    }
    if (pOperator == "-") {
        result = previous_number - current_number.toDouble();  // Subtract numbers
    }
    if (pOperator == "*") {
        result = previous_number * current_number.toDouble();  // Multiply numbers
    }
    if (pOperator == "/") {
        result = previous_number / current_number.toDouble();  // Divide numbers
    }
    if (pOperator == "^") {
        result = pow(previous_number, current_number.toDouble());  // Exponentiation
    }
    if (pOperator == "root") {
        double exponent = 1.0 / current_number.toDouble();  // Calculate nth root
        result = pow(previous_number, exponent);
    }

    // Display the result and update current number with the result for further calculations
    ui->lineEdit->setText(QString::number(result));
    current_number = QString::number(result);
}

// Function to clear the input
void MainWindow::on_pushButton_12_clicked()
{
    current_number = "";  // Clear the current number
    ui->lineEdit->setText(current_number);  // Update the display to show an empty field
}

// Function to handle subtraction operation
void MainWindow::on_subBtn_clicked()
{
    pOperator = "-";  // Set the operator to '-'
    if (current_number != "") {
        previous_number = current_number.toDouble();  // Store the current number
        current_number = "";  // Clear the current number for the next input
    }
}

// Function to handle multiplication operation
void MainWindow::on_multBtn_clicked()
{
    pOperator = "*";  // Set the operator to '*'
    if (current_number != "") {
        previous_number = current_number.toDouble();  // Store the current number
        current_number = "";  // Clear the current number for the next input
    }
}

// Function to handle division operation
void MainWindow::on_divBtn_clicked()
{
    pOperator = "/";  // Set the operator to '/'
    if (current_number != "") {
        previous_number = current_number.toDouble();  // Store the current number
        current_number = "";  // Clear the current number for the next input
    }
}

// Function to handle exponentiation (power) operation
void MainWindow::on_pushButton_13_clicked()
{
    pOperator = "^";  // Set the operator to '^'
    if (current_number != "") {
        previous_number = current_number.toDouble();  // Store the current number
        current_number = "";  // Clear the current number for the next input
    }
}

// Function to handle root operation (nth root)
void MainWindow::on_pushButton_14_clicked()
{
    pOperator = "root";  // Set the operator to 'root'
    if (current_number != "") {
        previous_number = current_number.toDouble();  // Store the current number
        current_number = "";  // Clear the current number for the next input
    }
}

// Function to append the constant Pi to the current input
void MainWindow::on_pushButton_15_clicked()
{
    current_number += QString::number(M_PI);  // Append the value of Pi
    ui->lineEdit->setText(current_number);  // Update the display with the new number
}

// Function to handle decimal point input
void MainWindow::on_pushButton_16_clicked()
{
    current_number += ".";  // Append a decimal point
    ui->lineEdit->setText(current_number);  // Update the display with the new number
}
