// ECENNHNBAME$$CNBIDPCPDJN @ RVA 0x3019910

GBKCLIFGIFN_o *
ECENNHNBAME__CNBIDPCPDJN
          (System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *PFDEAPMMFAP;
  bool bVar2;
  int32_t iVar3;
  GBKCLIFGIFN_o *pGVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK_00;
  undefined1 auVar6 [16];
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = AHEFOIOKDOK;
  if ((DAT_04565bf8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    auVar6 = FUN_01bab630(&StringLiteral_17320);
    DAT_04565bf8 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
LAB_03119a00:
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    PFDEAPMMFAP = local_60.fields._current;
    if (!bVar2) {
      pGVar4 = (GBKCLIFGIFN_o *)0x0;
      goto LAB_03119ac0;
    }
    if ((IENLNOEDCFF_o *)local_60.fields._current == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)local_60.fields._current,(MethodInfo *)0x0);
    if (iVar3 == 8) {
      bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
      if (((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).naturalAligment < bVar1) ||
         ((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_17320,(MethodInfo *)0x0);
        goto LAB_03119a00;
      }
      AHEFOIOKDOK_00 = ((IENLNOEDCFF_o *)((long)PFDEAPMMFAP + 0x28))->monitor;
      pMVar5 = extraout_x1;
      if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar5 = extraout_x1_01;
      }
      pGVar4 = ECENNHNBAME__CNBIDPCPDJN(AHEFOIOKDOK_00,pMVar5);
    }
    else {
      pMVar5 = extraout_x1;
      if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar5 = extraout_x1_00;
      }
      pGVar4 = ECENNHNBAME__NBIECKIMNNK((IENLNOEDCFF_o *)PFDEAPMMFAP,pMVar5);
    }
    if (pGVar4 != (GBKCLIFGIFN_o *)0x0) {
LAB_03119ac0:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__)
      ;
      return pGVar4;
    }
  } while( true );
}

