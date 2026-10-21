// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$BHLHBBKAFHH @ RVA 0x3254228

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__BHLHBBKAFHH
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *pSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_00;
  MethodInfo *in_x3;
  
  if ((DAT_04567154 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__
                );
    DAT_04567154 = 1;
  }
  pSVar2 = (__this->fields).KGPGGBPLEFB;
  if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,2,
                       Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                      );
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).KGPGGBPLEFB;
    if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0)
    {
      __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)
                  System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,2,
                             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_get_Item__
                            );
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GIAJHGPACMK
                (__this_00,(Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this_00,
                 (__this->fields).LMANLFKJNKN,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

