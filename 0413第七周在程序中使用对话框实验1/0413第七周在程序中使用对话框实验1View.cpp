
// 0413第七周在程序中使用对话框实验1View.cpp : CMy0413第七周在程序中使用对话框实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0413第七周在程序中使用对话框实验1.h"
#endif
#include"MyDlg0.h"
#include "0413第七周在程序中使用对话框实验1Doc.h"
#include "0413第七周在程序中使用对话框实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0413第七周在程序中使用对话框实验1View

IMPLEMENT_DYNCREATE(CMy0413第七周在程序中使用对话框实验1View, CView)

BEGIN_MESSAGE_MAP(CMy0413第七周在程序中使用对话框实验1View, CView)
	ON_COMMAND(ID_32771, &CMy0413第七周在程序中使用对话框实验1View::On32771)
END_MESSAGE_MAP()

// CMy0413第七周在程序中使用对话框实验1View 构造/析构

CMy0413第七周在程序中使用对话框实验1View::CMy0413第七周在程序中使用对话框实验1View()
{
	// TODO: 在此处添加构造代码

}

CMy0413第七周在程序中使用对话框实验1View::~CMy0413第七周在程序中使用对话框实验1View()
{
}

BOOL CMy0413第七周在程序中使用对话框实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0413第七周在程序中使用对话框实验1View 绘制

void CMy0413第七周在程序中使用对话框实验1View::OnDraw(CDC* /*pDC*/)
{
	CMy0413第七周在程序中使用对话框实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0413第七周在程序中使用对话框实验1View 诊断

#ifdef _DEBUG
void CMy0413第七周在程序中使用对话框实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413第七周在程序中使用对话框实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413第七周在程序中使用对话框实验1Doc* CMy0413第七周在程序中使用对话框实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413第七周在程序中使用对话框实验1Doc)));
	return (CMy0413第七周在程序中使用对话框实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413第七周在程序中使用对话框实验1View 消息处理程序


void CMy0413第七周在程序中使用对话框实验1View::On32771()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int X, Y,SUM;
		X = dlg.x;
		Y = dlg.y;
		SUM = dlg.sum;
		SUM = X + Y;
	}
}
