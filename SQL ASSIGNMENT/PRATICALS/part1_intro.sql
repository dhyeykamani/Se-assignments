-- Part 1: Introduction to SQL
CREATE DATABASE school_db;
USE school_db;

CREATE TABLE students (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(50),
    age INT,
    class VARCHAR(20),
    address VARCHAR(100)
);

INSERT INTO students VALUES 
(1, 'Amit', 12, '6A', 'Surat'),
(2, 'Neha', 11, '5B', 'Rajkot'),
(3, 'Rahul', 13, '7C', 'Vadodara'),
(4, 'Priya', 10, '5A', 'Ahmedabad'),
(5, 'Vikas', 12, '6B', 'Bhavnagar');

SELECT * FROM students;