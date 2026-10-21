// TypeDefIndex 742
// Namespace: 
// [CompilerGenerated]
// private sealed class EGMONPGHHDP.BBJDAAOJLFM
// Fields:
//   public EGMONPGHHDP <>4__this; // 0x10
//   public Action<BKKPAKHJDKB> callback; // 0x18
//   public Action closeCallback; // 0x20

// ===== public void .ctor()  [RVA 0x304C614]
// EGMONPGHHDP.BBJDAAOJLFM$$.ctor @ RVA 0x304C614

void EGMONPGHHDP_BBJDAAOJLFM___ctor(EGMONPGHHDP_BBJDAAOJLFM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void OJCKJPHGIAP(object t)  [RVA 0x304C9D0]
// EGMONPGHHDP.BBJDAAOJLFM$$OJCKJPHGIAP @ RVA 0x304C9D0

void EGMONPGHHDP_BBJDAAOJLFM__OJCKJPHGIAP
               (EGMONPGHHDP_BBJDAAOJLFM_o *__this,Il2CppObject *t,MethodInfo *method)

{
  MethodInfo *in_x4;
  EGMONPGHHDP_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
                    /* try { // try from 0314c9dc to 0324c9df has its CatchHandler @ 0314c9f4 */
    EGMONPGHHDP__LMEBJGOCIDI
              (__this_00,t,(__this->fields).callback,(__this->fields).closeCallback,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool NHLLMBGFKOK(HOOAAGABMBL x)  [RVA 0x304C9F0]
// EGMONPGHHDP.BBJDAAOJLFM$$NHLLMBGFKOK @ RVA 0x304C9F0

bool EGMONPGHHDP_BBJDAAOJLFM__NHLLMBGFKOK
               (EGMONPGHHDP_BBJDAAOJLFM_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  EGMONPGHHDP_o *pEVar2;
  JMDPBFOCHHP_JMEJFGKJNEA_o *pJVar3;
  
                    /* catch() { ... } // from try @ 0314c9dc with catch @ 0314c9f4 */
  if ((x != (HOOAAGABMBL_o *)0x0) &&
     (pEVar2 = (__this->fields).__4__this, pEVar2 != (EGMONPGHHDP_o *)0x0)) {
                    /* try { // try from 0314ca00 to 0324ca17 has its CatchHandler @ 0314ca30 */
    pJVar3 = (pEVar2->fields)._BJALAALAIDH_k__BackingField;
    if (pJVar3 == (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) {
      b = (System_String_o *)0x0;
    }
    else {
      b = (pJVar3->fields).COENDIKFHPA;
    }
                    /* try { // try from 0314ca18 to 0324ca27 has its CatchHandler @ 0314c894 */
    bVar1 = System_String__op_Equality((x->fields)._COIPKAKHDFP_k__BackingField,b,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

