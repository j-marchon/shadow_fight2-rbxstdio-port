// EGMONPGHHDP$$OKBKFJKEAAG @ RVA 0x304A71C

JMDPBFOCHHP_CKEMIAEPGKD_o * EGMONPGHHDP__OKBKFJKEAAG(EGMONPGHHDP_o *__this,MethodInfo *method)

{
  bool bVar1;
  KEGDLHPEJBG_o *pKVar2;
  KKLJIDJBFEI_o *pKVar3;
  int64_t iVar4;
  System_Collections_Generic_List_JMDPBFOCHHP_CKEMIAEPGKD__o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar5;
  MethodInfo *method_00;
  JMDPBFOCHHP_JMEJFGKJNEA_o *pJVar6;
  JMDPBFOCHHP_CKEMIAEPGKD_o **ppJVar7;
  undefined1 auVar8 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04565e14 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_get_Current__
                );
    auVar8 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_CKEMIAEPGKD>_GetEnumerator__
                         );
    DAT_04565e14 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._BJALAALAIDH_k__BackingField == (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) {
    pJVar5 = (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0;
  }
  else {
    ppJVar7 = &(__this->fields).CPHIBOEEEFM;
    if ((*ppJVar7 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) ||
       (pKVar2 = EGMONPGHHDP__NJNOLNHFOPK(auVar8._0_8_,auVar8._8_8_), pKVar2 == (KEGDLHPEJBG_o *)0x0
       )) {
      pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar3 == (KKLJIDJBFEI_o *)0x0) goto LAB_0314a890;
      iVar4 = KKLJIDJBFEI__HEDLNKCNMCI(pKVar3,(MethodInfo *)0x0);
      pJVar6 = (__this->fields)._BJALAALAIDH_k__BackingField;
      if ((pJVar6 == (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) ||
         (__this_00 = (pJVar6->fields).BJOLIBMAAAM,
         __this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_CKEMIAEPGKD__o *)0x0))
      goto LAB_0314a890;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_CKEMIAEPGKD>_GetEnumerator__);
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_MoveNext__
                          );
        if (!bVar1) goto LAB_0314a85c;
        if ((JMDPBFOCHHP_CKEMIAEPGKD_o *)local_38.fields._current ==
            (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((iVar4 < ((JMDPBFOCHHP_CKEMIAEPGKD_Fields *)((long)local_38.fields._current + 0x10))
                        ->LKENIPBKAJI) ||
              (((JMDPBFOCHHP_CKEMIAEPGKD_Fields *)((long)local_38.fields._current + 0x10))->
               PMHJGJHCNHE <= iVar4));
      *ppJVar7 = (JMDPBFOCHHP_CKEMIAEPGKD_o *)local_38.fields._current;
      thunk_FUN_01c20e04(ppJVar7,local_38.fields._current);
LAB_0314a85c:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_Dispose__
                );
    }
    else {
      pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar3 == (KKLJIDJBFEI_o *)0x0) {
LAB_0314a890:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar4 = KKLJIDJBFEI__HEDLNKCNMCI(pKVar3,(MethodInfo *)0x0);
      if (*ppJVar7 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) goto LAB_0314a890;
      if (((*ppJVar7)->fields).PMHJGJHCNHE <= iVar4) {
        (__this->fields).CPHIBOEEEFM = (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0;
        thunk_FUN_01c20e04(ppJVar7,0);
        EGMONPGHHDP__ENAIAIJBNJB(__this,method_00);
      }
    }
    pJVar5 = *ppJVar7;
  }
  return pJVar5;
}

