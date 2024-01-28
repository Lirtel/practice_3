#include <iostream>;
#include <Windows.h>;
using namespace std;

void task1(){
	bool isSunny;
	bool hasUmbrella;

	cout << "Введите есть ли зонт (true или false)"<< endl;
	cin >> hasUmbrella;
	cout << "Введите погода солнечная или нет (true или false)" << endl;
	cin >> isSunny;

		if (isSunny && !hasUmbrella) { //используя ! перед hasUmbrella мы указываем что это не !=не
			cout << "Пойду гулять";
		}
		else if (!isSunny && !hasUmbrella) {
			cout << "Гулять не пойду, у меня нет зонта";
		}
		else if (!isSunny && hasUmbrella) {
			cout << "Могу пойти гулять, но нужно одеться теплее";
		}
		else {
			cout << "Пойду гулять, но зонт оставлю";
		}
}

void task2() {
	bool isWeekend;
	bool isHoliday;

	cout << "Сегодня выходной? (true or false)"<< endl;
	cin >> isWeekend;
	cout << "Сегодня праздник? (true or false)"<< endl;
	cin >> isHoliday;
	
	if (isHoliday || isWeekend) {
		cout << "Посплю часок";
	}
	else {
		cout << "Поспать не получится";
	}

}
void task3() {
	int num;

	cout << "num= " << endl;
	cin >> num;

	string min = (num < 0) ? "отрицательное" : num > 0 ? "положительное" : "это ноль";
	cout << min;

}
void task4() {
	int num;
	cout << "num=";
	cin >> num;

	string mun = (num%2==0) ? "четное" : "нечетное";
	cout << mun;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//task1();
	//task2();
	//task3();
	task4();

	return 0;
}