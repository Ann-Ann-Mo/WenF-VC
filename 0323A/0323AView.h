
// 0323AView.h : CMy0323AView ��Ľӿ�
//

#pragma once


class CMy0323AView : public CView
{
protected: // �������л�����
	CMy0323AView();
	DECLARE_DYNCREATE(CMy0323AView)

	// ����
public:
	CMy0323ADoc* GetDocument() const;
	
// ����
public:
	CArray<CRect, CRect> cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0323AView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	
};

#ifndef _DEBUG  // 0323AView.cpp �еĵ��԰汾
inline CMy0323ADoc* CMy0323AView::GetDocument() const
   { return reinterpret_cast<CMy0323ADoc*>(m_pDocument); }
#endif

