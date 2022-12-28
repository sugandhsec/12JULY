use mycoll;
-- min ,max,sum,count,avg
select count(studentID) from student where city="vapi";
select count(studentID) from student where city="rajkot";
select city,count(studentID) from student group by city;
-- select max(salary) from employee group by department order by salary;

-- joins
-- select student.*,course.*
select student.studentID,student.student_name,student.city,course.course_name,course.fees from
student inner join course on student.courseID=course.courseID;

select student.*,course.* from student inner join course on student.courseID=course.courseID where student.age>30;
select student.*,course.* from student inner join course on student.courseID=course.courseID;
select student.*,course.* from student left join course on student.courseID=course.courseID;
select student.*,course.* from student right join course on student.courseID=course.courseID;
select student.*,course.* from student cross join course on student.courseID=course.courseID;
select student.*,course.* from student cross join course ;
