-- Part 14: SQL View
CREATE VIEW emp_dept_view AS
SELECT e.emp_id, e.emp_name, d.dept_name
FROM employees e
JOIN departments d ON e.dept_id = d.dept_id;

CREATE OR REPLACE VIEW emp_dept_view AS
SELECT e.emp_id, e.emp_name, d.dept_name
FROM employees e
JOIN departments d ON e.dept_id = d.dept_id
WHERE e.salary >= 50000;