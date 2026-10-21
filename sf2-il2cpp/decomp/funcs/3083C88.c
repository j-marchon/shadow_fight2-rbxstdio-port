// KFCFGKEHPNK$$FGFOHBLCFKD @ RVA 0x3083C88

uint32_t KFCFGKEHPNK__FGFOHBLCFKD(int32_t JLAFGLDIFOC,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *__this;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar3;
  uint32_t uVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566015 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_LDOMJFAAGAB>_GetEnumerator__);
    DAT_04566015 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 != (JMDPBFOCHHP_o *)0x0) {
    pJVar3 = (pJVar2->fields)._LGFNDLOCGPB_k__BackingField;
    if (pJVar3 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0) {
LAB_03183d98:
      uVar4 = 0x14;
    }
    else {
      __this = (pJVar3->fields).GDIJHLHCEDA;
      if (__this == (System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *)0x0)
      goto LAB_03183db4;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_LDOMJFAAGAB>_GetEnumerator__);
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_Dispose__
                    );
          goto LAB_03183d98;
        }
        if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((ulong)*(uint *)&local_38.fields._current[1].klass != (long)JLAFGLDIFOC);
      uVar4 = *(uint32_t *)&local_38.fields._current[1].monitor;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_Dispose__
                );
    }
    return uVar4;
  }
LAB_03183db4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

