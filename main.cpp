// FlyWeight.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "WebSiteFactory.h"

int main(int argc, char* argv[])
{
	WebSiteFactory* wf = new WebSiteFactory();

	WebSite* fx = wf->GetWebSiteCategory("��Ʒչʾ");
	fx->Use(new User("С��"));

	WebSite* fy = wf->GetWebSiteCategory("��Ʒչʾ");
	fy->Use(new User("����"));

	WebSite* fz = wf->GetWebSiteCategory("��Ʒչʾ");
	fz->Use(new User("����"));

	WebSite* fa = wf->GetWebSiteCategory("����");
	fa->Use(new User("����"));

	WebSite* fb = wf->GetWebSiteCategory("����");
	fb->Use(new User("�Ѽ�"));

	WebSite* fc = wf->GetWebSiteCategory("����");
	fc->Use(new User("�ƺ�"));

	int size = wf->GetWebSiteCount();
	cout<<"��վ����������"<<size<<endl;

	cin.ignore();
	return 0;
}

