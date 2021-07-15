// MySocket.cpp: 구현 파일
//

#include "pch.h"
#include "ProjectMFC.h"
#include "MySocket.h"
#include "ProjectMFCDlg.h"  //***다이얼로그 클래스를 포함해서 보내기/받기 함수만들예정


// CMySocket

CMySocket::CMySocket()
{
}

CMySocket::~CMySocket()
{
}


// CMySocket 멤버 함수
void CMySocket::OnAccept(int nErrorCode)
{
	if (nErrorCode == 0)
		((CProjectMFCDlg*)m_pWnd)->OnAccept();
}

void CMySocket::OnReceive(int nErrorCode)
{
	if (nErrorCode == 0)
		((CProjectMFCDlg*)m_pWnd)->OnReceive();
}

void CMySocket::OnSend(int nErrorCode)
{
	if (nErrorCode == 0)
		((CProjectMFCDlg*)m_pWnd)->OnSend();
}

void CMySocket::OnConnect(int nErrorCode)
{
	if (nErrorCode == 0)
		((CProjectMFCDlg*)m_pWnd)->OnConnect();
}