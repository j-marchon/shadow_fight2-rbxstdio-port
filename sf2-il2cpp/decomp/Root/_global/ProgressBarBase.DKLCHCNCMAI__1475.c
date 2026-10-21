// TypeDefIndex 1475
// Namespace: 
// [CompilerGenerated]
// private sealed class ProgressBarBase.DKLCHCNCMAI
// Fields:
//   public ProgressBarBase <>4__this; // 0x10
//   public Action onCompleteAction; // 0x18

// ===== public void .ctor()  [RVA 0x31958B0]
// ProgressBarBase.DKLCHCNCMAI$$.ctor @ RVA 0x31958B0

void ProgressBarBase_DKLCHCNCMAI___ctor(ProgressBarBase_DKLCHCNCMAI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void CFIOEAEBAIB(float x)  [RVA 0x3195A08]
// ProgressBarBase.DKLCHCNCMAI$$CFIOEAEBAIB @ RVA 0x3195A08

void ProgressBarBase_DKLCHCNCMAI__CFIOEAEBAIB
               (ProgressBarBase_DKLCHCNCMAI_o *__this,float x,MethodInfo *method)

{
  ProgressBarBase_o *pPVar1;
  ProgressBarBase_c *pPVar2;
  
  pPVar1 = (__this->fields).__4__this;
  if (pPVar1 != (ProgressBarBase_o *)0x0) {
    pPVar2 = pPVar1->klass;
    (pPVar1->fields).JGFKHMMNJBA = x;
                    /* WARNING: Could not recover jumptable at 0x03295a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar2->vtable)._4_unknown.methodPtr)(pPVar1,(pPVar2->vtable)._4_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void KDEAENJLPNG()  [RVA 0x3195A2C]
// ProgressBarBase.DKLCHCNCMAI$$KDEAENJLPNG @ RVA 0x3195A2C

void ProgressBarBase_DKLCHCNCMAI__KDEAENJLPNG
               (ProgressBarBase_DKLCHCNCMAI_o *__this,MethodInfo *method)

{
  ProgressBarBase_o *__this_00;
  System_Action_o *pSVar1;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (ProgressBarBase_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ProgressBarBase__CCPABLFBFFA(__this_00,method);
  pSVar1 = (__this->fields).onCompleteAction;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03295a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== internal float IKLHIKJBCKC()  [RVA 0x3195A68]
// ProgressBarBase.DKLCHCNCMAI$$IKLHIKJBCKC @ RVA 0x3195A68

float ProgressBarBase_DKLCHCNCMAI__IKLHIKJBCKC
                (ProgressBarBase_DKLCHCNCMAI_o *__this,MethodInfo *method)

{
  ProgressBarBase_o *pPVar1;
  
  pPVar1 = (__this->fields).__4__this;
  if (pPVar1 != (ProgressBarBase_o *)0x0) {
    return (pPVar1->fields).JGFKHMMNJBA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

