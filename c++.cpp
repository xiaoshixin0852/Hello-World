/*结构体 年龄 程度 姓名*/
// #include<iostream>
// #include<string.h>
// using namespace std;
// struct complex
// {
//     char name[100];
//     int score1;
//     int score2;
// };
// int main()
// {
//  struct complex c[100];
//  struct complex a[100];
//  int n,i,j;
//  cin>>n;
//  for(i=0;i<n;i++)
//  cin>>c[i].name>>c[i].score1>>c[i].score2;
//  for(j=0;j<n-1;j++)
//  for(i=0;i<n-1-j;i++)
//  if(c[i].score1<c[i+1].score1)
//  {a[i]=c[i];c[i]=c[i+1];c[i+1]=a[i];}
//  for(j=0;j<n-1;j++)
//  for(i=0;i<n-1-j;i++)
//  if(c[i].score1==c[i+1].score1)
//  if(c[i].score2<c[i+1].score2)
//  {a[i]=c[i];c[i]=c[i+1];c[i+1]=a[i];}
//  for(j=0;j<n-1;j++)
//  for(i=0;i<n-1-j;i++)
//  if(c[i].score1==c[i+1].score1)
//  if(c[i].score2==c[i+1].score2)
//  if(strcmp(c[i].name,c[i+1].name)>0)
//  {a[i]=c[i];c[i]=c[i+1];c[i+1]=a[i];}
//  for(i=0;i<n;i++)
//  cout<<c[i].name<<" "<<c[i].score1<<" "<<c[i].score2<<endl;
//  return 0;
// }

/*函数重载*/
// #include<iostream>
// using namespace std;
// struct complex
// {
//     double real;
//     double imaginary;
// };
// int add(int m,int n)
// {return m+n;}
// double add(double x,double y)
// {return x+y;}
// complex add(complex c1,complex c2)
// {
//     complex c;
//     c.real=c1.real+c2.real;
//     c.imaginary=c1.imaginary+c2.imaginary;
//     return c;
// }
// int main()
// {
//     int m,n;
//     double x,y;
//     complex c1,c2,c3;
//     cout<<"Enter two integer:";
//     cin>>m>>n;
//     cout<<"integer"<<m<<'+'<<n<<"="<<add(m,n)<<endl;
//     cout<<"Enter two real number:";
//     cin>>x>>y;
//     cout<<"real number"<<x<<'+'<<y<<"="<<add(x,y)<<endl;
//     cout<<"Enter the first complex number: ";
// 	cin>>c1.real>>c1.imaginary;
// 	cout<<"Enter the second complex number: ";
// 	cin>>c2.real>>c2.imaginary;
// 	c3=add(c1,c2);
// 	cout<<"complex number (" <<c1.real<< ','
//            << c1.imaginary <<")+("<<c2.real<<','
//            <<c2.imaginary<<")=("<<c3.real<<','
//            <<c3.imaginary<<")\n";
// }

/*内联成员函数*/
// #include<iostream>
// using namespace std;
// class Point
// {
//  public:
//     void Init(int initX,int initY);
//     int GetX();
//     int GetY();
//  private:
//     int X,Y;
// };
// inline void Point::Init(int initX,int initY)
// {
//     X=initX;
//     Y=initY;
// }
// inline int Point::GetX()
// {  return X; }
// inline int Point::GetY()
// {  return Y; }
// int main()
// {
//     Point p;
//     p.Init(1,2);
//     cout << p.GetX() << " " << p.GetY() << endl;
//     return 0;
// }

/*类*/
// #include<iostream>
// using namespace std;
// class Clock
// {public:      //类的外部接口
//      void SetTime(int NewH=0,int NewM=0,int NewS=0);
//      void ShowTime();
//  private:
//      int Hour,Minute,Second;
// };
// void Clock ::SetTime(int NewH,int NewM,int NewS)
// {      Hour=NewH;
//         Minute=NewM;
//         Second=NewS;
// }
// void Clock ::ShowTime()
// {
//   cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
// }
// int main()
// {    Clock  myClock;
//      cout <<"First time set and output:"<<endl;
//      myClock.SetTime();
//      myClock.ShowTime();
//      cout <<"Second time set and output:"<<endl;
//      myClock.SetTime(8,30,30);
//      myClock.ShowTime();
// }

