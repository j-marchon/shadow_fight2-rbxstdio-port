// OPNMPAJKDMI$$GLIPIKHCNCO @ RVA 0x343E330

void OPNMPAJKDMI__GLIPIKHCNCO(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  FKNCNNOOOIO_o *__this_00;
  System_String_o *pSVar1;
  NCNJEIBHGBH_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_045681ff & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&StringLiteral_12931);
    DAT_045681ff = 1;
    method = extraout_x1;
  }
  __this_00 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo,method);
  FKNCNNOOOIO___ctor(__this_00,(MethodInfo *)0x0);
  pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
                    /* try { // try from 0353e38c to 0363e393 has its CatchHandler @ 0353e428 */
  if ((pHVar2 != (HOOAAGABMBL_o *)0x0) && (__this_00 != (FKNCNNOOOIO_o *)0x0)) {
    (__this_00->fields).JIJLBFGKNJK = (pHVar2->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04();
                    /* try { // try from 0353e3a0 to 0363e3ab has its CatchHandler @ 0353e420 */
    pSVar1 = OPNMPAJKDMI__KBCKLCBBAJB(__this,method_00);
    (__this_00->fields).AOOKMODPLGM = pSVar1;
    thunk_FUN_01c20e04();
    pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      (__this_00->fields).KPDPJONADPJ = (pHVar2->fields)._PCDKGNIOEAN_k__BackingField;
      thunk_FUN_01c20e04();
      ppSVar3 = &(__this_00->fields).MEONABNPAPF;
      *ppSVar3 = StringLiteral_12931;
                    /* try { // try from 0353e3e8 to 0363e3ef has its CatchHandler @ 0353e41c */
      thunk_FUN_01c20e04(ppSVar3);
                    /* try { // try from 0353e3f0 to 0363e413 has its CatchHandler @ 0353e2f0 */
      (__this_00->fields).AIDMEFDEOLJ = 1;
      (__this_00->fields).OEFBIKEMBOF = true;
      pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
      if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
        (__this_00->fields).JHFAAGIPDAJ = (pHVar2->fields)._KNNLLCNGLGO_k__BackingField;
        thunk_FUN_01c20e04();
        __this_01 = (__this->fields).ILLNDILEKAM;
                    /* try { // try from 0353e414 to 0363e417 has its CatchHandler @ 0353e424 */
        if (__this_01 != (NCNJEIBHGBH_o *)0x0) {
                    /* try { // try from 0353e418 to 0363e43f has its CatchHandler @ 0353e2f0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e3e8 with catch @ 0353e41c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e3a0 with catch @ 0353e420
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e414 with catch @ 0353e424
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353e38c with catch @ 0353e428
                        */
          NCNJEIBHGBH__HKIGFKCDAGJ
                    (__this_01,__this_00,(__this->fields)._BODPEKDENEG_k__BackingField,false,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

