// FlyWeight.cpp : 定义控制台应用程序的入口点。
//

#include "WebSiteFactory.h"

int main(int argc, char* argv[])
{
	WebSiteFactory* wf = new WebSiteFactory();

	WebSite* fx = wf->GetWebSiteCategory("产品展示");
	fx->Use(new User("小菜"));

	WebSite* fy = wf->GetWebSiteCategory("产品展示");
	fy->Use(new User("大鸟"));

	WebSite* fz = wf->GetWebSiteCategory("产品展示");
	fz->Use(new User("娇娇"));

	WebSite* fa = wf->GetWebSiteCategory("博客");
	fa->Use(new User("天天"));

	WebSite* fb = wf->GetWebSiteCategory("博客");
	fb->Use(new User("佳佳"));

	WebSite* fc = wf->GetWebSiteCategory("博客");
	fc->Use(new User("浩浩"));

	int size = wf->GetWebSiteCount();
	cout<<"网站分类总数："<<size<<endl;

	cin.ignore();
	return 0;
}

