
// 0323A.h : 0323A Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0323AApp:
// �йش����ʵ�֣������ 0323A.cpp
//

class CMy0323AApp : public CWinAppEx
{
public:
	CMy0323AApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0323AApp theApp;
