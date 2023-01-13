-- DQL(DATA query language)

use classicmodels;

select * from customers;

select customerNumber,customerName,phone from customers;

select customerNumber,customerName,city from customers where city="Paris";

select * from customers where city="NYC" and creditLimit>70000;

select * from customers where city="Paris" or creditLimit>50000;

-- LIKE
-- _single character   % zero,one or more character

-- "_p_q%"
-- "p%"

select * from customers where customerName like "%lt%";
select * from customers where customerName like "%or%";

-- order by

select * from customers order by customerName;
select * from customers order by city;
select * from customers order by city desc;

-- aggregate functions min max avg sum count

select sum(amount) from payments where customerNumber=103;
select max(amount) from payments;
select min(amount) from payments;
select avg(amount) from payments;
select cocustomersunt(customerNumber) from customers where city="NYC";

select * from customers where city="NYC";
-- 13-Jan-2023

select sum(amount) from payments where customerNumber=112;
select sum(amount) from payments where customerNumber=114;
select customerNumber,sum(amount) from payments group by customernumber;
select customerNumber ,max(amount) from payments group by customernumber;

select customerNumber,sum(amount) from payments group by customerNumber having sum(amount)>50000;
select customerNumber,sum(amount) from payments group by customerNumber having sum(amount)<50000;
--  in limit first values is starting point and next value is number of records
select * from customers limit 10;
select * from customers limit 11,10;
select * from customers limit 21,30;

-- TCL(TRANSACTION CONTROL LANGUAGE)
-- rollback; queries effect will be reversed

use college;

start transaction;
savepoint a;
insert into course(course_name,due,studentfees) values("MCA",588,487500);
insert into course(course_name,due,studentfees) values("BSCIT",588,487500);
insert into course(course_name,due,studentfees) values("MSCIT",588,487500);
savepoint b;
insert into course(course_name,due,studentfees) values("CA",588,487500);
insert into course(course_name,due,studentfees) values("MBBS",588,487500);
insert into course(course_name,due,studentfees) values("TC",588,487500);

rollback to b;

commit;

DCL(DATA CONTROL LANGUAGE)

grant
revoke
