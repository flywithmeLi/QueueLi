#include <iostream>
#include"MyThread.h"
class AA: public ITask
{
public:
  AA(int a,int b)
  {
	  m_a=a;
	  m_b=b;
  }
  virtual ~AA()
  {
  }
public:
  int m_a;
  int m_b;
public:
void process()
{
	cout<<m_a<<"+"<<m_b<<"="<<m_a+m_b<<endl;
}
};
int  main()
{
	MyThread mythreadpool;
	mythreadpool.IsCreatThread(2,20);
		for(int i=0;i<1000;i++)
	{
		ITask *p=new AA(i,i+1);
		 mythreadpool.PushITask(p);
	}
	system("pause");
    return 0;
}