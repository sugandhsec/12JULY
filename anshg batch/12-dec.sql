select * from student;
select student_name,student_city from student;
select distinct(student_name),student_city from  student;
select student_name,student_city from student;
select student_name,student_mobile from student;
select student_name,student_city,student_blood_group from student where student_blood_group="o+" or student_gender="female";
select * from student where student_blood_group="o+" and student_gender="female";
select student_name,student_city,student_blood_group from student where student_blood_group="o+" or student_gender="female";
use
-- order by
select * from student order by student_name
select studentID,student_name,student_city,student_gender,courseID from student order by courseID
select studentID,student_name,student_city,student_gender,courseID from student order by courseID desc,studentID desc
select studentID,student_name,student_city,student_gender,courseID from student order by courseID,student_name

-- aggregate functions min,max,count,avg,sum

select min(totalfees) from course 
select min(totalfees),coursename from course 