/*构造函数*/
// #include <iostream>
// using namespace std;
// class Clock
// {
// public:
//     Clock(int NewH, int NewM, int NewS);// 构造函数
//     void ShowTime();
// private:
//     int Hour, Minute, Second;
// };
// Clock::Clock(int NewH, int NewM, int NewS)
// {
//     Hour = NewH;
//     Minute = NewM;
//     Second = NewS;
// }
// // ShowTime函数的实现，用于输出时钟时间
// void Clock::ShowTime()
// {
// cout << Hour << ":" << Minute << ":" << Second << endl;
// }
// int main()
// {
//     Clock c1(0, 0, 0), c2(0, 0, 0), c3(0, 0, 0); // 自动调用构造函数，将初始值作为实参
//     // 调用c1的ShowTime方法来显示时间
//     c1.ShowTime();
//     return 0;
// }

/*拷贝构造函数*/
// #include<iostream>
// using namespace std;
// class Point
// {  public:
//        Point(int xx=0,int yy=0){X=xx; Y=yy;}
//        Point(Point &p);
//        int GetX() {return X;}
//        int GetY() {return Y;}
//    private:
//        int  X,Y;
// };
// Point::Point (Point &p)
// {
//       X=p.X;
//       Y=p.Y;
//       cout<<"拷贝构造函数被调用"<<endl;
// }
// //形参为Point类的对象
// void fun1(Point p)
// {    cout<<p.GetX()<<endl;
// }
// //返回值为Point类对象的函数
// Point fun2()
// {   Point A(1,2);
//     return A;
// }
// //主程序
// int main()
// {    Point A(4,5);  //第一个对象Ａ
//      Point B(A);   //Ａ初始化Ｂ第一次调用拷贝函数
//      cout<<B.GetX()<<endl;
//      fun1(B);      //对象Ｂ为fun1实参，第二次调用
//      B=fun2();    //函数返回值是类对象，第三次调用
//      cout<<B.GetX()<<endl;
// }

/*析构函数*/
// #include <iostream>
// #include <iomanip> // 用于格式化输出
// using namespace std;
// // 定义CPU类
// class CPU {
// public:
//     // 构造函数
//     CPU(int a, int b, double c);
//     // 公有成员函数
//     void run();
//     void stop();
//     // 析构函数
//     ~CPU();
// private:
//     int rank;         // 等级
//     int frequency;    // 频率
//     double voltnumber; // 电压值
// };
// // 构造函数实现
// CPU::CPU(int a, int b, double c) : rank(a), frequency(b), voltnumber(c)
// {
//     cout << "CPU's constructor is called!" << endl;
// }
// // 成员函数run的实现
// void CPU::run()
// {
//     cout << "I am working, my rank is " << rank << ", my frequency is " << frequency<< ", my voltnumber is "
//     << fixed << setprecision(1) << voltnumber << "." << endl;//保留一位小数
// }
// // 成员函数stop的实现
// void CPU::stop()
// {
//     cout << "I stopped working!" << endl;
// }
// // 析构函数实现
// CPU::~CPU()
// {
//     cout << "CPU's destructor is called!" << endl;
// }
// int main()
// {
//     int a, b;
//     double c;
//     // 输入等级、频率和电压值
//     cin >> a >> b >> c;
//     // 创建CPU对象并调用run和stop
//     CPU cpu(a, b, c);
//     cpu.run();
//     cpu.stop();
//     return 0;
// }

