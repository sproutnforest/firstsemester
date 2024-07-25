--Section 1
--Show all attributes in the table
SELECT *
FROM employees;

--Show table with certain conditions
SELECT first_name, last_name, job_id
FROM employees
WHERE job_id = 'SA_REP';

SELECT salary
FROM employees
WHERE last_name LIKE 'Smith'; --selection

SELECT * --* to change collumn name
FROM countries;

-- listing collumn names that wants to be showed one by one
SELECT country_id, country_name, region_id
FROM countries;

SELECT location_id, city, state_province
FROM locations;

-- adding arythmatic operation
SELECT last_name, salary, salary+300
FROM employees;

-- adding () if the operator comes together
SELECT last_name, salary, 12*salary+100
FROM employees;
-- to
SELECT last_name, salary, 12*(salary+100)
FROM employees;

--NULL values
SELECT last_name, job_id, salary, commission_pct, salary*commission_pct
FROM employees;

--Aliases : changin collumn/attribute name
SELECT last_name AS name, commission_pct AS comm --can only insert one word
FROM employees;

SELECT last_name "Name", salary*12 "Annual Salary" --can store more than one word
FROM employees;

--SECTION 2
DESC departments;

--merging 2 or more collumns
SELECT department_id || department_name
FROM departments;

--making space between them
SELECT department_id || ' ' || department_name
FROM departments;

--changing collumn name
SELECT deparment_id || ' ' || department_name AS 'Department Info"
FROM departments;

SELECT first_name || ' ' || last_name AS "Employee Name"
FROM employees;

--adding string
SELECT last_name || ' has a monthly salary of ' || salary || ' dollars. ' As Pay
FROM employees;

--adding number as literal value
SELECT last_name || ' has a ' || 1 || ' year salary of ' || salary*12 || ' dollars. ' AS Pay
FROM employees;

--DISTINCT to delete duplicate rows
SELECT department_id
FROM employees;

SELECT DISTINCT department_id
FROM employees;

--DP 2-2
--WHERE : condition

SELECT employee_id, first_name, last_name
FROM employees
WHERE employee_id = 101;

-- you can also use other symbols like > >= etc

SELECT employee_id, last_name, department_id
FROM employees
WHERE department_id = 90;

SELECT first_name, last_name
FROM employees
WHERE last_name = 'Taylor'; --case sensitive between the ''

SELECT hire_date, salary, job_id
FROM employees
WHERE salary >= 6000;

SELECT hire_date, salary, job_id
FROM employees
WHERE job_id = 'IT_PROG';

-- DP 2-3
--BETWEEN...AND...

SELECT last_name, salary
FROM employees
WHERE salary BETWEEN 9000 AND 11000; --9000 and 11000 is included in the range

SELECT last_name, salary
FROM employees
WHERE salary >= 9000 AND salary <= 11000; --same with the above

--IN
SELECT city, state_province, country_id
FROM locations
WHERE country_id IN ('UK', 'CA');

SELECT city, state_province, country_id
FROM locations
WHERE country_id = 'UK' OR country_id = 'CA' --same with above

--LIKE
--% holds value of 1 or more character any value
--_ holds a single character any vakue

SELECT last_name
FROM employees
WHERE last_name LIKE '_o%'; --1 character before o and any amount of character after o

--ESCAPE
-- to tell that _ means _ not one any character

SELECT last_name, job_id
FROM employees
WHERE job_id LIKE '%\_R%' ESCAPE '\'; --\ to tell that _ after it is not wildcard

SELECT last_name, job_id
FROM employees
WHERE job_id LIKE '%_R%';

--NULL = no data inside

SELECT last_name, manager_id
FROM employees
WHERE manager_id IS NULL;

--IS NOT NULL

SELECT last_name, commision_pct
FROM employees
WHERE commission_pct IS NOT NULL;






