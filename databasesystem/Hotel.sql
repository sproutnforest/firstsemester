-- Membuat tabel hotel
CREATE TABLE hotel (
    hotelNo VARCHAR(255) NOT NULL,
    hotelName VARCHAR(255) NOT NULL,
    city VARCHAR(255) NOT NULL,
    PRIMARY KEY (hotelNo)
);

-- Membuat tabel Room
CREATE TABLE Room (
    roomNo VARCHAR(255) NOT NULL,
    hotelNo VARCHAR(255) NOT NULL,
    type VARCHAR(255) NOT NULL,
    price INT NOT NULL,
    PRIMARY KEY (roomNo)    
);

-- Membuat tabel Booking
CREATE TABLE Booking (
    hotelNo VARCHAR(255) NOT NULL,
    guestNo VARCHAR(255) NOT NULL,
    dateForm DATE NOT NULL,
    dateTo DATE NOT NULL,
    roomNo VARCHAR(255) NOT NULL
);

-- Membuat tabel Guest
CREATE TABLE Guest (
    guestNo VARCHAR(255) NOT NULL,
    guestName VARCHAR(255) NOT NULL,
    guestAddress VARCHAR(255) NOT NULL,
    primary key (guestNo)
);

-- Memasukan data ke hotel
insert into hotel (hotelNo, hotelName, city)
values ('H001', 'Hilton', 'Jakarta');
insert into hotel (hotelNo, hotelName, city)
values ('H002', 'Aston', 'Denpasar');
insert into hotel (hotelNo, hotelName, city)
values ('H003', 'Four Season', 'Surabaya');
insert into hotel (hotelNo, hotelName, city)
values ('H004', 'Ibis', 'Jakarta');

-- Memasukan data ke room
insert into room (roomNo, hotelNo, type, price)
values ('r01', 'H001', 'Deluxe', '75');
insert into room (roomNo, hotelNo, type, price)
values ('r02', 'H002', 'Superior', '60');
insert into room (roomNo, hotelNo, type, price)
values ('r03', 'H003', 'Deluxe', '45');
insert into room (roomNo, hotelNo, type, price)
values ('r04', 'H003', 'Superior', '40');

-- Memasukan data ke Booking
insert into booking (hotelNo, guestNo, dateForm, dateTo, roomNo)
values ('H001', 'G101', TO_DATE('2019-08-08', 'YYYY-MM-DD'), TO_DATE('2019-08-10', 'YYYY-MM-DD'), 'r02');
insert into booking (hotelNo, guestNo, dateForm, dateTo, roomNo)
values ('H002', 'G102', TO_DATE('2019-01-13', 'YYYY-MM-DD') , TO_DATE('2019-01-15', 'YYYY-MM-DD'), 'r04');
insert into booking (hotelNo, guestNo, dateForm, dateTo, roomNo)
values ('H003', 'G104', TO_DATE('2019-07-18', 'YYYY-MM-DD'), TO_DATE('2019-07-20', 'YYYY-MM-DD'), 'r02');
INSERT INTO booking (hotelNo, guestNo, dateForm, dateTo, roomNo)
VALUES ('H004', 'G101', TO_DATE('2019-12-11', 'YYYY-MM-DD'), TO_DATE('2019-12-11', 'YYYY-MM-DD'), 'r03');

-- Memasukan data ke Guest
insert into Guest (guestNo, guestName, guestAddress)
values ('G101', 'Ferry', 'Avenue St');
insert into Guest (guestNo, guestName, guestAddress)
values ('G102', 'Anna', 'Main Forest St');
insert into Guest (guestNo, guestName, guestAddress)
values ('G103', 'Daniel', 'Sudirman St');
insert into Guest (guestNo, guestName, guestAddress)
values ('G104', 'Grace', 'Brisbane Road');
