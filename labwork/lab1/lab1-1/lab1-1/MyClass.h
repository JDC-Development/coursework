class Cursor{
private:
	int CoordinateX, CoordinateY,Size, checkOrientation;
	char *Orientation;
public:
	Cursor();
	Cursor(int,int,int,int);
	int setCursor(int CoordinateX,int CoordinateY,int checkOrientation,int Size);
	void getCursor();
	~Cursor();
};