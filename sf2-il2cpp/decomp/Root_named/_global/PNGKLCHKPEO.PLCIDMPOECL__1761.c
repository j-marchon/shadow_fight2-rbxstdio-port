// TypeDefIndex 1761
// Namespace: 
// public class DistancePoint.PLCIDMPOECL
// Fields:
//   public DistancePoint.LGAFLKDKBPL GKLKOCOKMDB; // 0x10
//   public ModelObject EBAPMMNFNPD; // 0x18

// ===== public void .ctor(ModelObject BCKBBGCOMJD)  [RVA 0x31E6F68]
// DistancePoint.PLCIDMPOECL$$.ctor @ RVA 0x31E6F68

void DistancePoint_PLCIDMPOECL___ctor
               (DistancePoint_PLCIDMPOECL_o *__this,ModelObject_o *BCKBBGCOMJD,MethodInfo *method)

{
  DistancePoint_LGAFLKDKBPL_o *__this_00;
  ModelObject_o **ppGVar1;
  
  if ((DAT_04566d6d & 1) == 0) {
    FUN_01bab630(&DistancePoint_LGAFLKDKBPL_TypeInfo);
    DAT_04566d6d = 1;
  }
  __this_00 = (DistancePoint_LGAFLKDKBPL_o *)thunk_FUN_01bda818(DistancePoint_LGAFLKDKBPL_TypeInfo);
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
// DistancePoint.PLCIDMPOECL$$RandomizeObscuredVars @ RVA 0x31E6FF0

void DistancePoint_PLCIDMPOECL__RandomizeObscuredVars
               (DistancePoint_PLCIDMPOECL_o *__this,MethodInfo *method)

{
  ModelNode_o *pIVar1;
  ModelObject_o *__this_00;
  DistancePoint_LGAFLKDKBPL_o *pPVar2;
  
  pPVar2 = (__this->fields).GKLKOCOKMDB;
  if (pPVar2 != (DistancePoint_LGAFLKDKBPL_o *)0x0) {
    pIVar1 = (pPVar2->fields).JHFENACKNPG;
    if (pIVar1 != (ModelNode_o *)0x0) {
      ModelNode__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
      pPVar2 = (__this->fields).GKLKOCOKMDB;
      if (pPVar2 == (DistancePoint_LGAFLKDKBPL_o *)0x0) goto LAB_032e7028;
    }
    pIVar1 = (pPVar2->fields).LNBKBMNLJNG;
    if (pIVar1 != (ModelNode_o *)0x0) {
      ModelNode__RandomizeObscuredVars(pIVar1,(MethodInfo *)0x0);
    }
  }
LAB_032e7028:
  __this_00 = (__this->fields).EBAPMMNFNPD;
  if (__this_00 != (ModelObject_o *)0x0) {
    ModelObject__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

