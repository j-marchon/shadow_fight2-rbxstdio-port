// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$IFOKEBGLIIM @ RVA 0x32582E8

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__IFOKEBGLIIM
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,
               System_Collections_Generic_List_NBLEEDEAPHB__o *FCOIPKFOGMM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456717b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
    DAT_0456717b = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (FCOIPKFOGMM != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)FCOIPKFOGMM,
               Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
        Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__LBBMPJKOINK(__this,1.0,method_00);
        return;
      }
      if ((NBLEEDEAPHB_o *)local_48.fields._current == (NBLEEDEAPHB_o *)0x0) break;
      iVar1 = ((NBLEEDEAPHB_Fields *)((long)local_48.fields._current + 0x10))->KFHPFEKBDFM;
      if (iVar1 == 0) {
        Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__HMMKHMODHGF
                  (__this,(NBLEEDEAPHB_o *)local_48.fields._current,method);
      }
      else if (iVar1 == 2) {
        Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__ACICKHKFILK
                  (__this,(NBLEEDEAPHB_o *)local_48.fields._current,method);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

