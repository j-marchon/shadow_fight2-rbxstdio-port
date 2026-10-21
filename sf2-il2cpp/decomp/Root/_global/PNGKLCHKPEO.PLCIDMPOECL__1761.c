// TypeDefIndex 1761
// Namespace: 
// public class PNGKLCHKPEO.PLCIDMPOECL
// Fields:
//   public PNGKLCHKPEO.LGAFLKDKBPL GKLKOCOKMDB; // 0x10
//   public GBJGJEGPHKD EBAPMMNFNPD; // 0x18

// ===== public void .ctor(GBJGJEGPHKD BCKBBGCOMJD)  [RVA 0x31E6F68]
// PNGKLCHKPEO.PLCIDMPOECL$$.ctor @ RVA 0x31E6F68

void PNGKLCHKPEO_PLCIDMPOECL___ctor
               (PNGKLCHKPEO_PLCIDMPOECL_o *__this,GBJGJEGPHKD_o *BCKBBGCOMJD,MethodInfo *method)

{
  PNGKLCHKPEO_LGAFLKDKBPL_o *__this_00;
  GBJGJEGPHKD_o **ppGVar1;
  
  if ((DAT_04566d6d & 1) == 0) {
    FUN_01bab630(&PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
    DAT_04566d6d = 1;
  }
  __this_00 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this->fields).GKLKOCOKMDB = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).EBAPMMNFNPD;
  *ppGVar1 = BCKBBGCOMJD;
  thunk_FUN_01c20e04(ppGVar1,BCKBBGCOMJD);
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x31E6FF0]
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

