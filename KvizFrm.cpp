///-----------------------------------------------------------------
///
/// @file      KvizFrm.cpp
/// @author    ZK
/// Created:   18.12.2017 14:55:11
/// @section   DESCRIPTION
///            KvizFrm class implementation
///
///------------------------------------------------------------------

#include "KvizFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// KvizFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(KvizFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(KvizFrm::OnClose)
	EVT_ACTIVATE(KvizFrm::KvizFrmActivate)
	EVT_BUTTON(ID_WXBUTTON1,KvizFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON2,KvizFrm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON3,KvizFrm::WxButton3Click)
	EVT_BUTTON(ID_WXBUTTON4,KvizFrm::WxButton4Click)
	EVT_HYPERLINK(ID_WXHYPERLINKCTRL1,KvizFrm::WxHyperLinkCtrl1HyperLink)
END_EVENT_TABLE()
////Event Table End

KvizFrm::KvizFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

KvizFrm::~KvizFrm()
{
}

void KvizFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _("D"), wxPoint(52, 256), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton4"));

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _("C"), wxPoint(51, 212), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton3"));

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _("B"), wxPoint(51, 164), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton2"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("A"), wxPoint(53, 112), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton1"));

	WxHyperLinkCtrl1 = new wxHyperlinkCtrl(this, ID_WXHYPERLINKCTRL1, _("Moj GitHub =)"), _("http://wxdsgn.sf.net"), wxPoint(6, 307), wxSize(89, 17), wxNO_BORDER | wxHL_CONTEXTMENU, _("WxHyperLinkCtrl1"));
	WxHyperLinkCtrl1->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, true, _("MS Sans Serif")));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Žan Klasinc 2017"), wxPoint(473, 308), wxDefaultSize, 0, _("WxStaticText1"));

	WxEdit5 = new wxTextCtrl(this, ID_WXEDIT5, _("Odgovor D"), wxPoint(156, 254), wxSize(376, 27), 0, wxDefaultValidator, _("WxEdit5"));
	WxEdit5->Enable(false);

	WxEdit4 = new wxTextCtrl(this, ID_WXEDIT4, _("Odgovor C"), wxPoint(156, 206), wxSize(377, 27), 0, wxDefaultValidator, _("WxEdit4"));
	WxEdit4->Enable(false);

	WxEdit3 = new wxTextCtrl(this, ID_WXEDIT3, _("Odgovor B"), wxPoint(155, 160), wxSize(377, 27), 0, wxDefaultValidator, _("WxEdit3"));
	WxEdit3->Enable(false);

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _("Odgovor A"), wxPoint(156, 110), wxSize(377, 27), 0, wxDefaultValidator, _("WxEdit2"));
	WxEdit2->Enable(false);

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _("Vprasanje"), wxPoint(36, 41), wxSize(497, 40), 0, wxDefaultValidator, _("WxEdit1"));
	WxEdit1->Enable(false);

	SetTitle(_("Kviz"));
	SetIcon(wxNullIcon);
	SetSize(8,8,586,362);
	Center();
	
	////GUI Items Creation End
}

void KvizFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * KvizFrmActivate
 */
void KvizFrm::KvizFrmActivate(wxActivateEvent& event)
{
	// insert your code here
	WxEdit1->SetValue("Najstarejse slovensko mesto?");
	WxEdit2->SetValue("Maribor");
	WxEdit3->SetValue("Ptuj");
	WxEdit4->SetValue("Celje");
	WxEdit5->SetValue("Koper");
}

/*
 * WxHyperLinkCtrl1HyperLink
 */
void KvizFrm::WxHyperLinkCtrl1HyperLink(wxHyperlinkEvent& event)
{
	// insert your code here
	wxLaunchDefaultBrowser("https://github.com/SpaceMonkeyFX");
}

int t = 0;
int i = 0;
char rezultat[200]="0";


/*
 * WxButtonClick
 */
void KvizFrm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	i++;
	if (i==1) {
	   WxEdit1->SetValue("Kdo je avtor prve slovenske knjige?");
	   WxEdit2->SetValue("Srecko Kosovel");
	   WxEdit3->SetValue("France Preseren");
	   WxEdit4->SetValue("Primoz Trubar");
	   WxEdit5->SetValue("Ivan Cankar");
    }
    if (i==2) {
       WxEdit1->SetValue("Larry Page in Sergey Brin sta ustanovila katero podjetje?");
	   WxEdit2->SetValue("Google");
	   WxEdit3->SetValue("Intel");
	   WxEdit4->SetValue("Amazon");
	   WxEdit5->SetValue("eBay");
    }
    if (i==3) {
        t++;
	   WxEdit1->SetValue("Kako se imenuje grad na gorickem?");
	   WxEdit2->SetValue("Celjski grad");
	   WxEdit3->SetValue("Grad");
	   WxEdit4->SetValue("Ptujski grad");
	   WxEdit5->SetValue("Goricki grad");
    }
    if (i==4) {
	   WxEdit1->SetValue("Kako se imenuje najbolj priljubljena Linux distribucija?");
	   WxEdit2->SetValue("CentOS");
	   WxEdit3->SetValue("Unix");
	   WxEdit4->SetValue("Fedora");
	   WxEdit5->SetValue("Ubuntu");
    }
    if (i==5) {
        sprintf (rezultat, "Dosegli ste: %d tock.", t);
        WxEdit1->SetValue(rezultat);
        WxEdit2->SetValue(" ");
	    WxEdit3->SetValue(" ");
	    WxEdit4->SetValue(" ");
	    WxEdit5->SetValue(" ");
    }
}

