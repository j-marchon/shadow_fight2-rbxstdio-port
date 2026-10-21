// EGMONPGHHDP$$BILAAEOFDBJ @ RVA 0x304A240

JMDPBFOCHHP_CKEMIAEPGKD_array * EGMONPGHHDP__BILAAEOFDBJ(EGMONPGHHDP_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  JMDPBFOCHHP_CKEMIAEPGKD_array *pJVar3;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar4;
  System_Collections_Generic_List_JMDPBFOCHHP_CKEMIAEPGKD__o *__this_01;
  long lVar5;
  undefined8 uVar6;
  JMDPBFOCHHP_JMEJFGKJNEA_o *pJVar7;
  JMDPBFOCHHP_CKEMIAEPGKD_o **ppJVar8;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565e0c & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_CKEMIAEPGKD___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CKEMIAEPGKD>_GetEnumerator__);
    DAT_04565e0c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pJVar3 = (JMDPBFOCHHP_CKEMIAEPGKD_array *)FUN_01bab718(JMDPBFOCHHP_CKEMIAEPGKD___TypeInfo,2);
  if ((__this->fields)._BJALAALAIDH_k__BackingField == (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) {
    return pJVar3;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    iVar4 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    pJVar7 = (__this->fields)._BJALAALAIDH_k__BackingField;
    if ((pJVar7 != (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) &&
       (__this_01 = (pJVar7->fields).BJOLIBMAAAM,
       __this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_CKEMIAEPGKD__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_CKEMIAEPGKD>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_MoveNext__
                               ), pIVar1 = local_60.fields._current, bVar2) {
        if ((JMDPBFOCHHP_CKEMIAEPGKD_o *)local_60.fields._current ==
            (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (iVar4 < ((JMDPBFOCHHP_CKEMIAEPGKD_Fields *)((long)local_60.fields._current + 0x10))->
                    PMHJGJHCNHE) {
          if (((JMDPBFOCHHP_CKEMIAEPGKD_Fields *)((long)local_60.fields._current + 0x10))->
              LKENIPBKAJI <= iVar4) {
            if (pJVar3 == (JMDPBFOCHHP_CKEMIAEPGKD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            lVar5 = thunk_FUN_01bda71c(local_60.fields._current,
                                       (((pJVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) {
              uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar6,0);
            }
            if ((uint)pJVar3->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pJVar3->m_Items[1] = (JMDPBFOCHHP_CKEMIAEPGKD_o *)pIVar1;
            thunk_FUN_01c20e04(pJVar3->m_Items + 1,pIVar1);
          }
          break;
        }
        if (pJVar3 == (JMDPBFOCHHP_CKEMIAEPGKD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar5 = thunk_FUN_01bda71c(local_60.fields._current,
                                   (((pJVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)pJVar3->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pJVar3->m_Items[0] = (JMDPBFOCHHP_CKEMIAEPGKD_o *)pIVar1;
        thunk_FUN_01c20e04(pJVar3->m_Items,pIVar1);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CKEMIAEPGKD>_Dispose__
                );
      if (pJVar3 != (JMDPBFOCHHP_CKEMIAEPGKD_array *)0x0) {
        if (1 < (uint)pJVar3->max_length) {
          ppJVar8 = &(__this->fields).CPHIBOEEEFM;
          *ppJVar8 = pJVar3->m_Items[1];
          thunk_FUN_01c20e04(ppJVar8);
          return pJVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

