// FCJBEKHDLAF$$KHNFGKDIBEE @ RVA 0x33E7318

void FCJBEKHDLAF__KHNFGKDIBEE(FCJBEKHDLAF_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,MethodInfo *method)

{
  long lVar1;
  int32_t ODIAFMNGOLA;
  bool bVar2;
  PJKHAJKEHEL_o *pPVar3;
  JIMKCICMMIL_o *pJVar4;
  KAHMAJKJMBK_o *__this_00;
  PJKHAJKEHEL_o **ppPVar5;
  System_Collections_Generic_List_JCHNBADDBGO__o *FAAMECCDGJM;
  
  ppPVar5 = &(__this->fields).DGKEDNJPDHC;
  *ppPVar5 = OKBIKHHKOEN;
  thunk_FUN_01c20e04(ppPVar5);
  pJVar4 = (__this->fields).ODIAFMNGOLA;
  if (pJVar4 != (JIMKCICMMIL_o *)0x0) {
    ODIAFMNGOLA = (pJVar4->fields).ODIAFMNGOLA;
    if (ODIAFMNGOLA < 2) {
      ODIAFMNGOLA = 1;
    }
    if (OKBIKHHKOEN != (PJKHAJKEHEL_o *)0x0) {
      bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                         (OKBIKHHKOEN->fields).HJPOJOPKEKI.fields,(MethodInfo *)0x0);
      __this_00 = (__this->fields).AMJGAIMHDLO;
      if (__this_00 != (KAHMAJKJMBK_o *)0x0) {
        lVar1 = 0xa8;
        if (!bVar2) {
          lVar1 = 0xb0;
        }
        FAAMECCDGJM = *(System_Collections_Generic_List_JCHNBADDBGO__o **)
                       ((long)&__this_00->klass + lVar1);
        KAHMAJKJMBK__LDAMCMHMNOA(__this_00,FAAMECCDGJM,(MethodInfo *)0x0);
        if ((__this->fields).AMJGAIMHDLO != (KAHMAJKJMBK_o *)0x0) {
          PJKHAJKEHEL__JDGECJMGKLK(OKBIKHHKOEN,FAAMECCDGJM,ODIAFMNGOLA,(MethodInfo *)0x0);
        }
                    /* try { // try from 034e73b4 to 035e73db has its CatchHandler @ 034e75ac */
        PJKHAJKEHEL__OBDMCJAPKPJ(OKBIKHHKOEN,(MethodInfo *)0x0);
        pPVar3 = *ppPVar5;
        if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
          (*(pPVar3->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                    (pPVar3,(pPVar3->klass->vtable)._7_LBNKPLKIIOP.method);
          if (*ppPVar5 != (PJKHAJKEHEL_o *)0x0) {
            (OKBIKHHKOEN->fields).ACHJNNOKEDK = ((*ppPVar5)->fields).ACHJNNOKEDK;
            thunk_FUN_01c20e04(&(OKBIKHHKOEN->fields).ACHJNNOKEDK);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

