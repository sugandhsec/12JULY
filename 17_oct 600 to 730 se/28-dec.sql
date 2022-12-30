use mycoll;

start transaction;
savepoint a;
insert into course(course_name,course_duration,fees) values("GI",6,789000);
insert into course(course_name,course_duration,fees) values("fx",6,789000);
insert into course(course_name,course_duration,fees) values("nx",6,789000);
savepoint b;
insert into course(course_name,course_duration,fees) values("op",6,789000);
insert into course(course_name,course_duration,fees) values("wow",6,789000);
insert into course(course_name,course_duration,fees) values("tr",6,789000);
update course set course_name="Mscit" where courseID=8;
delete from course where courseID=9;

rollback to b;
commit;

-- savepoint



insert 
update 
delete

before
after