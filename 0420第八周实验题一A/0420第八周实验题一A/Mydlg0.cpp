// Mydlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "0420第八周实验题一A.h"
#include "Mydlg0.h"
#include "afxdialogex.h"


// Mydlg0 对话框

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


// Mydlg0 消息处理程序


void Mydlg0::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void Mydlg0::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void Mydlg0::OnBnClickedButton1()
{
	this->UpdateData(true);
	z = x + y;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Mydlg0::OnBnClickedButton2()
{
	this->UpdateData(true);
	z = x - y;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Mydlg0::OnBnClickedButton3()
{
	this->UpdateData(true);
	z = x * y;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Mydlg0::OnBnClickedButton4()
{
	this->UpdateData(true);
	if (y!=0)
	{
		z = x / y;
	}
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Mydlg0::OnBnClickedButton5() 
{
	this->UpdateData(true);
	if (x>=0)
	{
		z = sqrt(x);
	}
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Mydlg0::OnBnClickedButton6()
{
	this->UpdateData(true);
	if (x!=0)
	{
		z = 1 / x;
	}
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
