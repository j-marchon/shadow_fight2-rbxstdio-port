// KAHMAJKJMBK$$GIENGNEGHPJ @ RVA 0x34C063C

void KAHMAJKJMBK__GIENGNEGHPJ
               (KAHMAJKJMBK_o *__this,FCJBEKHDLAF_o *MHOFCOHFCGL,AFFHKININGD_o *FBFPLEFCDOK,
               MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  PAMEPBLOLPB_o *pPVar3;
  FCJBEKHDLAF_o **ppFVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456860e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    DAT_0456860e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  ppFVar4 = &(__this->fields).HPKHMGLOLPJ;
  *ppFVar4 = MHOFCOHFCGL;
  thunk_FUN_01c20e04(ppFVar4,MHOFCOHFCGL);
  (__this->fields).JIKKMEONEDH = false;
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    pPVar3 = (FBFPLEFCDOK->fields).JPBIBBBMCCD;
    if ((pPVar3 != (PAMEPBLOLPB_o *)0x0) && ((pPVar3->fields).DCNLAEJAKIE != false)) {
      iVar1 = (pPVar3->fields).KOANEAEMOOP;
      (__this->fields).CCMCDKDBNON = true;
      (__this->fields).KOANEAEMOOP = iVar1;
    }
    __this_00 = AFFHKININGD__HKNMJCKPHHC(FBFPLEFCDOK,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                               ), bVar2) {
        KAHMAJKJMBK__ANCGCCEOBAA(__this,(AJNNHGGLGIF_o *)local_48.fields._current,false,method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

