
// 0323AView.cpp : CMy0323AView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CMy0323AView ����/����

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
	// TODO: �ڴ˴���ӹ������
}

CMy0323AView::~CMy0323AView()
{
}

BOOL CMy0323AView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0323AView ����

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
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0323AView ���

#ifdef _DEBUG
void CMy0323AView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323AView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323ADoc* CMy0323AView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323ADoc)));
	return (CMy0323ADoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323AView ��Ϣ�������


void CMy0323AView::On32771()
{
	// TODO: �ڴ���������������
}



