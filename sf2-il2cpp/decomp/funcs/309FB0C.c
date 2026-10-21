// FOKJBDHLIMG$$RandomizeObscuredVars @ RVA 0x309FB0C

void FOKJBDHLIMG__RandomizeObscuredVars(FOKJBDHLIMG_o *__this,MethodInfo *method)

{
  System_Action_HEFOANCOHDC__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar2;
  System_Action_HEFOANCOHDC__o *pSVar3;
  
  if ((DAT_04566134 & 1) == 0) {
    FUN_01bab630(&System_Action<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    FUN_01bab630(&Method_FOKJBDHLIMG_<>c_COBLHDIBMAB__);
    FUN_01bab630(&Method_FOKJBDHLIMG_<>c_HJNOOBPICAJ__);
    FUN_01bab630(&Method_FOKJBDHLIMG_<>c_NHIAHDNNNFP__);
    FUN_01bab630(&FOKJBDHLIMG_<>c_TypeInfo);
    DAT_04566134 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).FLADBMFBNIH;
  if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FOKJBDHLIMG_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_0;
  if (pSVar3 == (System_Action_HEFOANCOHDC__o *)0x0) {
    if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FOKJBDHLIMG_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_HEFOANCOHDC__o *)thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar2,(System_Action_T__o *)pSVar3,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    pSVar2 = (__this->fields).CNLHOAHDHCF;
    if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_1;
    if (pSVar3 == (System_Action_HEFOANCOHDC__o *)0x0) {
      if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_HEFOANCOHDC__o *)
               thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_1;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)pSVar2,(System_Action_T__o *)pSVar3,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
      pSVar2 = (__this->fields).ODLBEHFGJJE;
      if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_2;
      if (pSVar3 == (System_Action_HEFOANCOHDC__o *)0x0) {
        if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = (System_Action_HEFOANCOHDC__o *)
                 thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar1 = &FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_2;
        *ppSVar1 = pSVar3;
        thunk_FUN_01c20e04(ppSVar1,pSVar3);
      }
      if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar2,(System_Action_T__o *)pSVar3,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

