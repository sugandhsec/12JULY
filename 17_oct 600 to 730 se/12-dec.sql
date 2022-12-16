-- DDL
CREATE DATABASE taruncollege;
USE taruncollege;
drop database taruncollege;

create table tablename(
filed1 datatype,
field2 datatype,
field3 datataype,
);

create table student(
studentID int auto_increment,
student_name varchar(25),
age int,
mobile_number varchar(10),
courseid int,
primary key(studentID),
foreign key(courseid) references course(courseid)
);
drop table student;
create table course(
courseid int,
course_name varchar(20),
fees int,
duration int,
primary key (courseid) 
);

-- create table

create table Employee(
empid int,
emploee_name varchar(50),
department varchar(25),
contcat_no	varchar(10),
emailid varchar(25),
empheadid int,
primary key(empid),
foreign key(department) references empdept(deptid),
foreign key(empheadid) references Employee(empid)
);

create table Empdept(
deptid int,
dept_name varchar(20),
dept_off varchar(10),
dept_head int,
primary key(deptid),
foreign key(dept_head) references employee(empid)
);