/*类的应用举例*/
// #include <iostream>
// using namespace std;
// const float PI = 3.14159;
// const float FencePrice = 35;
// const float ConcretePrice = 20;
// //声明类Circle 及其数据和方法
// class Circle
// {
//   private:
//     float  radius;
//   public:
//     Circle(float r);            //构造函数
//     float Circumference() ;     //圆周长
//     float Area() ;              //圆面积
// };
// // 类的实现
// // 构造函数初始化数据成员radius
// Circle::Circle(float r)
// {radius=r;}
// // 计算圆的周长
// float Circle::Circumference()
// {    return 2 * PI * radius; }
// // 计算圆的面积
// float Circle::Area()
// {    return PI * radius * radius; }
// int main ( )
// {
//   float radius;
//   float FenceCost, ConcreteCost;
//   // 提示用户输入半径
//   cout<<"Enter the radius of the pool: ";
//   cin>>radius;
//   // 声明 Circle 对象
//   Circle Pool(radius);
//   Circle PoolRim(radius + 3);
//   // 计算栅栏造价并输出
//     FenceCost = PoolRim.Circumference() * FencePrice;
//     cout << "Fencing Cost is ￥" << FenceCost << endl;
//  //  计算过道造价并输出
//     ConcreteCost = (PoolRim.Area() - Pool.Area())*ConcretePrice;
//     cout << "Concrete Cost is ￥" << ConcreteCost << endl;
// }

/*静态数据成员*/
// #include <iostream>
// using namespace std;
// class Point
// {public:
// 	Point(int xx=0, int yy=0) {X=xx; Y=yy; countP++; }
//     Point(Point &p);
// 	int GetX() {return X;}
// 	int GetY() {return Y;}
// 	void GetC() {cout<<" Object id="<<countP<<endl;}
// private:
// 	int X,Y;
// 	static int countP;
// };
// Point::Point(Point &p)
// {	X=p.X;
// 	Y=p.Y;
// 	countP++;
// }
// int Point::countP=0;
// int main()
// {	Point A(4,5);
// 	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
// 	A.GetC();
// 	Point B(A);
// 	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
// 	B.GetC();
// }

/*静态成员函数*/
// #include<iostream>
// using namespace std;
// class Application
// { public:
//      static void f();
//      static void g();
//   private:
//      static int global;
// };
// int Application::global=0;
// void Application::f()
// {  global=5;}
// void Application::g()
// {  cout<<global<<endl;}
// int main()
// { Application::f();
//    Application::g();
//    return 0;
// }

/*友元函数*/
// #include <iostream>
// #include <cmath>
// using namespace std;
// class Point
// { public:
// 	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
// 	int GetX() {return X;}
// 	int GetY() {return Y;}
//  friend double Distance(Point &a, Point &b);
//  private:
// 	 int X,Y;
// };
// double Distance(Point &a,Point &b)
// {     double dx=a.X-b.X;
//       double dy=a.Y-b.Y;
//       return sqrt(dx*dx+dy*dy);
// }
// int main()
// {  Point p1(3.0, 5.0), p2(4.0, 6.0);
//     double d=Distance(p1, p2);
//     cout<<"The distance is "<<d<<endl;
// }

/*前向引用*/
// #include <iostream>
// using namespace std;
// int getTotalWeight(class Boat &boat,class Car &car);
// class Boat
// {
//     friend int getTotalWeight(Boat &boat,Car &car);
//     public:
//     Boat(int w):weight(w)
//     {};
//     private:
//     int weight;
// };
// class Car
// {
//     friend int getTotalWeight(Boat &boat,Car &car);
//     public:
//     Car(int w):weight(w)
//     {};
//     private:
//     int weight;
// };
// int getTotalWeight(Boat &boat,Car &car)
// {
//     return (boat.weight+car.weight);
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     Boat boat(n);
//     Car car(m);
//     cout<<"船和汽车共重"<<getTotalWeight(boat,car)<<"吨"<<endl;
// }

/*常成员函数*/
// #include<iostream>
// using namespace std;
// class R
// {    public:
//          R(int r1, int r2){R1=r1;R2=r2;}
//          void print();
//          void print() const;
//       private:
//          int R1,R2;
// };
// void R::print()
// {  R1=5;   cout<<R1<<":"<<R2<<endl; }
// void R::print() const
// {     cout<<R1<<";"<<R2<<endl; }
// int main()
// {   R a(5,4);
//      a.print();
//      const R b(20,52);
//      b.print();
// }

/*常数据成员*/
// #include<iostream>
// using namespace std;
// class A
// { public:
// 	   A(int i);
// 	   void print();
// 	   const int &r;//常引用
//  private:
// 	 const int a;
// 	 static const int b;//静态常数据成员
//  };
//  const int A::b=10;
// A::A(int i):a(i),r(a) //i赋值给a a赋给r
// { }
// void A::print()
// {    cout<<a<<":"<<b<<":"<<r<<endl; }
// int main()
// {   A a1(100),a2(0);        //通过构造函数的初始化
//     //列表给对象的常数据成员赋初值
//     a1.print();
//     a2.print();
// }

