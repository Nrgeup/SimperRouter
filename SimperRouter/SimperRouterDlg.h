
// SimperRouterDlg.h : ͷ�ļ�
//
#if !defined(AFX_ROUTERDLG_H__749DBE39_021E_4E39_884C_4E45DD820B80__INCLUDED_)
#define AFX_ROUTERDLG_H__749DBE39_021E_4E39_884C_4E45DD820B80__INCLUDED_


#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "pcap.h"
#include "remote-ext.h"

#pragma comment(lib,"Wpcap.lib")
#pragma comment(lib,"Ws2_32.lib")

// CRouterDlg �Ի���
class CRouterDlg : public CDialogEx
{
// ����
public:
	CRouterDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SIMPERROUTER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	pcap_if_t* m_alldevs;		//ָ���豸�б��ײ���ָ��	
	pcap_if_t* m_selectdevs;	//��ǰѡ����豸�б��ָ��	
	CListBox m_Log;
	CListBox m_RouteTable;
	afx_msg void OnBnClickedStart();
	afx_msg void OnBnClickedAdd();
	CIPAddressCtrl m_Mask;
	CIPAddressCtrl m_Destination;
	CIPAddressCtrl m_NextHop;
	afx_msg void OnBnClickedDel();
	void OnTimer(UINT nIDEvent);
	afx_msg void OnBnClickedReturn();
	afx_msg void OnDestroy();
	CListBox mc_dev;
};


#endif // !defined(AFX_ROUTERDLG_H__749DBE39_021E_4E39_884C_4E45DD820B80__INCLUDED_)