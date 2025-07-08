-- Part 13: SQL Stored Procedure
DELIMITER //
CREATE PROCEDURE GetEmployeesByDept(IN dept INT)
BEGIN
    SELECT * FROM employees WHERE dept_id = dept;
END //
DELIMITER ;

DELIMITER //
CREATE PROCEDURE GetCourseDetails(IN cid INT)
BEGIN
    SELECT * FROM courses WHERE course_id = cid;
END //
DELIMITER ;