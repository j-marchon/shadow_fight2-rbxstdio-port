// TypeDefIndex 1257
// Namespace: 
// [CompilerGenerated]
// private sealed class SFRequestSender.FGDIJPFMAJE : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public SFRequestSender <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x3149C70]
// SFRequestSender.FGDIJPFMAJE$$.ctor @ RVA 0x3149C70

void SFRequestSender_FGDIJPFMAJE___ctor
               (SFRequestSender_FGDIJPFMAJE_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x314A27C]
// SFRequestSender.FGDIJPFMAJE$$System.IDisposable.Dispose @ RVA 0x314A27C

void SFRequestSender_FGDIJPFMAJE__System_IDisposable_Dispose
               (SFRequestSender_FGDIJPFMAJE_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x314A280]
// SFRequestSender.FGDIJPFMAJE$$MoveNext @ RVA 0x314A280

bool SFRequestSender_FGDIJPFMAJE__MoveNext(SFRequestSender_FGDIJPFMAJE_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  System_Collections_IEnumerator_o **ppSVar3;
  MethodInfo *method_00;
  Il2CppObject **ppIVar4;
  SFRequestSender_o *__this_01;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_045667ad & 1) == 0) {
    auVar5 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045667ad = 1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (SFRequestSender_o *)0x0) goto LAB_0324a354;
    ppSVar3 = &(__this_01->fields).FDLECCPIBFI;
    *ppSVar3 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 0324a334 to 0334a33b has its CatchHandler @ 0324a44c */
    thunk_FUN_01c20e04(ppSVar3,0);
    SFRequestSender__BPBFNOKDBLB(__this_01,method_00);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_01 != (SFRequestSender_o *)0x0) {
      iVar2 = SFRequestSender__ECANAMKCGPJ(auVar5._0_8_,auVar5._8_8_);
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,(float)iVar2 / 1000.0,(MethodInfo *)0x0);
      ppIVar4 = &(__this->fields).__2__current;
      *ppIVar4 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar4,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_0324a354:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x314A358]
// SFRequestSender.FGDIJPFMAJE$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x314A358

Il2CppObject *
SFRequestSender_FGDIJPFMAJE__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (SFRequestSender_FGDIJPFMAJE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x314A360]
// SFRequestSender.FGDIJPFMAJE$$System.Collections.IEnumerator.Reset @ RVA 0x314A360

void SFRequestSender_FGDIJPFMAJE__System_Collections_IEnumerator_Reset
               (SFRequestSender_FGDIJPFMAJE_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
                    /* try { // try from 0324a360 to 0334a383 has its CatchHandler @ 0324a450 */
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_KKLJIDJBFEI_FGDIJPFMAJE_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x314A398]
// SFRequestSender.FGDIJPFMAJE$$System.Collections.IEnumerator.get_Current @ RVA 0x314A398

Il2CppObject *
SFRequestSender_FGDIJPFMAJE__System_Collections_IEnumerator_get_Current
          (SFRequestSender_FGDIJPFMAJE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

