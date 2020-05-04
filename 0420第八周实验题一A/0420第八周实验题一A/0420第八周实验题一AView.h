
// 0420第八周实验题一AView.h : CMy0420第八周实验题一AView 类的接口
//

#pragma once


class CMy0420第八周实验题一AView : public CView
{
protected: // 仅从序列化创建
	CMy0420第八周实验题一AView();
	DECLARE_DYNCREATE(CMy0420第八周实验题一AView)

// 特性
public:
	CMy0420第八周实验题一ADoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0420第八周实验题一AView();
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

#ifndef _DEBUG  // 0420第八周实验题一AView.cpp 中的调试版本
inline CMy0420第八周实验题一ADoc* CMy0420第八周实验题一AView::GetDocument() const
   { return reinterpret_cast<CMy0420第八周实验题一ADoc*>(m_pDocument); }
#endif

