// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$OnClose @ RVA 0x330199C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  BKKENCMPLLF_o *pBVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04567724 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    DAT_04567724 = 1;
  }
  pBVar1 = (__this->fields).FLLHHEODKPH;
  if (pBVar1 != (BKKENCMPLLF_o *)0x0) {
    pSVar2 = BKKENCMPLLF__MJBHKOJAFOH(pBVar1,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    }
    Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->KGOBMNCADHH = pSVar2
    ;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields,
                       pSVar2);
    pBVar1 = (__this->fields).FLLHHEODKPH;
    if (pBVar1 != (BKKENCMPLLF_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->static_fields->FIGLLHBDHCN =
           (pBVar1->fields)._OGOHLLOEANF_k__BackingField;
      thunk_FUN_01c20e04();
      Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

