// ACHLOMELAJE$$JJOKIGNAPNH @ RVA 0x305ED04

bool ACHLOMELAJE__JJOKIGNAPNH
               (ACHLOMELAJE_o *__this,IGFGDDANEPE_o *IKKAMAMLIKA,bool IOGIPCKJBNP,MethodInfo *method
               )

{
  int32_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  PJKHAJKEHEL_o *pPVar3;
  HOOAAGABMBL_o *__this_00;
  
  if ((DAT_04565eae & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04565eae = 1;
  }
  if (!IOGIPCKJBNP) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
    return true;
  }
  if ((__this->fields).MFLNIMCFPDK == (PJKHAJKEHEL_o *)0x0) {
    return false;
  }
  if (IKKAMAMLIKA != (IGFGDDANEPE_o *)0x0) {
    __this_00 = (IKKAMAMLIKA->fields).PCBECBEFJOI;
    iVar1 = IGFGDDANEPE__LGIMDOAMCNG(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (__this_00 != (HOOAAGABMBL_o *)0x0) {
      pHVar2 = HOOAAGABMBL__PIGMAMNLCMH(__this_00,iVar1,(MethodInfo *)0x0);
      if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
        iVar1 = IGFGDDANEPE__LGIMDOAMCNG(IKKAMAMLIKA,(MethodInfo *)0x0);
        __this_00 = HOOAAGABMBL__PIGMAMNLCMH(__this_00,iVar1,(MethodInfo *)0x0);
        if (__this_00 == (HOOAAGABMBL_o *)0x0) goto LAB_0315ee08;
      }
      pPVar3 = (__this->fields).MFLNIMCFPDK;
      if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
        (*(pPVar3->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                  (pPVar3,(__this_00->fields)._GMPAEDFIIHF_k__BackingField,__this_00,
                   (pPVar3->klass->vtable)._9_CGNPHPDFKJG.method);
        KIHIPAJGNBF__MLDEHFFGJDP
                  ((KIHIPAJGNBF_o *)__this,(__this_00->fields)._GMPAEDFIIHF_k__BackingField,
                   (__this_00->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
        pPVar3 = (__this->fields).MFLNIMCFPDK;
        if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
          PJKHAJKEHEL__OBDMCJAPKPJ(pPVar3,(MethodInfo *)0x0);
          return true;
        }
      }
    }
  }
LAB_0315ee08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

