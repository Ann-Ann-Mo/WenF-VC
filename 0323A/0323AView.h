
// 0323AView.h : CMy0323AView 类的接口
//

#pragma once


class CMy0323AView : public CView
{
protected: // 仅从序列化创建
	CMy0323AView();
	DECLARE_DYNCREATE(CMy0323AView)

	// 特性
public:
	CMy0323ADoc* GetDocument() const;
	
// 操作
public:
	CArray<CRect, CRect> cr;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0323AView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	
};

#ifndef _DEBUG  // 0323AView.cpp 中的调试版本
inline CMy0323ADoc* CMy0323AView::GetDocument() const
   { return reinterpret_cast<CMy0323ADoc*>(m_pDocument); }
#endif

