//---------------------------------------------------------------------------
//
// Name:        KvizApp.cpp
// Author:      ZK
// Created:     18.12.2017 14:55:11
// Description: 
//
//---------------------------------------------------------------------------

#include "KvizApp.h"
#include "KvizFrm.h"

IMPLEMENT_APP(KvizFrmApp)

bool KvizFrmApp::OnInit()
{
    KvizFrm* frame = new KvizFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int KvizFrmApp::OnExit()
{
	return 0;
}
