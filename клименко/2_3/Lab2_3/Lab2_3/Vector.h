class Vector {
	int size;
	int *arr;
public:
	Vector();
	Vector(int);
	int AddFile(FILE *file);
	void Show();
	void Reverse();
	void MinMaxBefore();
	void MinMaxAfter();
	void CompareMinimal();
	void CompareMaximal();
	~Vector();
	int indexMinBefore, indexMaxBefore, indexMinAfter, indexMaxAfter;
}; 