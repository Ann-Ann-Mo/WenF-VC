
// 0413�������ڳ�����ʹ�öԻ���ʵ��1View.cpp : CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0413�������ڳ�����ʹ�öԻ���ʵ��1.h"
#endif
#include"MyDlg0.h"
#include "0413�������ڳ�����ʹ�öԻ���ʵ��1Doc.h"
#include "0413�������ڳ�����ʹ�öԻ���ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View

IMPLEMENT_DYNCREATE(CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View, CView)
	ON_COMMAND(ID_32771, &CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::On32771)
END_MESSAGE_MAP()

// CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View ����/����

CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::~CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View()
{
}

BOOL CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View ����

void CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy0413�������ڳ�����ʹ�öԻ���ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View ���

#ifdef _DEBUG
void CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413�������ڳ�����ʹ�öԻ���ʵ��1Doc* CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413�������ڳ�����ʹ�öԻ���ʵ��1Doc)));
	return (CMy0413�������ڳ�����ʹ�öԻ���ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View ��Ϣ�������


void CMy0413�������ڳ�����ʹ�öԻ���ʵ��1View::On32771()
{
	// TODO: �ڴ���������������
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
