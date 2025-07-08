-- Part 15: SQL Triggers
CREATE TABLE employee_log (
    log_id INT AUTO_INCREMENT PRIMARY KEY,
    emp_id INT,
    action_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

DELIMITER //
CREATE TRIGGER after_emp_insert
AFTER INSERT ON employees
FOR EACH ROW
BEGIN
    INSERT INTO employee_log (emp_id) VALUES (NEW.emp_id);
END //
DELIMITER ;

ALTER TABLE employees ADD last_modified TIMESTAMP;

DELIMITER //
CREATE TRIGGER before_emp_update
BEFORE UPDATE ON employees
FOR EACH ROW
BEGIN
    SET NEW.last_modified = CURRENT_TIMESTAMP;
END //
DELIMITER ;