/*指针和常量*/
// #include <iostream>
// using namespace std;
// int main()
// {
// /*指向常量的指针*/
// const char *name1 = "John";  //指向常量的指针
// char s[ ]="abc";
// char p[ ]="abc";
// name1=s;       //正确，name1的值可以改变
// // *name1='A'    错误，name1所指的值不可以改变
// /*指针类型的常量*/
// char *const name2 = p;
// // name2="abc"   错误，指针常量值不能改变
// *name2='A';
// cout<<name1<<' '<<*name1<<' '<<p<<' '<<*name2<<endl;
// }

/*指针数组*/
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int line1[ ]={1,0,0};   //声明数组，矩阵的第一行
// 	int line2[ ]={0,1,0};   //声明数组，矩阵的第二行
// 	int line3[ ]={0,0,1};   //声明数组，矩阵的第三行
// 	int *p_line[3];	        //声明整型指针数组
// 	p_line[0]=line1;	    //对p_line[数]这个指针进行解引用:如果p_line[0]指向line1数组的首地址，*p_line[0]就是访问line1数组的第一个元素
// 	p_line[1]=line2;
// 	p_line[2]=line3;
//     cout<<"Matrix test:"<<endl;
// 	for(int i=0;i<3;i++)	//对指针数组元素循环
// 	{
// 	for(int j=0;j<3;j++)	//对矩阵每一行循环
// 	{cout<<p_line[i][j]<<" ";}//使用p[i][j]时,对p[i]这个指针进行索引:找到指针数组中的第i个指针，通过这个指针去访问它所指向的数组中第j个元素。
// 	cout<<endl;
// 	}
//   }

/*对象指针*/
// #include <iostream>
// using namespace std;
// class Point
// {public:
// 	Point(int xx=0, int yy=0) {X=xx; Y=yy; } //相当于{this->X=xx; this->Y=yy;}
// 	int GetX() {return X;}
// 	int GetY() {return Y;}
// private:
// 	int X,Y;
// };
// int main()
// {
//      Point A(5,10);
//      Point *ptr;
//      ptr=&A;
// 	 int x;
// 	 x= ptr->GetX();//通过指针访问对象成员：对象指针名->成员名 ptr->getx() 相当于 (*ptr).getx();
// 	 cout<<x<<endl;
//      return 0;
// }

/*指向类的非静态成员的指针*/
/*访问对象的公有成员函数的不同方式*/
// #include <iostream>
// using namespace std;
// class Point
// {public:
// 	Point(int xx=0, int yy=0) {X=xx; Y=yy; }
// 	int GetX() {return X;}
// 	int GetY() {return Y;}
// private:
// 	int X,Y;
// };
// int main()
// {	Point A(4,5);
// 	Point *p1=&A;
// 	int (Point::*pG)()=Point::GetX;//声明成员函数指针并初始化
// 	cout<<(A.*pG)()<<endl;	       //(1)使用成员函数指针访问成员函数
// 	cout<<(p1->GetX)()<<endl;      //(2)使用对象指针访问成员函数
//  cout<<A.GetX()<<endl;          //(3)使用对象名访问成员函数
// }

/*指向类的静态成员的指针*/
// #include <iostream>
// using namespace std;
// class Point
// { public:
//     Point(int xx=0, int yy=0)
//     {X=xx;Y=yy;countP++;}
// 	Point(Point &p);
// 	int GetX() {return X;}
// 	int GetY() {return Y;}
// 	static void GetC()        //静态函数成员
//     {cout<<" Object id="<<countP<<endl;}
//    private:
// 	 int X,Y;
// 	 static int countP;      //静态数据成员
// };
// Point::Point(Point &p)
// {	X=p.X;  Y=p.Y;  countP++;  }
// int Point::countP=0;
// int main()
// {
// 	void (*gc)()=Point::GetC;//指向函数的指针，指向类的静态成员函数
// 	Point A(4,5);
// 	cout<<"Point A,"<<A.GetX()<<","<<A.GetY();
// 	gc();
// 	Point B(A);
// 	cout<<"Point B,"<<B.GetX()<<","<<B.GetY();
// 	gc();
// }

