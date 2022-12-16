select * from student;
select student_name,student_city from student;
select distinct(student_name),student_city from  student;
select student_name,student_city from student;
select student_name,student_mobile from student;
select student_name,student_city,student_blood_group from student where student_blood_group="o+" or student_gender="female";
select * from student where student_blood_group="o+" and student_gender="female";
select student_name,student_city,student_blood_group from student where student_blood_group="o+" or student_gender="female";
-- order by
select * from student order by student_name
select studentID,student_name,student_city,student_gender,courseID from student order by courseID
select studentID,student_name,student_city,student_gender,courseID from student order by courseID desc,studentID desc
select studentID,student_name,student_city,student_gender,courseID from student order by courseID,student_name

-- aggregate functions min,max,count,avg,sum

select min(totalfees) from course 
select max(totalfees) from course 
select avg(totalfees) from course where totalfees>50000
select avg(totalfees) from course 
select sum(totalfees) from course 
select count(totalfees) from course where totalfees>50000
select sum(coursename) from course -- not throws an error
select min(totalfees),coursename from course 

-- group by clause
select count(courseID) from course where totalyear=3
select count(courseID) from course where totalyear=4
select count(courseID) from course where totalyear=5

select coursename,count(courseID) from course group by totalyear
select totalyear,count(courseID) from course group by totalyear