-- Part 9: DCL (Data Control Language)
CREATE USER 'user1'@'localhost' IDENTIFIED BY 'password1';
CREATE USER 'user2'@'localhost' IDENTIFIED BY 'password2';

GRANT SELECT ON university_db.courses TO 'user1'@'localhost';
REVOKE INSERT ON university_db.courses FROM 'user1'@'localhost';
GRANT INSERT ON university_db.courses TO 'user2'@'localhost';