void KvizFrm::WxButton2Click(wxCommandEvent& event)
{
	// insert your code here    
    i++;
	if (i==1) {
        t++;
	   WxEdit1->SetValue("Kdo je avtor prve slovenske knjige?");
	   WxEdit2->SetValue("Srecko Kosovel");
	   WxEdit3->SetValue("France Preseren");
	   WxEdit4->SetValue("Primoz Trubar");
	   WxEdit5->SetValue("Ivan Cankar");
    }
    if (i==2) {
	   WxEdit1->SetValue("Larry Page in Sergey Brin sta ustanovila katero podjetje?");
	   WxEdit2->SetValue("Google");
	   WxEdit3->SetValue("Intel");
	   WxEdit4->SetValue("Amazon");
	   WxEdit5->SetValue("eBay");
    }
    if (i==3) {
       WxEdit1->SetValue("Kako se imenuje grad na gorickem?");
	   WxEdit2->SetValue("Celjski grad");
	   WxEdit3->SetValue("Grad");
	   WxEdit4->SetValue("Ptujski grad");
	   WxEdit5->SetValue("Goricki grad");
    }
    if (i==4) {
        t++;
	   WxEdit1->SetValue("Kako se imenuje najbolj priljubljena Linux distribucija?");
	   WxEdit2->SetValue("CentOS");
	   WxEdit3->SetValue("Unix");
	   WxEdit4->SetValue("Fedora");
	   WxEdit5->SetValue("Ubuntu");
    }
    if (i==5) {
        sprintf (rezultat, "Dosegli ste: %d tock.", t);
        WxEdit1->SetValue(rezultat);
        WxEdit2->SetValue(" ");
	    WxEdit3->SetValue(" ");
	    WxEdit4->SetValue(" ");
	    WxEdit5->SetValue(" ");
    }
}

void KvizFrm::WxButton3Click(wxCommandEvent& event)
{
	// insert your code here
	i++;
	if (i==1) {
       WxEdit1->SetValue("Kdo je avtor prve slovenske knjige?");
	   WxEdit2->SetValue("Srecko Kosovel");
	   WxEdit3->SetValue("France Preseren");
	   WxEdit4->SetValue("Primoz Trubar");
	   WxEdit5->SetValue("Ivan Cankar");
    }
    if (i==2) {
        t++;
	   WxEdit1->SetValue("Larry Page in Sergey Brin sta ustanovila katero podjetje?");
	   WxEdit2->SetValue("Google");
	   WxEdit3->SetValue("Intel");
	   WxEdit4->SetValue("Amazon");
	   WxEdit5->SetValue("eBay");
    }
    if (i==3) {
	   WxEdit1->SetValue("Kako se imenuje grad na gorickem?");
	   WxEdit2->SetValue("Celjski grad");
	   WxEdit3->SetValue("Grad");
	   WxEdit4->SetValue("Ptujski grad");
	   WxEdit5->SetValue("Goricki grad");
    }
    if (i==4) {
	   WxEdit1->SetValue("Kako se imenuje najbolj priljubljena Linux distribucija?");
	   WxEdit2->SetValue("CentOS");
	   WxEdit3->SetValue("Unix");
	   WxEdit4->SetValue("Fedora");
	   WxEdit5->SetValue("Ubuntu");
    }
    if (i==5) {
        sprintf (rezultat, "Dosegli ste: %d tock.", t);
        WxEdit1->SetValue(rezultat);
        WxEdit2->SetValue(" ");
	    WxEdit3->SetValue(" ");
	    WxEdit4->SetValue(" ");
	    WxEdit5->SetValue(" ");
    }
}

void KvizFrm::WxButton4Click(wxCommandEvent& event)
{
	// insert your code here
	i++;
	if (i==1) {
	   WxEdit1->SetValue("Kdo je avtor prve slovenske knjige?");
	   WxEdit2->SetValue("Srecko Kosovel");
	   WxEdit3->SetValue("France Preseren");
	   WxEdit4->SetValue("Primoz Trubar");
	   WxEdit5->SetValue("Ivan Cankar");
    }
    if (i==2) {
	   WxEdit1->SetValue("Larry Page in Sergey Brin sta ustanovila katero podjetje?");
	   WxEdit2->SetValue("Google");
	   WxEdit3->SetValue("Intel");
	   WxEdit4->SetValue("Amazon");
	   WxEdit5->SetValue("eBay");
    }
    if (i==3) {
	   WxEdit1->SetValue("Kako se imenuje grad na gorickem?");
	   WxEdit2->SetValue("Celjski grad");
	   WxEdit3->SetValue("Grad");
	   WxEdit4->SetValue("Ptujski grad");
	   WxEdit5->SetValue("Goricki grad");
    }
    if (i==4) {
       WxEdit1->SetValue("Kako se imenuje najbolj priljubljena Linux distribucija?");
	   WxEdit2->SetValue("CentOS");
	   WxEdit3->SetValue("Unix");
	   WxEdit4->SetValue("Fedora");
	   WxEdit5->SetValue("Ubuntu");
    }
    if (i==5) {
         t++;
        sprintf (rezultat, "Dosegli ste: %d tock.", t);
        WxEdit1->SetValue(rezultat);
        WxEdit2->SetValue(" ");
	    WxEdit3->SetValue(" ");
	    WxEdit4->SetValue(" ");
	    WxEdit5->SetValue(" ");
    }
}