/*动态创建对象*/
// #include<iostream>
// using namespace std;
// class Point
// { public:
//     Point()
//       { X=Y=0; cout<<"Default Constructor called.\n";}
//     Point(int xx,int yy)
//       {   X=xx; Y=yy; cout<< "Constructor called.\n";  }
//     ~Point() {   cout<<"Destructor called.\n";    }
//     int GetX() {return X;}
//     int GetY() {return Y;}
// 	void Move(int x,int y)	{  X=x;  Y=y;   }
//   private:
//        int  X,Y;
// };
// int main()
// {   cout<<"Step One:"<<endl;
//      Point *Ptr1=new Point;
//      delete  Ptr1;
//      cout<<"Step Two:"<<endl;
//      Ptr1=new Point(1,2);
//      delete Ptr1;
//      return 0;
// }

/*动态创建对象数组*/
// #include<iostream>
// using namespace std;
// class Point
// { public:
//     Point()
//       { X=Y=0; cout<<"Default Constructor called.\n";}
//     Point(int xx,int yy)
//       {   X=xx; Y=yy; cout<< "Constructor called.\n";  }
//     ~Point() {   cout<<"Destructor called.\n";    }
//     int GetX() {return X;}
//     int GetY() {return Y;}
// 	void Move(int x,int y)	{  X=x;  Y=y;   }
//   private:
//        int  X,Y;
// };
// int main()
// {  Point *Ptr=new Point[2];
//    Ptr[0].Move(5,10);           //通过指针访问数组元素的成员
//    Ptr[1].Move(15,20);
//    cout<<"Deleting..."<<endl;
//    delete[ ] Ptr;               //删除整个对象数组
//    return 0;
// }

/*动态数组类*/
// #include<iostream>
// using namespace std;
// class Point
// { public:
//     Point()
//       { X=Y=0; cout<<"Default Constructor called.\n";}
//     Point(int xx,int yy)
//       {   X=xx; Y=yy; cout<< "Constructor called.\n";  }
//     ~Point() {   cout<<"Destructor called.\n";    }
//     int GetX() {cout<<X<<" "; return X;}
//     int GetY() {cout<<Y<<endl; return Y;}
// 	void Move(int x,int y)	{  X=x;  Y=y;   }
//   private:
//        int  X,Y;
// };
// class ArrayOfPoints
// {   public:
//        ArrayOfPoints(int n)
//          {   numberOfPoints=n;  points=new Point[n];  }
//        ~ArrayOfPoints()
//          {   cout<<"Deleting..."<<endl;
//          numberOfPoints=0;  delete[ ] points;
//         }
//       Point &Element(int n)   {  return points[n];  }
//    private:
//        Point *points;
//        int numberOfPoints;
// };
// int main()
// {	int number;
// 	cout<<"Please enter the number of points:";
// 	cin>>number;
//     ArrayOfPoints pts(number);  //创建对象数组
//     pts.Element(0).Move(5,10);  //通过指针访问数组元素的成员
//     pts.Element(0).GetX();
//     pts.Element(0).GetY();
//     pts.Element(1).Move(15,20);
//     pts.Element(1).GetX();
//     pts.Element(1).GetY();
// }

/*公有继承*/
// #include<iostream>
// using namespace std;
// class Point	                   //基类Point类的声明
// {public:
// 	void InitP(float xx=0, float yy=0)
//         {X=xx;Y=yy;}
// 	void Move(float xOff, float yOff)
//         {X+=xOff;Y+=yOff;}
// 	float GetX() {return X;}
// 	float GetY() {return Y;}
// private:
// 	float X,Y;
// };
// class Rectangle: public Point  //派生类声明
// {
// public:	                      //新增公有函数成员
// 	void InitR(float x, float y, float w, float h)
// 	{InitP(x,y);W=w;H=h;}         //调用基类公有成员函数
// 	float GetH() {return H;}
// 	float GetW() {return W;}
// private:	                      //新增私有数据成员
// 	float W,H;
// };
// int main()
// {  Rectangle rect;
// 	rect.InitR(2,3,20,10);        //通过派生类对象访问基类公有成员
// 	rect.Move(3,2);
// 	cout<<rect.GetX()<<','<<rect.GetY()<<','<<rect.GetH()<<','<<rect.GetW()<<endl;
// 	return 0;
// }

