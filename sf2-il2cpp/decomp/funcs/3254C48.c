// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$JPNLCEGEMMB @ RVA 0x3254C48

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JPNLCEGEMMB
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  AKOMJPINHEN_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this_01;
  
                    /* catch() { ... } // from try @ 03354c30 with catch @ 03354c5c */
  if ((DAT_04567157 & 1) == 0) {
                    /* try { // try from 03354c6c to 03454c73 has its CatchHandler @ 03354c88 */
                    /* try { // try from 03354c74 to 03454c7f has its CatchHandler @ 03354b14 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03354c80 to 03454c87 has its CatchHandler @ 03354c88 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03354c6c with catch @ 03354c88
                       catch(type#2 @ 00000000) { ... } // from try @ 03354c80 with catch @ 03354c88
                        */
    DAT_04567157 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)ELHFHAPBFMI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (ELHFHAPBFMI != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    iVar2 = (ELHFHAPBFMI->fields).FIACGKGFFJP;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
    bVar1 = TabView__get_InFocus((TabView_o *)ELHFHAPBFMI,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (AKOMJPINHEN_o *)0x0) goto LAB_03354d68;
      AKOMJPINHEN__JKHLALJIKOJ(__this_00,iVar2,(MethodInfo *)0x0);
    }
    __this_01 = (ELHFHAPBFMI->fields)._tabButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if ((__this_00 != (AKOMJPINHEN_o *)0x0) &&
       (iVar2 = AKOMJPINHEN__ILGBGMMJHMK(__this_00,iVar2,(MethodInfo *)0x0),
       __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton__SetUnreadedMsgCount
                (__this_01,iVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03354d68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

