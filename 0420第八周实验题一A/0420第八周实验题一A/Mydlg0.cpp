// Mydlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "0420�ڰ���ʵ����һA.h"
#include "Mydlg0.h"
#include "afxdialogex.h"


// Mydlg0 �Ի���

IMPLEMENT_DYNAMIC(Mydlg0, CDialogEx)

Mydlg0::Mydlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

Mydlg0::~Mydlg0()
{
}

void Mydlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(Mydlg0, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &Mydlg0::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &Mydlg0::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg0::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Mydlg0::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &Mydlg0::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &Mydlg0::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &Mydlg0::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &Mydlg0::OnBnClickedButton6)
END_MESSAGE_MAP()


// Mydlg0 ��Ϣ�������


void Mydlg0::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Mydlg0::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Mydlg0::OnBnClickedButton1()
{
	this->UpdateData(true);
	z = x + y;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Mydlg0::OnBnClickedButton2()
{
	this->UpdateData(true);
	z = x - y;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Mydlg0::OnBnClickedButton3()
{
	this->UpdateData(true);
	z = x * y;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Mydlg0::OnBnClickedButton4()
{
	this->UpdateData(true);
	if (y!=0)
	{
		z = x / y;
	}
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Mydlg0::OnBnClickedButton5() 
{
	this->UpdateData(true);
	if (x>=0)
	{
		z = sqrt(x);
	}
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Mydlg0::OnBnClickedButton6()
{
	this->UpdateData(true);
	if (x!=0)
	{
		z = 1 / x;
	}
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
