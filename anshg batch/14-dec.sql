select * from student where count(courseid)<2;

having; group by;
select * from student
select courseID from student group by courseID having count(courseID) >1;

select * from student where courseID= (select courseID from student group by courseID having count(courseID) >1);