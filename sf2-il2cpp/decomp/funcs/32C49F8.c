// BOFEMGGNODC$$.ctor @ RVA 0x32C49F8

void BOFEMGGNODC___ctor(BOFEMGGNODC_o *__this,MethodInfo *method)

{
  System_Action_MEMHEPBAJJA__o **ppSVar1;
  System_Action_PKHMIGFEJCL__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_MEMHEPBAJJA__o *pSVar3;
  System_Action_PKHMIGFEJCL__o *pSVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4990 with catch @ 033c49f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c49d4 with catch @ 033c49fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4948 with catch @ 033c4a00
                        */
                    /* try { // try from 033c4a18 to 034c4a1b has its CatchHandler @ 033c4a3c */
  if ((DAT_04567527 & 1) == 0) {
                    /* try { // try from 033c4a1c to 034c4a43 has its CatchHandler @ 033c484c */
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&System_Action<MEMHEPBAJJA>_TypeInfo);
                    /* catch() { ... } // from try @ 033c4a18 with catch @ 033c4a3c */
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_EKBJCNLEMME__);
                    /* try { // try from 033c4a44 to 034c4a4b has its CatchHandler @ 033c4a60 */
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_NAKGFOAHNPG__);
                    /* try { // try from 033c4a4c to 034c4a57 has its CatchHandler @ 033c484c */
    FUN_01bab630(&BOFEMGGNODC_<>c_TypeInfo);
                    /* try { // try from 033c4a58 to 034c4a5f has its CatchHandler @ 033c4a60 */
    DAT_04567527 = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c4a44 with catch @ 033c4a60
                       catch(type#2 @ 00000000) { ... } // from try @ 033c4a58 with catch @ 033c4a60
                        */
  if ((BOFEMGGNODC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BOFEMGGNODC_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = BOFEMGGNODC_<>c_TypeInfo->static_fields->__9__34_0;
  if (pSVar3 == (System_Action_MEMHEPBAJJA__o *)0x0) {
    if ((BOFEMGGNODC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BOFEMGGNODC_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_MEMHEPBAJJA__o *)thunk_FUN_01bda818(System_Action<MEMHEPBAJJA>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &BOFEMGGNODC_<>c_TypeInfo->static_fields->__9__34_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (BOFEMGGNODC_o *)0x0) {
    ppSVar1 = &(__this->fields).EKJDIBEOCDF;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((BOFEMGGNODC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = BOFEMGGNODC_<>c_TypeInfo->static_fields->__9__34_1;
    if (pSVar4 == (System_Action_PKHMIGFEJCL__o *)0x0) {
      if ((BOFEMGGNODC_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_PKHMIGFEJCL__o *)
               thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &BOFEMGGNODC_<>c_TypeInfo->static_fields->__9__34_1;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    ppSVar2 = &(__this->fields).BHHLJDLBINB;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

