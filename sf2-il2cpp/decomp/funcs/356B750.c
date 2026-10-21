// Nekki.SF2.GUI.Menu.MainMenu$$NFCPFGIBGCO @ RVA 0x356B750

void Nekki_SF2_GUI_Menu_MainMenu__NFCPFGIBGCO
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,int32_t DFOADJEEDKK,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  CHDGOFBHAFI_o *__this_02;
  
  if ((DAT_04568c3d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568c3d = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  (__this->fields).super.field_0x17 = 1;
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                      (__this_00,DFOADJEEDKK,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true
                       ,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_01 = (__this->fields)._menuLabel;
      if (__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0366b81c;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,true,(MethodInfo *)0x0);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_02 != (CHDGOFBHAFI_o *)0x0) {
      CHDGOFBHAFI__PNLACGIDHPI(__this_02,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0366b81c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

