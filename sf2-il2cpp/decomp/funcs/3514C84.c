// JLEKKANADII$$HFKKKKBAMGE @ RVA 0x3514C84

void JLEKKANADII__HFKKKKBAMGE
               (System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__string__ODLJFAIHELG__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_int__string__ODLJFAIHELG__o *a;
  
  if ((DAT_045689a2 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_045689a2 = 1;
    method = extraout_x1;
  }
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
  a = JLEKKANADII_TypeInfo->static_fields->JCDGMAEDFIF;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<int,_string,_ODLJFAIHELG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_int__string__ODLJFAIHELG__o *)
             FUN_01c07368(JLEKKANADII_TypeInfo->static_fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

