// FCJBEKHDLAF$$PDGBIPGABOP @ RVA 0x33E7154

void FCJBEKHDLAF__PDGBIPGABOP(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKEKJDLEJIL_o *__this_00;
  KKEKJDLEJIL_o *__this_01;
  PJKHAJKEHEL_o *pPVar2;
  NJNCPNBIPCD_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PJKHAJKEHEL_o *pPVar3;
  KKEKJDLEJIL_o *pKVar4;
  
  if ((DAT_04567ed3 & 1) == 0) {
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04567ed3 = 1;
    method = extraout_x1;
  }
  __this_00 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo,method);
  KKEKJDLEJIL___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
  KKEKJDLEJIL___ctor(__this_01,(MethodInfo *)0x0);
  pPVar2 = (__this->fields).KCHOEJOHIMM;
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
    (*(pPVar2->klass->vtable)._8_KMKKECDCBEF.methodPtr)
              (pPVar2,__this_00,(pPVar2->klass->vtable)._8_KMKKECDCBEF.method);
    pKVar4 = (__this->fields).PGGDAAOIJCM;
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565ff1 == '\0') {
                    /* try { // try from 034e720c to 035e73b3 has its CatchHandler @ 034e720c
                       catch() { ... } // from try @ 034e720c with catch @ 034e720c
                       catch() { ... } // from try @ 034e74ec with catch @ 034e720c
                       catch() { ... } // from try @ 034e7590 with catch @ 034e720c
                       catch() { ... } // from try @ 034e7598 with catch @ 034e720c
                       catch() { ... } // from try @ 034e7648 with catch @ 034e720c */
      FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
      DAT_04565ff1 = '\x01';
    }
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NJNCPNBIPCD__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_02 == (NJNCPNBIPCD_o *)0x0) goto LAB_034e7314;
      pKVar4 = NJNCPNBIPCD__EDDJCMBCEDA(__this_02,(__this->fields).PGGDAAOIJCM,(MethodInfo *)0x0);
    }
    pPVar2 = (__this->fields).KCHOEJOHIMM;
    if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
      method_01 = (pPVar2->klass->vtable)._6_BCEGONIKBAK.method;
      (*(pPVar2->klass->vtable)._6_BCEGONIKBAK.methodPtr)(pPVar2,pKVar4);
      pPVar2 = (__this->fields).KCHOEJOHIMM;
      if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
        (*(pPVar2->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                  (pPVar2,(pPVar2->klass->vtable)._7_LBNKPLKIIOP.method);
        FCJBEKHDLAF__KHNFGKDIBEE(__this,(__this->fields).KCHOEJOHIMM,method_01);
        pPVar2 = (__this->fields).KCHOEJOHIMM;
        if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
          (*(pPVar2->klass->vtable)._8_KMKKECDCBEF.methodPtr)
                    (pPVar2,__this_01,(pPVar2->klass->vtable)._8_KMKKECDCBEF.method);
          if (__this_01 != (KKEKJDLEJIL_o *)0x0) {
            bVar1 = KKEKJDLEJIL__DGCODECJJCC(__this_01,__this_00,(MethodInfo *)0x0);
            if (bVar1) {
              return;
            }
            FCJBEKHDLAF__ILNOJCFNNHP(__this,method_00);
            pPVar2 = (__this->fields).DGKEDNJPDHC;
            if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
               (pPVar3 = (__this->fields).KCHOEJOHIMM, pPVar3 != (PJKHAJKEHEL_o *)0x0)) {
              (pPVar3->fields).ACHJNNOKEDK = (pPVar2->fields).ACHJNNOKEDK;
              thunk_FUN_01c20e04(&(pPVar3->fields).ACHJNNOKEDK);
              return;
            }
          }
        }
      }
    }
  }
LAB_034e7314:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

