
// 0420�ڰ���ʵ����һAView.cpp : CMy0420�ڰ���ʵ����һAView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0420�ڰ���ʵ����һA.h"
#endif
#include "Mydlg0.h"
#include "0420�ڰ���ʵ����һADoc.h"
#include "0420�ڰ���ʵ����һAView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0420�ڰ���ʵ����һAView

IMPLEMENT_DYNCREATE(CMy0420�ڰ���ʵ����һAView, CView)

BEGIN_MESSAGE_MAP(CMy0420�ڰ���ʵ����һAView, CView)
	ON_COMMAND(ID_32771, &CMy0420�ڰ���ʵ����һAView::On32771)
END_MESSAGE_MAP()

// CMy0420�ڰ���ʵ����һAView ����/����

CMy0420�ڰ���ʵ����һAView::CMy0420�ڰ���ʵ����һAView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0420�ڰ���ʵ����һAView::~CMy0420�ڰ���ʵ����һAView()
{
}

BOOL CMy0420�ڰ���ʵ����һAView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0420�ڰ���ʵ����һAView ����

void CMy0420�ڰ���ʵ����һAView::OnDraw(CDC* /*pDC*/)
{
	CMy0420�ڰ���ʵ����һADoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0420�ڰ���ʵ����һAView ���

#ifdef _DEBUG
void CMy0420�ڰ���ʵ����һAView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0420�ڰ���ʵ����һAView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0420�ڰ���ʵ����һADoc* CMy0420�ڰ���ʵ����һAView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0420�ڰ���ʵ����һADoc)));
	return (CMy0420�ڰ���ʵ����һADoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0420�ڰ���ʵ����һAView ��Ϣ�������


void CMy0420�ڰ���ʵ����һAView::On32771()
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
	// TODO: �ڴ���������������
}
