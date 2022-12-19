-- select student.*,course.* from student inner join course on student.course=course=cid;

use mycollage;

select student.*,course.* from student inner join course on student.courseID=course.courseID;
select student.*,course.* from student left join course on student.courseID=course.courseID;
select student.*,course.* from student right join course on student.courseID=course.courseID;
