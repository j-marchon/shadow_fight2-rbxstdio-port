// CFJANHACGMG$$GPKEHBNBBON @ RVA 0x359902C

void CFJANHACGMG__GPKEHBNBBON
               (System_Xml_XmlDocument_o *ILENGCADNIH,System_String_o *EIJDDKJONFO,bool ECDLGJPEBEF,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *LBPBGBIFMAK;
  MethodInfo *pMVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  GCFHEEKPCPJ_o *__this;
  
                    /* try { // try from 03699054 to 0379905f has its CatchHandler @ 03699068 */
  if ((DAT_04568db8 & 1) == 0) {
                    /* try { // try from 03699060 to 0379908b has its CatchHandler @ 03698b7c */
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
                    /* catch() { ... } // from try @ 03698f70 with catch @ 03699064 */
                    /* catch() { ... } // from try @ 03699054 with catch @ 03699068 */
                    /* catch() { ... } // from try @ 03698f90 with catch @ 0369906c */
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
                    /* catch() { ... } // from try @ 03698f60 with catch @ 03699070 */
                    /* catch() { ... } // from try @ 03698f4c with catch @ 03699074 */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
                    /* try { // try from 0369908c to 0379908f has its CatchHandler @ 03699d1c */
                    /* try { // try from 03699090 to 037991c3 has its CatchHandler @ 03698b7c */
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_04568db8 = 1;
  }
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = ANFOHCGLHID__DMEJHHPGDFA((MethodInfo *)0x0);
  if (bVar1) {
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(EIJDDKJONFO,(MethodInfo *)0x0);
    if ((!bVar1) || (ECDLGJPEBEF)) {
      if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (ILENGCADNIH != (System_Xml_XmlDocument_o *)0x0) {
        __this = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
        pSVar2 = (System_String_o *)
                 (*(ILENGCADNIH->klass->vtable)._43_get_OuterXml.methodPtr)
                           (ILENGCADNIH,(ILENGCADNIH->klass->vtable)._43_get_OuterXml.method);
        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
        }
        LBPBGBIFMAK = EOAOCPLIKOI__HBOAEIBACIE((MethodInfo *)0x0);
        pMVar3 = extraout_x1;
        if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
          pMVar3 = extraout_x1_00;
        }
        pMVar3 = (MethodInfo *)CFJANHACGMG__DPHMDPHEIKO(LBPBGBIFMAK,pMVar3);
        if (__this != (GCFHEEKPCPJ_o *)0x0) {
          pSVar2 = GCFHEEKPCPJ__IDDPLJLECPA
                             (__this,pSVar2,(System_String_o *)pMVar3,(MethodInfo *)0x0);
          CFJANHACGMG__LIJHLLAPAAA(EIJDDKJONFO,pSVar2,pMVar3);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

