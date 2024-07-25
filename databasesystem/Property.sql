-- Membuat table branch
create table Branch (
    branchNo varchar(255) not null ,
    street varchar(255) not null ,
    city char(255) not null ,
    postcode varchar(255) not null ,
    primary key (branchNo)
);

-- Membuat table Staff
create table Staff (
    staffNo char(255) not null ,
    fName varchar(255) not null ,
    lName varchar(255) not null ,
    position char(255) not null ,
    sex char(1) not null ,
    DOB date not null default current_timestamp,
    salary int not null,
    branchNo varchar(255) not null,
    primary key (staffNo)
);

-- Membuat table PropertyForRent
create table PropertyForRent (
    propertyNo varchar(255) not null,
    street varchar(255) not null,
    city char(255) not null,
    postcode char(255) not null,
    type char(255) not null,
    rooms int not null,
    rent int not null,
    ownerNo varchar(255) not null ,
    staffNo varchar(255),
    branchNo varchar(255),
    primary key (propertyNo)
);

-- Membuat table client
create table Client (
    clientNo varchar(255) not null,
    fName varchar(225) not null,
    lName varchar(255) not null,
    telNo varchar(255) not null,
    prefType varchar(255) not null,
    maxRent int,
    primary key (clientNo)
);

-- Membuat table PrivateOwner
create table PrivateOwner (
    ownerNo varchar(255) not null,
    fName varchar(225) not null,
    lName varchar(255) not null,
    address varchar(255),
    telNo varchar(255) not null,
    primary key (ownerNo)
);

-- Membuat table viewing
create table Viewing (
    clientNo varchar(255) not null,
    propertyNo varchar(225) not null,
    viewDate date not null,
    comment varchar(255)
);


-- Membuat table Registration
create table Registration (
    clientNo varchar(255) not null,
    branchNo varchar(255) not null,
    staffNo varchar(255) not null,
    dateJoined date not null
);

-- Memasukan data ke Branch
insert into Branch (branchNo, street, city, postcode)
values ('B005', '22 Deer Rd', 'London', 'SW1 $EH');
insert into Branch (branchNo, street, city, postcode)
values ('B007', '16 Argyll St', 'Aberdeen', 'AB2 3SU');
insert into Branch (branchNo, street, city, postcode)
values ('B003', '163 Main St', 'Glasgow', 'G11 9QX');
insert into Branch (branchNo, street, city, postcode)
values ('B004', '32 Manse Rd', 'Bristol', 'BS99 1NZ');
insert into Branch (branchNo, street, city, postcode)
values ('B002', '56 Clover Dr', 'London', 'NW10 6EU');

-- Mamasukan data ke Staff
insert into Staff (staffNo, fName, lName, position, sex, DOB, salary, branchNo)
values ('SL21', 'John', 'White', 'Manager', 'M', '1-Oct-1945', '30000', 'B005');
insert into Staff (staffNo, fName, lName, position, sex, DOB, salary, branchNo)
values ('SG37', 'Ann', 'Beech', 'Assistant', 'F', '10-Nov-1960', '12000', 'B003');
insert into Staff (staffNo, fName, lName, position, sex, DOB, salary, branchNo)
values ('SG14', 'David', 'Ford', 'Supervisor', 'M', '24-Mar-1958', '18000', 'B003');
insert into Staff (staffNo, fName, lName, position, sex, DOB, salary, branchNo)
values ('SA9', 'Marry', 'Howe', 'Assistant', 'F', '19-Feb-1970', '9000', 'B007');
insert into Staff (staffNo, fName, lName, position, sex, DOB, salary, branchNo)
values ('SG5', 'Susan', 'Brand', 'Manager', 'F', '3-Jun-1940', '24000', 'B003');
insert into Staff (staffNo, fName, lName, position, sex, DOB, salary, branchNo)
values ('SL41', 'Julie', 'Lee', 'Assistant', 'F', '13-Jun-1965', '9000', 'B005');

-- Memasukan data ke PropertyForRent
insert into PropertyForRent (propertyNo, street, city, postcode, type, rooms, rent, ownerNo, staffNo, branchNo)
values
    ('PA14', '16 Holhead', 'Aberdeen', 'AB7 5SU', 'House', '6', '650', 'CO46', 'SA9', 'B007'),
    ('PL94', '6 Aegyll St', 'London', 'NW2', 'Flat', '4', '400', 'CO87', 'SL41', 'B005'),
    ('PG4', '6 Lawrence St', 'Glasgow', 'G11 9QX', 'Flat', '3', '350', 'CO40', '', 'B003'),
    ('PG36', '2 Manor Rd', 'Glasgow', 'G32 4QX', 'Flat', '3', '375', 'CO93', 'SG37', 'B003'),
    ('PG21', '18 Dale Rd', 'Glasgow', 'G12', 'House', '5', '600', 'CO87', 'SG37', 'B003'),
    ('PG16', '5 Novar Dr', 'Glasgow', 'G12 9AX', 'Flat', '4', '450', 'CO93', 'SG14', 'B003');

-- Memasukan data ke Client
insert into Client (clientNo, fName, lName, telNo, prefType, maxRent)
values
    ('CR76', 'John', 'Kay', '0207-774-5632', 'Flat', '425'),
    ('CR56', 'Aline', 'Stewart', '0141-848-1825', 'Flat', '350'),
    ('CR74', 'Mike', 'Ritchie', '01475-392178', 'House', '750'),
    ('CR62', 'Marry', 'Tregear', '01224-196720', 'Flat', '600');

-- Memasukan data ke PrivateOwner
insert into PrivateOwner (ownerNo, fName, lName, address, telNo)
values
    ('CO46', 'Joe', 'Keogh', '2 Fergus Dr, Aberdeen AB2 7SX', '01224-861212'),
    ('CO87', 'Carol', 'Farrel', '6 Achray St, Glasgow G32 9DX', '0141-357-7419'),
    ('CO40', 'Tina', 'Murphy', '63 Well St, Glasgow G42', '0141-943-1728'),
    ('CO93', 'Tony', 'Shaw', '12 Park Pl, Glasgow G4 0QR', '0141-225-7025');

-- Memasukan data ke Viewing
insert into Viewing (clientNo, propertyNo, viewDate, comment)
values
    ('CR56', 'PA14', '24-May-04', 'too small'),
    ('CR76', 'PG4', '20-apr-04', 'too remote'),
    ('CR56', 'PG4', '26-May-04', ''),
    ('CR62', 'PA14', '14-May-04', 'no dining room'),
    ('CR56', 'PG36', '28-Apr-04', '');

-- Memasukan data ke Registration
insert into Registration (clientNo, branchNo, staffNo, dateJoined)
values
    ('CR76', 'B005', 'SL41', '2-Jan-04'),
    ('CR56', 'B003', 'SG37', '11-Apr-03'),
    ('CR74', 'B003', 'SG37', '16-Nov-02'),
    ('CR62', 'B007', 'SA9', '7-Mar-03');