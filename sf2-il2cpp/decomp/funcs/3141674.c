// IPPEHAJADOO$$MBOEJOGCFHG @ RVA 0x3141674

void IPPEHAJADOO__MBOEJOGCFHG
               (OLKKAIFGGAK_o *BCKBBGCOMJD,NJPBHDMCLIN_o *AHEFOIOKDOK,ECENNHNBAME_o *NLEBDPHNIDI,
               int32_t OAFGMHOFEKM,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t KGJLIPJNNKB;
  System_Collections_Generic_List_KAFCPHCBLPL__o *__this;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04566758 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAFCPHCBLPL>_GetEnumerator__);
    DAT_04566758 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (((NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) &&
      (pEVar3 = (NLEBDPHNIDI->fields).DMGLMCBIAGL, pEVar3 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0)) &&
     (__this = (pEVar3->fields).NLPMEFHNMOI,
     __this != (System_Collections_Generic_List_KAFCPHCBLPL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<KAFCPHCBLPL>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_MoveNext__);
      pIVar1 = local_58.fields._current;
      if (!bVar2) {
        bVar2 = false;
        KGJLIPJNNKB = -1;
        goto LAB_03241774;
      }
      if ((KAFCPHCBLPL_o *)local_58.fields._current == (KAFCPHCBLPL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = KAFCPHCBLPL__PCPBHJGAOOH
                        ((KAFCPHCBLPL_o *)local_58.fields._current,AHEFOIOKDOK,(MethodInfo *)0x0);
    } while (!bVar2);
    bVar2 = ((KAFCPHCBLPL_Fields *)((long)pIVar1 + 0x10))->FMGLHJDODPA != false;
    KGJLIPJNNKB = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((KAFCPHCBLPL_Fields *)((long)pIVar1 + 0x10))->JAHFGPMFLGN).fields,
                             (MethodInfo *)0x0);
LAB_03241774:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_Dispose__);
    if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__NFJPOGJJEAK
                (BCKBBGCOMJD,NLEBDPHNIDI,OAFGMHOFEKM,bVar2,KGJLIPJNNKB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

