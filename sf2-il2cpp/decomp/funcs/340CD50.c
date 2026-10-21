// MGNPHCAAEIO$$FIHGNJPJPBC @ RVA 0x340CD50

void MGNPHCAAEIO__FIHGNJPJPBC(System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
  if ((DAT_04568049 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568049 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0350cd94 to 0360cdbb has its CatchHandler @ 0350ced4 */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  a = MGNPHCAAEIO_TypeInfo->static_fields->KBPKOEOAMAH;
  do {
                    /* try { // try from 0350cdbc to 0360ce13 has its CatchHandler @ 0350cc64 */
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350cd4c with catch @ 0350ce20
                        */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)FUN_01c07368(MGNPHCAAEIO_TypeInfo->static_fields,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
                    /* try { // try from 0350ce14 to 0360ce1b has its CatchHandler @ 0350ced4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350cd2c with catch @ 0350ce1c
                       try { // try from 0350ce1c to 0360ce3b has its CatchHandler @ 0350cc64 */
  return;
}

