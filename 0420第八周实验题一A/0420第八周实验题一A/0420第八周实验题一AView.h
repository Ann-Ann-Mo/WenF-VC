
// 0420�ڰ���ʵ����һAView.h : CMy0420�ڰ���ʵ����һAView ��Ľӿ�
//

#pragma once


class CMy0420�ڰ���ʵ����һAView : public CView
{
protected: // �������л�����
	CMy0420�ڰ���ʵ����һAView();
	DECLARE_DYNCREATE(CMy0420�ڰ���ʵ����һAView)

// ����
public:
	CMy0420�ڰ���ʵ����һADoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0420�ڰ���ʵ����һAView();
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

#ifndef _DEBUG  // 0420�ڰ���ʵ����һAView.cpp �еĵ��԰汾
inline CMy0420�ڰ���ʵ����һADoc* CMy0420�ڰ���ʵ����һAView::GetDocument() const
   { return reinterpret_cast<CMy0420�ڰ���ʵ����һADoc*>(m_pDocument); }
#endif

