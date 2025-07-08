-- Part 7: DML (Data Manipulation Language)
INSERT INTO courses (course_id, course_name, course_duration) VALUES
(101, 'Mathematics', '3 Months'),
(102, 'Science', '4 Months'),
(103, 'English', '2 Months');

UPDATE courses SET course_duration = '6 Months' WHERE course_id = 102;
DELETE FROM courses WHERE course_id = 103;