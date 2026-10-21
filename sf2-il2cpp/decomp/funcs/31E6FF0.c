// PNGKLCHKPEO.PLCIDMPOECL$$RandomizeObscuredVars @ RVA 0x31E6FF0

void PNGKLCHKPEO_PLCIDMPOECL__RandomizeObscuredVars
               (PNGKLCHKPEO_PLCIDMPOECL_o *__this,MethodInfo *method)

{
  IEFEBEDLHNN_o *pIVar1;
  GBJGJEGPHKD_o *__this_00;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar2;
  
  pPVar2 = (__this->fields).GKLKOCOKMDB;
  if (pPVar2 != (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0) {
    pIVar1 = (pPVar2->fields).JHFENACKNPG;
    if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
      IEFEBEDLHNN__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
      pPVar2 = (__this->fields).GKLKOCOKMDB;
      if (pPVar2 == (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0) goto LAB_032e7028;
    }
    pIVar1 = (pPVar2->fields).LNBKBMNLJNG;
    if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
      IEFEBEDLHNN__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
    }
  }
LAB_032e7028:
  __this_00 = (__this->fields).EBAPMMNFNPD;
  if (__this_00 != (GBJGJEGPHKD_o *)0x0) {
    GBJGJEGPHKD__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