/*私有继承*/
// #include<iostream>
// using namespace std;
// class Point	                   //基类Point类的声明
// {public:
// 	void InitP(float xx=0, float yy=0)
//         {X=xx;Y=yy;}
// 	void Move(float xOff, float yOff)
//         {X+=xOff;Y+=yOff;}
// 	float GetX() {return X;}
// 	float GetY() {return Y;}
// private:
// 	float X,Y;
// };
// class Rectangle: private Point	//派生类声明
// {public:	                        //新增外部接口
// 	void InitR(float x, float y, float w, float h)
// 	  { InitP(x,y);  W=w;H=h;}      //访问基类公有成员
// 	void Move(float xOff, float yOff)
//        { Point::Move(xOff,yOff);}
// 	float GetX() {return Point::GetX();}
// 	float GetY() {return Point::GetY();}  //防止重名 Point::只是用于标识区别
// 	float GetH() {return H;}
// 	float GetW() {return W;}
// private:	                        //新增私有数据
// 	float W,H;
// };
// int main()
// {                               //通过派生类对象只能访问本类成员
//  Rectangle rect;
// 	rect.InitR(2,3,20,10);
// 	rect.Move(3,2);
// 	cout<<rect.GetX()<<',' <<rect.GetY()<<','<<rect.GetH()<<','<<rect.GetW()<<endl;
// 	return 0;
// }

/*保护继承*/
// #include<iostream>
// using namespace std;
// class A
// {  protected:
//        int x;
//  };
// class B: public A
// {   public:
//         int Function();
// };
// int B::Function()
// {
//       x=5;   //正确
//       return x;
// }
// int main()
// {
//     B prot;
//     cout<<prot.Function()<<endl;
// }

/*单一继承构造函数*/
// #include<iostream>
// using namespace std;
// class D{
//      public:
// 	       D();
// 	       D(int i);
// 	       ~D();
// 	       void Print() const;//前面返回值常 后面函数常
//      private:
// 	       int d;
// };
// D::D()
// {	d=0;
// 	cout<<"D's default constructor called."<<endl;
// }
// D::D(int i)
// {	d=i;
//     cout<<"D's constructor called." <<endl;
// }
// D::~D() { cout<<"D's destructor called."<<endl;  }
// void D::Print() const
// {	cout<<d<<endl;  }
// class C: public D
// { public:
//        C();
// 	    C(int i,int j);
// 	    ~C();
//        void Print() const;
// 	private:
// 	    int c;
// };
// C::C()
// {	c=0;
// 	cout<<"C's default constructor called."<<endl;
//   }
// C::C(int i,int j):D(i)  //放里面构造不行 并且基类和派生类有一个有就都得有
// {	c=j;
// 	cout<<"C's constructor called."<<endl;
//   }
// C::~C()
// {	cout<<"C's destructor called."<<endl; }
// void C::Print() const
// {	D::Print(); cout<<c<<endl;  }
// int main() {	C obj(5,6);	obj.Print();  }

/*多继承构造函数*/
/*调用基类构造函数，调用顺序按照它们被继承时声明的顺序（从左向右）*/
/*调用成员对象的构造函数，调用顺序按照它们在类中声明的顺序*/
/*拷贝构造函数 C::C(C &c1):D(c1){  }*/
/*析构函数的调用次序与构造函数相反*/
// #include<iostream>
// using namespace std;
// class D1	//基类D1声明
// { public:
// 	D1(int i)   {cout<<"constructing D1 "<<i<<endl;}
// 	~D1( ) {cout<<"destructing D1 "<<endl;}
// };
// class D2	//基类D2声明
// { public:
// 	D2(int j)    {cout<<"constructing D2 "<<j<<endl;}
// 	~D2( ) {cout<<"destructing D2 "<<endl;}
// };
// class D3	//基类D3声明
// { public:
// 	D3(){cout<<"constructing D3 *"<<endl;}
// 	~D3( ) {cout<<"destructing D3 "<<endl;}
// };
// class C: public D2, public D1, public D3
// {public:
// 	C(int a, int b, int c, int d):
//     D1(a),memberD2(d),memberD1(c),D2(b){ }
// private:
// 	D1 memberD1;
// 	D2 memberD2;
// 	D3 memberD3;
// };
// int main()
// {	C obj(1,2,3,4);   }

