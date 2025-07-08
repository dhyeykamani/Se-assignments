-- Part 19: Rollback and Commit Savepoint
START TRANSACTION;
SAVEPOINT sp1;
INSERT INTO courses VALUES (201, 'Music', '2 Months');
ROLLBACK TO sp1;

START TRANSACTION;
SAVEPOINT sp2;
INSERT INTO courses VALUES (202, 'Art', '3 Months');
COMMIT;
SAVEPOINT sp3;
INSERT INTO courses VALUES (203, 'Dance', '1 Month');
ROLLBACK TO sp3;