
// ProjectMFCDlg.h: 헤더 파일
//
#include "MySocket.h"

#pragma once


// CProjectMFCDlg 대화 상자
class CProjectMFCDlg : public CDialogEx
{
// 생성입니다.
public:
	CProjectMFCDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

	void OnAccept();
	void OnReceive();
	void OnSend();
	void OnConnect();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROJECTMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedBtnSend();
	afx_msg void OnBnClickedBtnListen();
	afx_msg void OnBnClickedBtnConnect();
	CListBox m_ctlRecv;
	CListBox m_ctlList;
	CString m_strMessage;

private:
	CMySocket m_sListenSocket;
	CMySocket m_sConnectSocket;
	BOOL m_bConnected;
public:
	CIPAddressCtrl m_ipControl;
	CString strName; //닉네임 edit control에서 값 받아서 넣을 변수 --현재 창 닉네임
	CString badWords[2] = { "심한욕", "나쁜말" };
	int badLen = sizeof(badWords) / sizeof(badWords[0]);
};
