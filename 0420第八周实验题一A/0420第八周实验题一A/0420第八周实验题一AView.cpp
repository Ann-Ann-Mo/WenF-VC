
// 0420第八周实验题一AView.cpp : CMy0420第八周实验题一AView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0420第八周实验题一A.h"
#endif
#include "Mydlg0.h"
#include "0420第八周实验题一ADoc.h"
#include "0420第八周实验题一AView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0420第八周实验题一AView

IMPLEMENT_DYNCREATE(CMy0420第八周实验题一AView, CView)

BEGIN_MESSAGE_MAP(CMy0420第八周实验题一AView, CView)
	ON_COMMAND(ID_32771, &CMy0420第八周实验题一AView::On32771)
END_MESSAGE_MAP()

// CMy0420第八周实验题一AView 构造/析构

CMy0420第八周实验题一AView::CMy0420第八周实验题一AView()
{
	// TODO: 在此处添加构造代码

}

CMy0420第八周实验题一AView::~CMy0420第八周实验题一AView()
{
}

BOOL CMy0420第八周实验题一AView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0420第八周实验题一AView 绘制

void CMy0420第八周实验题一AView::OnDraw(CDC* /*pDC*/)
{
	CMy0420第八周实验题一ADoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0420第八周实验题一AView 诊断

#ifdef _DEBUG
void CMy0420第八周实验题一AView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0420第八周实验题一AView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0420第八周实验题一ADoc* CMy0420第八周实验题一AView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0420第八周实验题一ADoc)));
	return (CMy0420第八周实验题一ADoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0420第八周实验题一AView 消息处理程序


void CMy0420第八周实验题一AView::On32771()
{
	Mydlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int X, Y, Z;
		X = dlg.x;
		Y = dlg.y;
		Z = dlg.z;
	}
	// TODO: 在此添加命令处理程序代码
}
