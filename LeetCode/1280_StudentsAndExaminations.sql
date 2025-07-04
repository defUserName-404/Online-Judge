-- SQL SCHEMA
-- Create table If Not Exists Students (student_id int, student_name varchar(20))
-- Create table If Not Exists Subjects (subject_name varchar(20))
-- Create table If Not Exists Examinations (student_id int, subject_name varchar(20))
--     Truncate table Students
--     insert into Students (student_id, student_name) values ('1', 'Alice')
--     insert into Students (student_id, student_name) values ('2', 'Bob')
--     insert into Students (student_id, student_name) values ('13', 'John')
--     insert into Students (student_id, student_name) values ('6', 'Alex')
--     Truncate table Subjects
--     insert into Subjects (subject_name) values ('Math')
--     insert into Subjects (subject_name) values ('Physics')
--     insert into Subjects (subject_name) values ('Programming')
--     Truncate table Examinations
--     insert into Examinations (student_id, subject_name) values ('1', 'Math')
--     insert into Examinations (student_id, subject_name) values ('1', 'Physics')
--     insert into Examinations (student_id, subject_name) values ('1', 'Programming')
--     insert into Examinations (student_id, subject_name) values ('2', 'Programming')
--     insert into Examinations (student_id, subject_name) values ('1', 'Physics')
--     insert into Examinations (student_id, subject_name) values ('1', 'Math')
--     insert into Examinations (student_id, subject_name) values ('13', 'Math')
--     insert into Examinations (student_id, subject_name) values ('13', 'Programming')
--     insert into Examinations (student_id, subject_name) values ('13', 'Physics')
--     insert into Examinations (student_id, subject_name) values ('2', 'Math')
--     insert into Examinations (student_id, subject_name) values ('1', 'Math')
SELECT students.student_id, students.student_name, subjects.subject_name, COUNT(exams.student_id) AS attended_exams
FROM Students AS students
         CROSS JOIN Subjects AS subjects
         LEFT JOIN Examinations exams
                   ON students.student_id = exams.student_id
                       AND subjects.subject_name = exams.subject_name
GROUP BY students.student_id, students.student_name, subjects.subject_name
ORDER BY students.student_id, subjects.subject_name;

