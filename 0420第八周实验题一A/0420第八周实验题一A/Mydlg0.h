#pragma once


// Mydlg0 �Ի���

class Mydlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg0)

public:
	Mydlg0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlg0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	double x;
	afx_msg void OnEnChangeEdit2();
	double y;
	afx_msg void OnEnChangeEdit3();
	double z;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
};
