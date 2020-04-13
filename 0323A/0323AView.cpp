
// 0323AView.cpp : CMy0323AView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0323A.h"
#endif

#include "0323ADoc.h"
#include "0323AView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323AView

IMPLEMENT_DYNCREATE(CMy0323AView, CView)

BEGIN_MESSAGE_MAP(CMy0323AView, CView)
	ON_COMMAND(ID_32771, &CMy0323AView::On32771)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy0323AView 构造/析构

CMy0323AView::CMy0323AView()
{
	CPoint point;
	int i = 0;
	int r = 50;
	while (point.x != 0 || point.y != 0 || point.y != 624 || point.x != 1417) {
		i++;
		r = r + 1;
		CRect rect(312 - r, 708 - r, 312 + r, 708 + r);
		cr.Add(rect);
	}
	// TODO: 在此处添加构造代码
}

CMy0323AView::~CMy0323AView()
{
}

BOOL CMy0323AView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0323AView 绘制

void CMy0323AView::OnDraw(CDC* pDC)
{
	CMy0323ADoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPoint point;
	int i = 0;
	while (point.x != 0 || point.y != 0 || point.y != 624 || point.x != 1417) {
		i++;
		pDC->Ellipse(cr[i]);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0323AView 诊断

#ifdef _DEBUG
void CMy0323AView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323AView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323ADoc* CMy0323AView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323ADoc)));
	return (CMy0323ADoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323AView 消息处理程序


void CMy0323AView::On32771()
{
	// TODO: 在此添加命令处理程序代码
}