/*虚基类*/
/*为最远的派生类提供唯一的基类成员，而不重复产生多次拷贝*/
/*在第一级继承时要将共同基类设为虚基类*/
// #include<iostream>
// using namespace std;
// class C0
// { public:
// 	  C0(int n){ nV=n;}
// 	  int nV;
// 	  void fun(){cout<<"Member of C0"<<endl;}
// };
// class C1: virtual public C0
// {  public:
// 	   C1(int a) : C0(a) { }
// 	   int nV1;
// };
// class C2: virtual public C0
// {  public:
// 	   C2(int a) : C0(a) {}
// 	   int nV2;
// };
// class D1: public C1, public C2
// {
// public:
// 	D1(int a) : C0(a), C1(a), C2(a){ }
// 	int nVd;
// 	void fund(){cout<<"Member of D1"<<endl;}
// };
// int main()
// {
// 	D1 d1(1);
// 	d1.nV=2;
// 	d1.fun();
// }

/*类型兼容规则*/
/*通过基类对象名、指针只能访问从基类继承的成员*/
// #include <iostream>
// using namespace std;
// class C0	//基类C0声明
// { public:
// 	void display()
//       {cout<<"C0::display()"<<endl;}	//公有成员函数
// };
// class C1: public C0
// { public:
// 	 void display(){cout<<"C1::display()"<<endl;}
//  };
// class D1: public C1
// { public:
// 	 void display(){cout<<"D1::display()"<<endl;}
//  };
// void fun(C0 *ptr)
// {	ptr->display();	 }
// int main()
// {	C0 c0;
// 	C1 c1;
// 	D1 d1;
// 	C0 *p;
// 	p=&c0;	//C0类指针指向C0类对象
// 	fun(p);
// 	p=&c1;	//C0类指针指向C1类对象
// 	fun(p);
// 	p=&d1;	//C0类指针指向D1类对象
// 	fun(p);
// }

/*一般虚函数*/
/*不是重载声明而是覆盖*/
/*通过基类指针或引用 执行时会根据指针指向的对象的类 决定调用哪个函数*/
// #include <iostream>
// using namespace std;
// class A0	                                    //基类A0声明
// {public:
// 	virtual void display( )                     //虚成员函数
//      {cout<<"A0::display( )"<<endl;}
// };
// class A1: public A0	                            //公有派生
// { public:
//        void display( )  {  cout<<"A1::display( )"<<endl;  }
// };
// class D1: public A1                             //公有派生
// { public:
// 	  void display( ) {  cout<<"D1::display( )"<<endl;}
// };
// void fun(A0 *ptr)	                            //普通函数
// {    ptr->display( ); }
// int main( )
// {	A0 a0,  *p;                                 //声明基类对象和指针
// 	A1 a1;
// 	D1 d1;
// 	p= &a0;
// 	fun(p);	                                    //调用基类A0函数成员
// 	p= &a1;
// 	fun(p);	                                    //调用派生类A1函数成员
// 	p= &d1;
// 	fun(p);	                                    //调用派生类D1函数成员
// }

/*纯虚函数与抽象类*/
// #include <iostream>
// using namespace std;
// class A0                                         //抽象基类A0声明
// { public:
// 	virtual void display( )=0;                   //纯虚函数成员
// };
// class A1: public A0                              //公有派生
// { public:
// 	void display( ){cout<<"A1::display()"<<endl;}
// };
// class D1: public A1                              //公有派生
// { public:
// 	void display( ){cout<<"D1::display()"<<endl;}
// };
// void fun(A0 *ptr)
// {	ptr->display();   }
// int main( )
// {	A0 *p;	                                     //声明抽象基类指针
// 	A1 a1;
// 	D1 d1;
// 	p=&a1;
// 	fun(p);	                                     //调用派生类A1函数成员
// 	p= &d1;
// 	fun(p);	                                     //调用派生类D1函数成员
// }
