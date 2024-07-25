-- No. 1
select TO_CHAR(TO_DATE('Oct 14, 2022', 'Mon DD, 
YYYY'), 'fxfmDay, Ddspth "of" Month Year') as DATE_TODAY
from dual;

-- No. 2
select COUNTRY_NAME, CAPITOL, DATE_OF_INDEPENDENCE, CURRENCY_CODE
from wf_countries
where location = 'Oceania';

-- No. 3
select 'Huruf "A" ditemukan pada nama '||LAST_NAME||' pada 
posisi huruf ke '||INSTR(LOWER(LAST_NAME),
LOWER('A')) as "LETTER_POSITION"
from employees;

-- No. 4
select LAST_NAME, JOB_TITLE, 
TO_CHAR (SALARY, '$99,999.99') as "MONTHLY_SALARY",
TO_CHAR (SALARY*12, '$999,999.99') as "ANNUAL_SALARY"
from jobs NATURAL JOIN employees
order by LAST_NAME;

-- No. 5
select FIRST_NAME || ' ' || LAST_NAME as "FULL NAME", DEPARTMENT_NAME
from employees NATURAL JOIN departments 
order by "FULL NAME" DESC;

-- No. 6
select JOB_ID, JOB_TITLE, 
SALARY as "MONTHLY_SALARY",
SALARY*12 as "ANNUAL_SALARY"
from jobs NATURAL JOIN employees;

-- No. 7 a
select first_name, department_id, manager_id, salary
from employees
where department_id = 80 and manager_id = 149;

-- No. 7 b
select department_name, location_id, city
from departments natural join locations
where city = 'Seattle';