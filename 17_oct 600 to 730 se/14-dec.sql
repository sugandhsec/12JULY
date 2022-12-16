-- drop table

drop table student;
truncate table student;
-- alter 

-- add column
alter table student add column email varchar(20);

-- drop column
alter table student drop column email;

-- rename column
alter table student change column age student_age int;


-- DML(DATA MANIPULATION LANGUAGE)

-- insert data
insert into student(student_name,mobile_number,courseID) values("rahul",7845123698,1);

insert into student values (4,"kailash",25,4125639874,1);-- without miss entry in any field not accepted

-- update 
update student set student_name="Ram" where student_age =45;
-- delete
delete from student where studentID=98;