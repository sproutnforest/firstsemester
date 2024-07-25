--1
SELECT last_name || ' hired on ' || TO_CHAR(hire_date,'YYYY') 
AS "EMPLOYEES ENTRY YEAR"
FROM employees
WHERE department_id=:dept_id; --kalau di apex pakenya :, klo sql developer ganti jadi &

--2
SELECT first_name || ' ' || last_name || ' works on ' ||  department_name 
AS "Employees Information"
FROM employees JOIN departments USING (department_id);

--3
SELECT last_name, job_title, department_id, 
TO_CHAR(salary, '$99,999.99') AS MONTHLY_SALARY,
TO_CHAR(salary*12, '$999,999.99') AS ANNUAL_SALARY
FROM hr.employees NATURAL JOIN hr.jobs --ganti jadi employees sama jobs biasa aja klo ga error, untuk soal lain juga sama
WHERE department_id IN (90,70,60)
ORDER BY last_name asc;  

--4
SELECT first_name || ' ' || last_name AS NAMA_LENGKAP, 
TO_CHAR(TO_DATE(hire_date), ('Month'),'nls_date_language = INDONESIAN') 
AS BULAN_PERTAMA_KERJA
FROM hr.employees
WHERE department_id =:dept_id;

SELECT
   first_name || last_name AS nama_lengkap, 
   CASE TO_CHAR(hire_date, 'Mon') 
        WHEN 'Jan' THEN 'Januari'
        WHEN 'Feb' THEN 'Februari'
        WHEN 'Mar' THEN 'Maret'
        WHEN 'Apr' THEN 'April'
        WHEN 'May' THEN 'Mei'
        WHEN 'Jun' THEN 'Juni'
        WHEN 'Jul' THEN 'Juli'
        WHEN 'Aug' THEN 'Agustus'
        WHEN 'Sep' THEN 'September'
        WHEN 'Oct' THEN 'Oktober'
        WHEN 'Nov' THEN 'November'
        WHEN 'Dec' THEN 'Desember'
        END AS bulan_pertama_kerja
FROM hr.employees
WHERE department_id =:dept_id;

-- 5
SELECT last_name , INSTR(LOWER(last_name),LOWER('&last_name')) AS letter_position
FROM employees;

-- 6a
SELECT first_name, department_id, salary
FROM employees 
WHERE department_id = 70 and salary > 1500;

--6b
SELECT last_name, department_name
FROM employees JOIN departments USING (department_id)
WHERE location_id = 1700;