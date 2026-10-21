// PNGKLCHKPEO$$OKODHBNONJA @ RVA 0x31E52DC

PNGKLCHKPEO_LGAFLKDKBPL_o *
PNGKLCHKPEO__OKODHBNONJA
          (PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,
          System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *BHFLMNBKDAA,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  bool bVar2;
  OLKKAIFGGAK_o *pOVar3;
  PJKHAJKEHEL_o *pPVar4;
  long lVar5;
  FCJBEKHDLAF_o *pFVar6;
  GBJGJEGPHKD_o *pGVar7;
  OLKKAIFGGAK_o *pOVar8;
  Il2CppClass *pIVar9;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566d66 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_get_Current__
                );
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_12160);
    DAT_04566d66 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar6 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (pFVar6 != (FCJBEKHDLAF_o *)0x0) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_032e5504:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar5 = 0xb8;
    if ((AHEFOIOKDOK->fields).HJPOJOPKEKI != false) {
      lVar5 = 0xb0;
    }
    pOVar3 = *(OLKKAIFGGAK_o **)((long)&pFVar6->klass + lVar5);
    if ((pOVar3 != (OLKKAIFGGAK_o *)0x0) &&
       (pOVar3 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar3,6,(MethodInfo *)0x0),
       pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
      if (BHFLMNBKDAA == (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0)
      goto LAB_032e5504;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)BHFLMNBKDAA,
                 Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_MoveNext__
                               ), pIVar1 = local_60.fields._current, bVar2) {
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar7 = local_60.fields._current[1].monitor;
        if (pGVar7 == (pOVar3->fields).HMIAFJALFCJ) {
          if (pGVar7 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar8 = (pGVar7->fields).KOHECBJAFKG;
          if (pOVar8 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar4 = (pOVar8->fields).FAPMJJBOFEF;
          if (pPVar4 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar5 = (*(pPVar4->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                            (pPVar4,StringLiteral_12160,0,
                             (pPVar4->klass->vtable)._4_CJPIJKJDHGI.method);
          if (((lVar5 != 0) &&
              (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).HLKOPFFIMPF,(MethodInfo *)0x0),
              !bVar2)) &&
             (bVar2 = System_String__op_Inequality
                                (*(System_String_o **)(lVar5 + 0x38),(__this->fields).HLKOPFFIMPF,
                                 (MethodInfo *)0x0), !bVar2)) {
            pIVar9 = pIVar1[1].klass;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_Dispose__
                      );
            return (PNGKLCHKPEO_LGAFLKDKBPL_o *)pIVar9;
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<PNGKLCHKPEO_PLCIDMPOECL>_Dispose__
                );
    }
  }
  return (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0;
}

