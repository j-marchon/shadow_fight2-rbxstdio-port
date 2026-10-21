// MGICPMNIAMM.FIAFELGJBBD$$BNEFFGMODJN @ RVA 0x3156B50

float MGICPMNIAMM_FIAFELGJBBD__BNEFFGMODJN
                (MGICPMNIAMM_FIAFELGJBBD_o *__this,int32_t CKCOLJLFJDB,int32_t DEDNHOELFOD,
                MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Random_o *pSVar4;
  
                    /* catch() { ... } // from try @ 03256b38 with catch @ 03256b64 */
                    /* try { // try from 03256b74 to 03356b7b has its CatchHandler @ 03256b90 */
  if ((DAT_04566843 & 1) == 0) {
                    /* try { // try from 03256b7c to 03356b87 has its CatchHandler @ 03256a10 */
    FUN_01bab630(&MGICPMNIAMM_TypeInfo);
                    /* try { // try from 03256b88 to 03356b8f has its CatchHandler @ 03256b90 */
    DAT_04566843 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03256b74 with catch @ 03256b90
                       catch(type#2 @ 00000000) { ... } // from try @ 03256b88 with catch @ 03256b90
                        */
  if ((MGICPMNIAMM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MGICPMNIAMM_TypeInfo->static_fields->NBAAKDGJIEI;
  if (pSVar4 != (System_Random_o *)0x0) {
    iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._5_Next.method);
    iVar2 = DEDNHOELFOD - CKCOLJLFJDB;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    return (float)((iVar3 - iVar1 * iVar2) + CKCOLJLFJDB);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

