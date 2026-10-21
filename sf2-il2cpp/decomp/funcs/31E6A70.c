// PNGKLCHKPEO$$RandomizeObscuredVars @ RVA 0x31E6A70

void PNGKLCHKPEO__RandomizeObscuredVars(PNGKLCHKPEO_o *__this,MethodInfo *method)

{
  FKGKLILLOBG_o *pFVar1;
  System_Action_PNGKLCHKPEO_PLCIDMPOECL__o **ppSVar2;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar3;
  System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar4;
  
  if ((DAT_04566d64 & 1) == 0) {
    FUN_01bab630(&System_Action<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_ForEach__);
    FUN_01bab630(&Method_PNGKLCHKPEO_<>c_AOPHCHOCAMJ__);
    FUN_01bab630(&Method_PNGKLCHKPEO_<>c_KICDPDGGBJP__);
    FUN_01bab630(&PNGKLCHKPEO_<>c_TypeInfo);
    DAT_04566d64 = 1;
  }
  pFVar1 = (__this->fields).PHBEOHIEDOP;
  if (pFVar1 != (FKGKLILLOBG_o *)0x0) {
    FKGKLILLOBG__GPJJDLBJOAL(pFVar1,(MethodInfo *)0x0);
    pFVar1 = (__this->fields).KIFDEDHNJCA;
    if (pFVar1 != (FKGKLILLOBG_o *)0x0) {
      FKGKLILLOBG__GPJJDLBJOAL(pFVar1,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).EFNHMHALHPE;
      if ((PNGKLCHKPEO_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = PNGKLCHKPEO_<>c_TypeInfo->static_fields->__9__35_0;
      if (pSVar4 == (System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
        if ((PNGKLCHKPEO_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = (System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *)
                 thunk_FUN_01bda818(System_Action<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &PNGKLCHKPEO_<>c_TypeInfo->static_fields->__9__35_0;
        *ppSVar2 = pSVar4;
        thunk_FUN_01c20e04(ppSVar2,pSVar4);
      }
      if (pSVar3 != (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar3,(System_Action_T__o *)pSVar4,
                   Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_ForEach__);
        pSVar3 = (__this->fields).PCHEGEBOKAF;
        if ((PNGKLCHKPEO_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = PNGKLCHKPEO_<>c_TypeInfo->static_fields->__9__35_1;
        if (pSVar4 == (System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
          if ((PNGKLCHKPEO_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar4 = (System_Action_PNGKLCHKPEO_PLCIDMPOECL__o *)
                   thunk_FUN_01bda818(System_Action<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar2 = &PNGKLCHKPEO_<>c_TypeInfo->static_fields->__9__35_1;
          *ppSVar2 = pSVar4;
          thunk_FUN_01c20e04(ppSVar2,pSVar4);
        }
        if (pSVar3 != (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)0x0) {
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)pSVar3,
                     (System_Action_T__o *)pSVar4,
                     Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_ForEach__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

