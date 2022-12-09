-- DML COMMANDS
	insert 
    update
	delete

-- insert
-- insert into course(coulnname1,columnname2,columnname3) values(value1,value2,value3);
-- insert into course values()

insert into course(course_name,studentfees) values("bca","25000");
insert into course values (2,"mca",89,"152465");

-- delete
delete from course where courseID=4;
delete from course;

-- update
update course set course_name="BE" where courseId=6 or studentfees>45000;

-- DQL(DATA QUERY LANGUAGE)
select * from student;
select student_name,student_city from student;
select distinct(student_name),student_city from  student;
select student_name,student_city from student;
select student_name,student_mobile from student;
select student_name,student_city,student_blood_group from student where student_blood_group="o+" or student_gender="female";