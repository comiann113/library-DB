create Database library;

use library;

create table book(
				  bookCode char(100) not null,
				  place char (100),
				  bookName char (100),
				  writer char (100),
				  genre char (100),
				  status int not null
				  primary key(bookcode)
				  );

insert book values('A01','100', '���̾�', '�츣�� �켼', '��������', 1);

select *
from book;