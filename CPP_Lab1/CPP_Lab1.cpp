#include <iostream>
#include <cmath>

static int inputValues() {
	int num;
	std::wcout << "Введіть число: ";
	std::wcin >> num;
	return num;
}

static void task1() {

	int t1Choice;

	int m = 0;
	int n = 0;

	std::wcout << "Індекрементальні/математичні вирази!\n"
		<< "-----------------------\n"
		<< "1. Преінкремент 2 * преінкремент 1\n"
		<< "2. Постінкремент 1 < 2\n"
		<< "3. Постінкремент 2 > 1\n"
		<< "4. Функції cmath\n"
		<< "0. Вийти\n"
		<< "-----------------------\n";
	std::wcout << "Оберіть задачу: ";
	std::wcin >> t1Choice;
	switch (t1Choice)
	{
	case 1: {
		m = inputValues();
		n = inputValues();
		int o = ++n * ++m;
		std::wcout << "Вираз ++n * ++m за m = " << m << " і n = " << n << "\n";
		std::wcout << o << "\n";
		task1();
		break;
	}
	case 2: {
		m = inputValues();
		n = inputValues();
		bool o = m++ < n;
		std::wcout << "Вираз m++ < n за m = " << m << " і n = " << n << "\n";
		std::wcout << o << "\n";
		task1();
		break;
	}
	case 3: {
		m = inputValues();
		n = inputValues();
		bool o = n++ > m;
		std::wcout << "Вираз n++ > m за m = " << m << " і n = " << n << "\n";
		std::wcout << o << "\n";
		task1();
		break;
	}
	case 4: {
		m = inputValues();
		float n = pow(pow(m, 3) - m, -1);
		float o = m + pow(pow(m, 3) - m, -1) - 2;
		std::wcout << "Математичні функції за x = " << m << "\n";
		std::wcout << m << " + " << n << " - 2 = " << o << "\n";
		task1();
		break;
	}
	case 0: {
		break;
	}
	default: {
		std::wcout << "Цієї команди не існує. Спробуйте знову.\n";
		task1();
		break;
	}
	}
}

static void task2() {
	int xmax = 0;
	int xmin = -7;
	int ymax = 0;
	int ymin = -1;

	int x = inputValues();
	int y = inputValues();

	bool check = (xmin <= x) && (x <= xmax) && (ymin <= y) && (y <= ymax);
	if (check) {
		std::wcout << "Точка з координатами x = " << x << " і y = " << y << " входить в область значень.";
	}
	else {
		std::wcout << "Точка з координатами x = " << x << " і y = " << y << " не входить в область значень.";
	}
	
}

static void task3() {
	int t3choice;
	double a = 1000;
	double b = 0.0001;
	std::wcout << "Вирази з рухомою комою\n"
		<< "-----------------------\n"
		<< "1. float\n"
		<< "2. double\n"
		<< "0. Вийти\n"
		<< "-----------------------\n";
	std::wcout << "Оберіть тип: ";
	std::wcin >> t3choice;
	switch (t3choice) {
	case 1: {
		float c = (pow(a - b, 2) - (pow(a, 2) - 2 * a * b)) / pow(b, 2);
		printf("Результат обчислення в float: %.10f", c);
		break;
	}
	case 2: {
		double d = (pow(a - b, 2) - (pow(a, 2) - 2 * a * b)) / pow(b, 2);
		printf("Результат обчислення в double: %.10f", d);
		break;
	}
	case 0: {
		break;
	}
	default: {
		std::wcout << "Цієї команди не існує. Спробуйте знову.\n";
		task3();
		break;
	}
	}
}

int main()
{
	int choice;

	std::wcout << "Вітаємо у програмі Проста математика!\n";
	std::wcout << "-----------------------\n"
		<< "1. Індекрементальні та математичні вирази\n"
		<< "2. Область значень\n"
		<< "3. Вирази з рухомою комою\n"
		<< "0. Вихід\n"
		<< "-----------------------\n";
	std::wcout << "Оберіть задачу: ";
	std::wcin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		task1();
		break;
	case 2:
		system("cls");
		task2();
		break;
	case 3:
		system("cls");
		task3();
		break;
	case 0:
		std::wcout << "Дякуємо за користування програмою.\n";
		break;
	default:
		std::wcout << "Цієї команди не існує. Спробуйте знову.\n";
		system("cls");
		main();
		break;
	}
}