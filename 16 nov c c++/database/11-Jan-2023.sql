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
select count(customerNumber) from customers where city="NYC";

select * from customers where city="NYC";
