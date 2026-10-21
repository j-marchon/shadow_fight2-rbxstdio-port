// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GNOFHCGJLGB @ RVA 0x32563F4

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GNOFHCGJLGB
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  System_Action_o *pSVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04567160 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_ChatSFViewController>_get_Value__
                );
    DAT_04567160 = 1;
  }
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KGPGGBPLEFB;
  if (__this_00 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0
     ) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_GetEnumerator__
              );
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_MoveNext__
                        );
      if (!bVar1) break;
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__JPNLCEGEMMB
                ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)(ulong)bVar1,
                 (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)
                 local_50.fields._current.fields.value,in_x2);
    }
    System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_Dictionary_Enumerator<CKLIGNAPKFO,_ChatSFViewController>_Dispose__
              );
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__HEMCHIANOBD(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MBAONPCGIOF(__this,method_01);
    pSVar2 = (__this->fields).DAKAFGCLMPG;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

