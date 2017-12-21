//---------------------------------------------------------------------------
//
// Name:        KvizApp.h
// Author:      ZK
// Created:     18.12.2017 14:55:11
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __KVIZFRMApp_h__
#define __KVIZFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class KvizFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
