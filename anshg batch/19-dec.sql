-- select student.*,course.* from student inner join course on student.course=course=cid;

use mycollage;

select student.*,course.* from student inner join course on student.courseID=course.courseID where course.totalfees>50000 order by student.student_name;
select student.*,course.* from student left join course on student.courseID=course.courseID;
select student.*,course.* from student right join course on student.courseID=course.courseID;
select student.*,course.* from student cross join course on student.courseID=course.courseID;

select student.*,course.* from student left join course on student.courseID=course.courseID union select student.*,course.* from student right join course on student.courseID=course.courseID;
