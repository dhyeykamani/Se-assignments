-- Part 17: PL/SQL Control Structures
DECLARE
    dept_name VARCHAR2(50);
BEGIN
    SELECT dept_name INTO dept_name FROM departments WHERE dept_id = 1;
    
    IF dept_name = 'HR' THEN
        DBMS_OUTPUT.PUT_LINE('Employee belongs to HR Department');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Employee belongs to another department');
    END IF;
END;

DECLARE
    emp_name employees.emp_name%TYPE;
    CURSOR emp_cursor IS SELECT emp_name FROM employees;
BEGIN
    FOR emp_rec IN emp_cursor LOOP
        DBMS_OUTPUT.PUT_LINE(emp_rec.emp_name);
    END LOOP;
END;