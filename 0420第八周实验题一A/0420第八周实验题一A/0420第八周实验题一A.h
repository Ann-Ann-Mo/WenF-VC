
// 0420�ڰ���ʵ����һA.h : 0420�ڰ���ʵ����һA Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0420�ڰ���ʵ����һAApp:
// �йش����ʵ�֣������ 0420�ڰ���ʵ����һA.cpp
//

class CMy0420�ڰ���ʵ����һAApp : public CWinAppEx
{
public:
	CMy0420�ڰ���ʵ����һAApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0420�ڰ���ʵ����һAApp theApp;
