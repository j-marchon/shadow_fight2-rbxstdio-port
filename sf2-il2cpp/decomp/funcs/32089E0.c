// NLPJLHOEAOE.EANNNIEHPHH$$GBCBLINLEHM @ RVA 0x32089E0

PJKHAJKEHEL_o *
NLPJLHOEAOE_EANNNIEHPHH__GBCBLINLEHM(NLPJLHOEAOE_EANNNIEHPHH_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  PJKHAJKEHEL_o *pPVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar3;
  
  if ((DAT_04566e5c & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    DAT_04566e5c = 1;
    method = extraout_x1;
  }
  pSVar3 = (__this->fields).HHGNEMKLKHG;
  if (pSVar3 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
    }
    iVar1 = LIIFLGALGNK__HLMBDJOGONJ(iVar1,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).HHGNEMKLKHG;
    if (pSVar3 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      pPVar2 = (PJKHAJKEHEL_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,iVar1,
                          Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
      return pPVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

