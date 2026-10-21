// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$UpdateContent @ RVA 0x32E96D0

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  bool value;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar3;
  MethodInfo *in_x4;
  EOLFEKNCPLM_o *pEVar4;
  OBCMNBDBNFO_o *pOVar5;
  
  if ((DAT_0456762b & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_0456762b = 1;
  }
  pNVar1 = (__this->fields)._simpleScroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar1,(MethodInfo *)0x0);
    pEVar4 = (__this->fields).super.MLAAJICBOAD;
    if (pEVar4 != (EOLFEKNCPLM_o *)0x0) {
      pOVar5 = (pEVar4->fields).PLJJCOHGICK;
      pMVar3 = extraout_x1;
      if (pOVar5 != (OBCMNBDBNFO_o *)0x0) {
        CJNHFNHJHPE = (pOVar5->fields).OKHEECOKPBF;
        if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,0,pSVar2,false,in_x4);
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL((pOVar5->fields).JEAFOMDCLHD,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,1,pSVar2,false,in_x4);
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL((pOVar5->fields).HHNJEEMAEIH,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,2,pSVar2,false,in_x4);
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL((pOVar5->fields).MGFICIOBKAI,(MethodInfo *)0x0);
        pMVar3 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,3,pSVar2,false,in_x4);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__HIILKMCLKKL
                  (__this,(pOVar5->fields).HHNJEEMAEIH,(pOVar5->fields).MGFICIOBKAI,pMVar3);
        pSVar2 = BJFCCEEPHOF__POMAAOILGAL((pOVar5->fields).GCELGJPAMAA,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO(__this,5,pSVar2,false,in_x4);
        pMVar3 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__GGCDBGHJCAF(__this,pMVar3);
      pNVar1 = (__this->fields)._simpleScroll;
      if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__RebuildLayout(pNVar1,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._simpleScroll;
        if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
          Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar1,0,0.0,8,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._simpleScroll;
          if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
            value = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(pNVar1,(MethodInfo *)0x0);
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)pNVar1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

