// LPGPNBGHDBD$$OICLMNIHIJJ @ RVA 0x32292B4

JMDPBFOCHHP_ENBCJNLAHAC_o * LPGPNBGHDBD__OICLMNIHIJJ(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  JMDPBFOCHHP_o *pJVar3;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar4;
  ACHLOMELAJE_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566f8c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566f8c = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar3 != (JMDPBFOCHHP_o *)0x0) {
    if ((pJVar3->fields).OFMMMBIIDAE != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (((pJVar3 == (JMDPBFOCHHP_o *)0x0) ||
            (pJVar4 = (pJVar3->fields).OFMMMBIIDAE, pJVar4 == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) ||
           (__this = (pJVar4->fields).NPGALOBDIHL,
           __this == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0))
        goto LAB_03329474;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_38,(System_Collections_Generic_List_object__o *)__this,
                   Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_38,
                                  Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                                 ), pIVar1 = local_38.fields._current, bVar2) {
          if ((JMDPBFOCHHP_ENBCJNLAHAC_o *)local_38.fields._current ==
              (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                            (((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)
                             ((long)local_38.fields._current + 0x10))->ICECFDIHPHN,(MethodInfo *)0x0
                            );
          if ((!bVar2) &&
             (bVar2 = ACHLOMELAJE__NIEKNLDMABC
                                (__this_00,
                                 ((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)((long)pIVar1 + 0x10))->
                                 FPMPKOCHBEB,(MethodInfo *)0x0), !bVar2)) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                      );
            return (JMDPBFOCHHP_ENBCJNLAHAC_o *)pIVar1;
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                  );
      }
    }
    return (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0;
  }
LAB_03329474:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

