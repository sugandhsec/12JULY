create table employee(
salary int,
joining_date datetime,
entry_time timestamp,
ti float(2,2)
)
drop table employee

insert into employee(salary,joining_date) values(25000,'22-12-16 12:00:00')
insert into employee(salary,joining_date,ti) values(25000,str_to_date('22-DECEMBER-23 12:05:00 AM','%d-%M-%y %h:%i:%s %p'),.99)
,'DD-MON-YY %h:%m:%s %p')
,'DD-MON-YY %h:%m:%s %p')
,'DD-MON-YY %h:%m:%s %p')

DQL(DATA QUERY LANGUAGE)

use mycoll;

-- select columnname from tablename where condition
select * from course;
select course_name,course_duration,courseID from course;
select * from student where age=35;
select student_name from student where age=35;

use mycollage;

select * from student order by courseID ;
select * from student order by courseID desc;
select * from student where student_gender='male' order by courseID desc;
select * from student where student_gender='male' order by courseID desc,studentID desc;

-- like % _
-- A%
-- A__

select * from student where student_name like 'j%';
select * from student where student_name like '_e%';
select distinct(student_city) from student
-- group by 
-- aggregate functions
-- having



