// PFOMHOLCODE$$PKIFMKGDJJN @ RVA 0x334EB38

void PFOMHOLCODE__PKIFMKGDJJN(PFOMHOLCODE_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  System_Action_PFOMHOLCODE_JLFFOOCNIIO__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  PFOMHOLCODE_JBJOKPCAJEP_o *pPVar3;
  System_Collections_Generic_List_PFOMHOLCODE_JLFFOOCNIIO__o *__this_00;
  System_Action_PFOMHOLCODE_JLFFOOCNIIO__o *action;
  
  if ((DAT_04567a18 & 1) == 0) {
    FUN_01bab630(&System_Action<PFOMHOLCODE_JLFFOOCNIIO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>_ForEach__);
    FUN_01bab630(&Method_PFOMHOLCODE_<>c_BAKLCMLEOHM__);
    FUN_01bab630(&PFOMHOLCODE_<>c_TypeInfo);
    DAT_04567a18 = 1;
    method = extraout_x1;
  }
  pPVar3 = (__this->fields).DKMMLPDKILK;
  if (pPVar3 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar1 = (pPVar3->fields).NEIJJHEFLHP;
    if (pLVar1 == (LCKCDEKNLOA_o *)0x0) goto LAB_0344eca8;
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    method = extraout_x1_00;
  }
  pPVar3 = (__this->fields).AKKPBPEJNNE;
  if (pPVar3 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar1 = (pPVar3->fields).NEIJJHEFLHP;
    if (pLVar1 == (LCKCDEKNLOA_o *)0x0) goto LAB_0344eca8;
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    method = extraout_x1_01;
  }
  pPVar3 = (__this->fields).JMGEHHNGBMI;
  if (pPVar3 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar1 = (pPVar3->fields).NEIJJHEFLHP;
    if (pLVar1 == (LCKCDEKNLOA_o *)0x0) goto LAB_0344eca8;
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    method = extraout_x1_02;
  }
  pPVar3 = (__this->fields).FMNILCPNHHJ;
  if (pPVar3 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar1 = (pPVar3->fields).NEIJJHEFLHP;
    if (pLVar1 == (LCKCDEKNLOA_o *)0x0) {
LAB_0344eca8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    method = extraout_x1_03;
  }
  __this_00 = (__this->fields).IDMHBKIMEGE;
  if (__this_00 != (System_Collections_Generic_List_PFOMHOLCODE_JLFFOOCNIIO__o *)0x0) {
    if ((PFOMHOLCODE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = PFOMHOLCODE_<>c_TypeInfo->static_fields->__9__46_0;
    if (action == (System_Action_PFOMHOLCODE_JLFFOOCNIIO__o *)0x0) {
      if ((PFOMHOLCODE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_PFOMHOLCODE_JLFFOOCNIIO__o *)
               thunk_FUN_01bda818(System_Action<PFOMHOLCODE_JLFFOOCNIIO>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &PFOMHOLCODE_<>c_TypeInfo->static_fields->__9__46_0;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>_ForEach__);
    method = extraout_x1_04;
  }
  PFOMHOLCODE__CMBGICLLJAC(__this,method);
  return;
}

