// JLEKKANADII$$KJHIBNMCKKG @ RVA 0x3515700

void JLEKKANADII__KJHIBNMCKKG
               (System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__string__ODLJFAIHELG__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_int__string__ODLJFAIHELG__o *source;
  
  if ((DAT_045689a3 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_045689a3 = 1;
    method = extraout_x1;
  }
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
  source = JLEKKANADII_TypeInfo->static_fields->JCDGMAEDFIF;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
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
                    /* try { // try from 036157a4 to 037157ab has its CatchHandler @ 03615950 */
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036157c0 to 037157c3 has its CatchHandler @ 0361593c */
    pSVar5 = (System_Action_int__string__ODLJFAIHELG__o *)
             FUN_01c07368(JLEKKANADII_TypeInfo->static_fields,lVar4,source);
                    /* try { // try from 036157c4 to 037157cb has its CatchHandler @ 0361594c */
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
                    /* try { // try from 036157d8 to 037157df has its CatchHandler @ 03615940 */
  return;
}

