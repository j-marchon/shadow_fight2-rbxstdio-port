// TypeDefIndex 1406
// Namespace: 
// [CompilerGenerated]
// private sealed class OHAPMMPNLCB.CKOMAHDDOIO
// Fields:
//   public bool needRestoreLock; // 0x10
//   public Action callback; // 0x18

// ===== public void .ctor()  [RVA 0x317BF78]
// OHAPMMPNLCB.CKOMAHDDOIO$$.ctor @ RVA 0x317BF78

void OHAPMMPNLCB_CKOMAHDDOIO___ctor(OHAPMMPNLCB_CKOMAHDDOIO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void DLACDDDGGAD()  [RVA 0x317BF88]
// OHAPMMPNLCB.CKOMAHDDOIO$$DLACDDDGGAD @ RVA 0x317BF88

void OHAPMMPNLCB_CKOMAHDDOIO__DLACDDDGGAD(OHAPMMPNLCB_CKOMAHDDOIO_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Action_o *pSVar1;
  
  if ((DAT_0456698e & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456698e = 1;
    method = extraout_x1;
  }
  if ((__this->fields).needRestoreLock != false) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    MGNPHCAAEIO__JEGCBLKOEGN(true,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).callback;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0327bffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

