-- Part 18: SQL Cursors
DECLARE
    emp_id employees.emp_id%TYPE;
    emp_name employees.emp_name%TYPE;
    CURSOR emp_cursor IS SELECT emp_id, emp_name FROM employees;
BEGIN
    OPEN emp_cursor;
    LOOP
        FETCH emp_cursor INTO emp_id, emp_name;
        EXIT WHEN emp_cursor%NOTFOUND;
        DBMS_OUTPUT.PUT_LINE(emp_id || ' - ' || emp_name);
    END LOOP;
    CLOSE emp_cursor;
END;

DECLARE
    c_id courses.course_id%TYPE;
    c_name courses.course_name%TYPE;
    CURSOR course_cursor IS SELECT course_id, course_name FROM courses;
BEGIN
    FOR cr IN course_cursor LOOP
        DBMS_OUTPUT.PUT_LINE(cr.course_id || ': ' || cr.course_name);
    END LOOP;
END;