-- Part 12: SQL GROUP BY
SELECT dept_id, COUNT(*) AS employee_count
FROM employees
GROUP BY dept_id;

ALTER TABLE employees ADD salary DECIMAL(10,2);

SELECT dept_id, AVG(salary) AS average_salary
FROM employees
GROUP BY dept_id;