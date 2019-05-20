 using namespace std;
class CTestCopy
{
	int x;
	int y;
	int *x;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(int a);
	CTestCopy(CTestCopy & om);
	void setXY(int a, int b);
	void setX(int a);
	void disPlay();
	~CTestCopy();
};
CTestCopy::CTestCopy()
{
	x = 0;
	y = 0;
	cout << "???????? x=" << x << " y=" << y << endl;
	x = new int;
	*x = 0;
	cout << "???????? *x=" << *x << "          x???????="<<x<<"    x????????="<<&x<< endl;
}
CTestCopy::~CTestCopy()
{
	cout << "????????   x=" << x << " y=" << y << endl;
	cout << "???????? *x=" << *x << "          x???????=" << x << "    x????????=" << &x << endl;
	delete x;
}
CTestCopy::CTestCopy(int a, int b)
CTestCopy::CTestCopy(int a)
{
	x = a;
	y = b;
	cout << "?????? x=" << x << " y=" << y << endl;
	x = new int;
	*x = a;
	cout << "?????? *x=" << *x << "          x???????=" << x << "    x????????=" << &x << endl;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "????????? x=" << x << " y=" << y << endl;
	x = om.x;
	cout << "????????? *x=" << *x << "          x???????=" << x << "    x????????=" << &x << endl;
}

void CTestCopy::setXY(int a, int b)
void CTestCopy::setX(int a)
{
	x = a;
	y = b;
	*x = a;

}
void CTestCopy::disPlay()
{
	cout << "display    x=  " << x << " y= " << y << endl;
	cout << "??????? *x=" << *x << "          x???????=" << x << "    x????????=" << &x << endl;
}
CTestCopy myTest()
{
	CTestCopy om(600,700);
	CTestCopy om(600);
	om.disPlay();
	return om;
}
@ -60,10 +59,9 @@ int testtemp(int x)
}
int main()
{
	CTestCopy ot;
	ot.disPlay();
	ot = myTest();
	CTestCopy ot(100);
	ot.disPlay();
	CTestCopy obj(ot);
    return 0;
}

