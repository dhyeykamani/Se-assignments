-- Part 10: Transaction Control Language
START TRANSACTION;
INSERT INTO courses (course_id, course_name, course_duration) VALUES (104, 'History', '2 Months');
COMMIT;

START TRANSACTION;
INSERT INTO courses (course_id, course_name, course_duration) VALUES (105, 'Geography', '3 Months');
ROLLBACK;

START TRANSACTION;
SAVEPOINT sp1;
UPDATE courses SET course_duration = '5 Months' WHERE course_id = 101;
ROLLBACK TO sp1;
COMMIT;