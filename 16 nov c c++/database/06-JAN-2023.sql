-- DDL(DATA DEFINITION LANGUAGE)

-- CREATING DATABASE
CREATE DATABASE UNIVERSITY;

-- DELETING DATABASE
DROP database UNIVERSITY;

-- USING DATABASE
USE UNIVERSITY;

-- CREATING TABLE
CREATE TABLE COURSE
(
COURSEID INT auto_increment,
COURSE_NAME VARCHAR(30),
FEES INT,
DURATION INT,
PRIMARY KEY (COURSEID)
);

CREATE TABLE STUDENT
(
STUDENT_ID INT auto_increment,
STUDENT_NAME VARCHAR(20),
AGE INT,
MOBILE INT,
COURSE_ID INT,
PRIMARY KEY(STUDENT_ID),
FOREIGN KEY(COURSE_ID) REFERENCES COURSE(COURSEID)
);

create table something
(
someid int primary key auto_increment,
somedate date,
sometime time,
sometimestamp timestamp,
somedatetime datetime
);


DROP TABLE STUDENT;
DROP TABLE COURSE;

-- alter

-- add column
alter table course add column description varchar(200); 

alter table course add column time varchar(10) after fees;
 
alter table course add column books varchar(50) first;

-- delete column

alter table course drop column books;
alter table course drop column cfees;
alter table course drop column time;
alter table course drop column description;
-- change datatype
alter table course modify column fees int;
alter table course modify column description int;

-- rename column;
alter table course change column fees cfees int ;
-- alter table course rename cfees to course_fees;

-- DML(data manipulation language)

-- insert
insert into course(COURSEID,COURSE_NAME,DURATION) values(1,"BCA",3);

insert into course values(2,"BBA",3);

insert into course(COURSE_NAME,DURATION) values("BSC",4);

insert into course(COURSE_NAME) values ("MSC");

insert into student values(1,"Rahul",48,9856321475,4);
insert into student(STUDENT_NAME,AGE,MOBILE,COURSE_ID) values("Varun",25,654654,3);
-- update
-- update table set colunmane=value where condition
update course set course_name="MBA" where courseid=2;

-- delete
-- delete from table where condition;
delete from course where courseid=1;
delete from course where course_name="MSC";







