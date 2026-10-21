// AJJPCMDCAOB$$HPPMALFPDJI @ RVA 0x338D724

int32_t AJJPCMDCAOB__HPPMALFPDJI
                  (AJJPCMDCAOB_o *__this,HEOCHMFJJLH_o *FMPJLBLNHMC,HEOCHMFJJLH_o *IHEPHBIPLPM,
                  MethodInfo *method)

{
  int32_t iVar1;
  float in_s1;
  
                    /* try { // try from 0348d728 to 0358d72f has its CatchHandler @ 0348d8d8 */
                    /* try { // try from 0348d730 to 0358d8bf has its CatchHandler @ 0348d43c */
  if ((FMPJLBLNHMC != (HEOCHMFJJLH_o *)0x0) && (IHEPHBIPLPM != (HEOCHMFJJLH_o *)0x0)) {
    iVar1 = System_Int32__CompareTo
                      ((int)FMPJLBLNHMC + 0x20,(IHEPHBIPLPM->fields).MAOCPNLGKLP,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = System_Single__CompareTo
                      ((IHEPHBIPLPM->fields).BKCFPHNEONL,in_s1,
                       (MethodInfo *)&(FMPJLBLNHMC->fields).BKCFPHNEONL);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

