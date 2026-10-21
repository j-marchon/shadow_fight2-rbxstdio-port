// TypeDefIndex 1366
// Namespace: 
// [CompilerGenerated]
// private sealed class NFGLEDADCGL.DOFIGFOJIMM
// Fields:
//   public HNFFPPPDKDK value; // 0x10

// ===== internal bool MLGONBOLIBP(HNFFPPPDKDK x)  [RVA 0x316CBE0]
// NFGLEDADCGL.DOFIGFOJIMM$$MLGONBOLIBP @ RVA 0x316CBE0

bool NFGLEDADCGL_DOFIGFOJIMM__MLGONBOLIBP
               (NFGLEDADCGL_DOFIGFOJIMM_o *__this,HNFFPPPDKDK_o *x,MethodInfo *method)

{
  undefined1 uVar1;
  HNFFPPPDKDK_o *pHVar2;
  
  pHVar2 = (__this->fields).value;
  if ((pHVar2 != (HNFFPPPDKDK_o *)0x0) && (x != (HNFFPPPDKDK_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0326cc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(x->klass->vtable)._0_Equals.methodPtr)
                      (x,(pHVar2->fields).DEKCPPOJFEH,(x->klass->vtable)._0_Equals.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x316B100]
// NFGLEDADCGL.DOFIGFOJIMM$$.ctor @ RVA 0x316B100

void NFGLEDADCGL_DOFIGFOJIMM___ctor(NFGLEDADCGL_DOFIGFOJIMM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

