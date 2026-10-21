// OPNFCOGALLI$$DPAGEPIGLEF @ RVA 0x310707C

void OPNFCOGALLI__DPAGEPIGLEF(OPNFCOGALLI_o *__this,CNDPAJOLKFN_o *CIPNNFKDGFP,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  CNDPAJOLKFN_o *__this_01;
  float OOGPLJBADCD;
  
  if ((DAT_04566514 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04566514 = 1;
  }
  __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(__this_00,CIPNNFKDGFP,(MethodInfo *)0x0);
  OOGPLJBADCD = (__this->fields).KPJLPAIIDHB;
  if (OOGPLJBADCD != 1.0) {
    if (__this_00 == (CNDPAJOLKFN_o *)0x0) goto LAB_03207110;
    CNDPAJOLKFN__PGLILPKGILI(__this_00,OOGPLJBADCD,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).AAOHMLDIGNK;
  if (__this_01 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__LFENGGKOJDO(__this_01,__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_03207110:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

