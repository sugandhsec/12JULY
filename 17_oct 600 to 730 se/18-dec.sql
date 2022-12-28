insert into student values(74,"Tarun",28,"9856321478",2);

insert into student(student_name,courseID) values("Ankit",1);

-- update
-- update tablename set columnname="value" where condition;

update student set student_name="Rahul" where student_name="Ankit";

-- delete
-- delete from tablename where condition; 

delete from student where studentID=72;