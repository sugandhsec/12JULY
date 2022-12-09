-- create database college;
-- use college;
-- drop database college;
/*
comment are of two types
single line --
multiline /* */
create table purpose(
courseID int auto_increment,
course_name varchar(50),
fees int ,
primary key(courseID)
)

-- drop table course;
-- rename
-- column add
-- column delete
-- column datatyep change
-- alter table course add column due int after course_name;
-- alter table course modify due varchar(50) ;
-- alter table course rename column due to duration; 
-- alter table course change column fees studentfees varchar(10);
-- alter table course drop column due;
-- Drop And Truncate
drop table purpose;
truncate table purpose;
create table student(
studentID int auto_increment,
student_name varchar(50),
email varchar(20),
address varchar(200),
city varchar(20) ,
gender varchar(10),
mobile int ,
blood_group varchar(3),
courseID int,
primary key(studentID),
foreign key(courseID) references course(courseID)
)