// GCIFMNHADDF$$MCKCJDBPAFB @ RVA 0x31AB278

void GCIFMNHADDF__MCKCJDBPAFB(GCIFMNHADDF_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_00;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566b42 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<GCIFMNHADDF_NFAHLBCFIPD>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<GCIFMNHADDF_NFAHLBCFIPD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<GCIFMNHADDF_NFAHLBCFIPD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<GCIFMNHADDF_NFAHLBCFIPD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<GCIFMNHADDF_NFAHLBCFIPD>_GetEnumerator__);
    DAT_04566b42 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).EDBKLOENEPB,
                     Method_DJNBJHPDKDP_OBECCOPBADO<GCIFMNHADDF_NFAHLBCFIPD>__);
  __this_01 = (__this->fields).EDBKLOENEPB;
  if (__this_01 != (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)0x0) {
    bVar1 = !bVar1;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<GCIFMNHADDF_NFAHLBCFIPD>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<GCIFMNHADDF_NFAHLBCFIPD>_MoveNext__
                        );
      if (!bVar2) goto LAB_032ab34c;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(char *)&local_38.fields._current[1].monitor != '\0');
    bVar1 = false;
LAB_032ab34c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<GCIFMNHADDF_NFAHLBCFIPD>_Dispose__)
    ;
    __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_DialogCanvasController__EnableBackground
                (__this_00,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

