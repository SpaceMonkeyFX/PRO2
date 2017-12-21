///-----------------------------------------------------------------
///
/// @file      KvizFrm.h
/// @author    ZK
/// Created:   18.12.2017 14:55:11
/// @section   DESCRIPTION
///            KvizFrm class declaration
///
///------------------------------------------------------------------

#ifndef __KVIZFRM_H__
#define __KVIZFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/button.h>
#include <wx/hyperlink.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
////Header Include End

////Dialog Style Start
#undef KvizFrm_STYLE
#define KvizFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class KvizFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		KvizFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Kviz"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = KvizFrm_STYLE);
		virtual ~KvizFrm();
		void KvizFrmActivate(wxActivateEvent& event);
		void WxHyperLinkCtrl1HyperLink(wxHyperlinkEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *WxButton4;
		wxButton *WxButton3;
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxHyperlinkCtrl *WxHyperLinkCtrl1;
		wxStaticText *WxStaticText1;
		wxTextCtrl *WxEdit5;
		wxTextCtrl *WxEdit4;
		wxTextCtrl *WxEdit3;
		wxTextCtrl *WxEdit2;
		wxTextCtrl *WxEdit1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBUTTON4 = 1022,
			ID_WXBUTTON3 = 1021,
			ID_WXBUTTON2 = 1020,
			ID_WXBUTTON1 = 1019,
			ID_WXHYPERLINKCTRL1 = 1018,
			ID_WXSTATICTEXT1 = 1017,
			ID_WXEDIT5 = 1016,
			ID_WXEDIT4 = 1015,
			ID_WXEDIT3 = 1014,
			ID_WXEDIT2 = 1012,
			ID_WXEDIT1 = 1011,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
