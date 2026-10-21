// FCJBEKHDLAF$$HNCPAOPBOAM @ RVA 0x33F01C4

void FCJBEKHDLAF__HNCPAOPBOAM(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKEKJDLEJIL_o *__this_00;
  KKEKJDLEJIL_o *__this_01;
  PJKHAJKEHEL_o *pPVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PJKHAJKEHEL_o *pPVar3;
  
  if ((DAT_04567f08 & 1) == 0) {
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    DAT_04567f08 = 1;
    method = extraout_x1;
  }
  __this_00 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo,method);
  KKEKJDLEJIL___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
  KKEKJDLEJIL___ctor(__this_01,(MethodInfo *)0x0);
  pPVar2 = (__this->fields).JEDELFOBLEN;
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
    (*(pPVar2->klass->vtable)._8_KMKKECDCBEF.methodPtr)
              (pPVar2,__this_00,(pPVar2->klass->vtable)._8_KMKKECDCBEF.method);
    pPVar2 = (__this->fields).JEDELFOBLEN;
    if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
      method_01 = (pPVar2->klass->vtable)._6_BCEGONIKBAK.method;
      (*(pPVar2->klass->vtable)._6_BCEGONIKBAK.methodPtr)(pPVar2,(__this->fields).BIGOLGNHMEH);
      pPVar2 = (__this->fields).JEDELFOBLEN;
      if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
        (*(pPVar2->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                  (pPVar2,(pPVar2->klass->vtable)._7_LBNKPLKIIOP.method);
        FCJBEKHDLAF__KHNFGKDIBEE(__this,(__this->fields).JEDELFOBLEN,method_01);
        pPVar2 = (__this->fields).JEDELFOBLEN;
        if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
          (*(pPVar2->klass->vtable)._8_KMKKECDCBEF.methodPtr)
                    (pPVar2,__this_01,(pPVar2->klass->vtable)._8_KMKKECDCBEF.method);
          if (__this_01 != (KKEKJDLEJIL_o *)0x0) {
            bVar1 = KKEKJDLEJIL__DGCODECJJCC(__this_01,__this_00,(MethodInfo *)0x0);
            if (bVar1) {
              return;
            }
            FCJBEKHDLAF__LIAAAKAIKOC(__this,method_00);
            pPVar2 = (__this->fields).DGKEDNJPDHC;
            if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
               (pPVar3 = (__this->fields).JEDELFOBLEN, pPVar3 != (PJKHAJKEHEL_o *)0x0)) {
              (pPVar3->fields).ACHJNNOKEDK = (pPVar2->fields).ACHJNNOKEDK;
              thunk_FUN_01c20e04(&(pPVar3->fields).ACHJNNOKEDK);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

