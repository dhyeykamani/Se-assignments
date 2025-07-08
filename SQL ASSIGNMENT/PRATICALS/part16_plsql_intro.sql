-- Part 16: Introduction to PL/SQL
DECLARE
    emp_count INT;
BEGIN
    SELECT COUNT(*) INTO emp_count FROM employees;
    DBMS_OUTPUT.PUT_LINE('Total Employees: ' || emp_count);
END;

DECLARE
    total_sales DECIMAL(10,2);
BEGIN
    SELECT SUM(order_amount) INTO total_sales FROM orders;
    DBMS_OUTPUT.PUT_LINE('Total Sales: ' || total_sales);
END;