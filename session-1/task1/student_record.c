/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(Student student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    float total = student.marks[0] + student.marks[1] + student.marks[2];
    total = total /3;
    
    return total; // Placeholder return value
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(Student student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    printf("Student name : %s\n",student.name);
    printf("Student ID : %d\n",student.id);
    printf("Module One : %.2f\n",student.marks[0]);
    printf("Module Two : %.2f\n",student.marks[1]);
    printf("Module Three : %.2f\n",student.marks[2]);
    printf("Average mark : %.2f\n",calculate_average(student));
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    
    Student a_student = {
    .id = 12345 ,
    .marks[0] =75.0,
    .marks[1] =68.5,
    .marks[2] =81.0,
    .name = "John Smith"};
    
    // TODO: display the student data and average mark
    display_student(a_student);
    calculate_average(a_student);
    
    return 0;
}