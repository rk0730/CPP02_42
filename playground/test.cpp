#include <iostream>
#include <cstring>

class MyClass
{
private:
	char *data;

public:
	// デフォルトコンストラクタ
	MyClass()
	{
		data = new char[1];
		data[0] = '\0';
		std::cout << "Default constructor called\n";
	}

	// コピーコンストラクタ
	MyClass(const MyClass &other)
	{
		data = new char[strlen(other.data) + 1];
		strcpy(data, other.data);
		std::cout << "Copy constructor called\n";
	}

	// コピー代入演算子
	MyClass &operator=(const MyClass &other)
	{
		if (this != &other)
		{
			delete[] data;
			data = new char[strlen(other.data) + 1];
			strcpy(data, other.data);
			std::cout << "Copy assignment operator called\n";
		}
		return *this;
	}

	// デストラクタ
	~MyClass()
	{
		delete[] data;
		std::cout << "Destructor called\n";
	}

	// データ設定用
	void setData(const char *str)
	{
		delete[] data;
		data = new char[strlen(str) + 1];
		strcpy(data, str);
	}

	// データ出力用
	void print() const
	{
		std::cout << "Data: " << data << "\n";
	}
};

int main()
{
	MyClass b1; // デフォルトコンストラクタ
	b1.setData("Hello, World!");
	b1.print();

	// ケース1: コピーコンストラクタが呼ばれる
	MyClass a1 = b1;
	a1.print();

	// ケース2: デフォルトコンストラクタ + コピー代入演算子が呼ばれる
	MyClass a2;
	a2.print();
	a2 = a2;
	a2.print();

	return 0;
}
