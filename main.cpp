#include <iostream>
#include <QtNetwork>
#include <QtSql>

int main(void) {
	// Просто вот так создать экземпляр класса?
	QUdpSocket network;
	QSqlDatabase sql;
	std::cout << "Hello world" << std::endl;
	return EXIT_SUCCESS;
}