// TypeDefIndex 805
// Namespace: 
// [CompilerGenerated]
// private sealed class DNFILNINCDI.DDHCBIPLLGF : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public string url; // 0x20
//   public WWWForm form; // 0x28
//   public TimeSpan timeout; // 0x30
//   public CancellationToken token; // 0x38
//   public Action<string> onFail; // 0x40
//   public Action onSuccess; // 0x48
//   private UnityWebRequest <w>5__2; // 0x50

// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3073340]
// DNFILNINCDI.DDHCBIPLLGF$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3073340

Il2CppObject *
DNFILNINCDI_DDHCBIPLLGF__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (DNFILNINCDI_DDHCBIPLLGF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3073348]
// DNFILNINCDI.DDHCBIPLLGF$$System.IDisposable.Dispose @ RVA 0x3073348

void DNFILNINCDI_DDHCBIPLLGF__System_IDisposable_Dispose
               (DNFILNINCDI_DDHCBIPLLGF_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 1) && (iVar1 != -3)) {
    return;
  }
  DNFILNINCDI_DDHCBIPLLGF__EFDDMENDCDI(__this,method);
  return;
}


// ===== public void .ctor(int <>1__state)  [RVA 0x307321C]
// DNFILNINCDI.DDHCBIPLLGF$$.ctor @ RVA 0x307321C

void DNFILNINCDI_DDHCBIPLLGF___ctor
               (DNFILNINCDI_DDHCBIPLLGF_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private bool MoveNext()  [RVA 0x3073364]
// DNFILNINCDI.DDHCBIPLLGF$$MoveNext @ RVA 0x3073364

/* WARNING: Type propagation algorithm not settling */

bool DNFILNINCDI_DDHCBIPLLGF__MoveNext(DNFILNINCDI_DDHCBIPLLGF_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Networking_UnityWebRequest_o *pUVar4;
  Il2CppObject **ppIVar5;
  System_String_o *pSVar6;
  UnityEngine_Networking_UnityWebRequest_o **ppUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar8;
  System_Action_o *pSVar9;
  System_Action_string__o *pSVar10;
  double dVar11;
  
  if ((DAT_04565f8f & 1) == 0) {
    FUN_01bab630(&System_Threading_CancellationToken_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04565f8f = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -3;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pUVar4 = UnityEngine_Networking_UnityWebRequest__Post
                       ((__this->fields).url,(__this->fields).form,(MethodInfo *)0x0);
    (__this->fields)._w_5__2 = pUVar4;
    thunk_FUN_01c20e04();
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._w_5__2;
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar11 = System_TimeSpan__get_TotalSeconds
                       ((System_TimeSpan_o)&(__this->fields).timeout,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = -0x80000000;
    if (dVar11 != INFINITY) {
      iVar3 = (int)dVar11;
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(pUVar4,iVar3,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._w_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar4,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._w_5__2;
  if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = UnityEngine_Networking_UnityWebRequest__get_isDone(pUVar4,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((System_Threading_CancellationToken_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = System_Threading_CancellationToken__get_IsCancellationRequested
                      ((System_Threading_CancellationToken_o)&(__this->fields).token,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      ppIVar5 = &(__this->fields).__2__current;
      *ppIVar5 = (Il2CppObject *)0x0;
      thunk_FUN_01c20e04(ppIVar5,0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  if ((System_Threading_CancellationToken_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = System_Threading_CancellationToken__get_IsCancellationRequested
                    ((System_Threading_CancellationToken_o)&(__this->fields).token,(MethodInfo *)0x0
                    );
  pMVar8 = extraout_x1;
  if (!bVar2) {
    pUVar4 = (__this->fields)._w_5__2;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
    pMVar8 = extraout_x1_00;
    if (iVar3 == 1) {
      pSVar9 = (__this->fields).onSuccess;
      if (pSVar9 != (System_Action_o *)0x0) {
        (*(code *)(pSVar9->fields).super.super.invoke_impl)
                  ((pSVar9->fields).super.super.method_code,(pSVar9->fields).super.super.method);
        pMVar8 = extraout_x1_01;
      }
    }
    else {
      pSVar10 = (__this->fields).onFail;
      if (pSVar10 != (System_Action_string__o *)0x0) {
        pUVar4 = (__this->fields)._w_5__2;
        if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = UnityEngine_Networking_UnityWebRequest__get_error(pUVar4,(MethodInfo *)0x0);
        (*(code *)(pSVar10->fields).super.super.invoke_impl)
                  ((pSVar10->fields).super.super.method_code,pSVar6,
                   (pSVar10->fields).super.super.method);
        pMVar8 = extraout_x1_02;
      }
    }
  }
  DNFILNINCDI_DDHCBIPLLGF__EFDDMENDCDI(__this,pMVar8);
  ppUVar7 = &(__this->fields)._w_5__2;
  *ppUVar7 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  thunk_FUN_01c20e04(ppUVar7,0);
  return false;
}


// ===== private void EFDDMENDCDI()  [RVA 0x307362C]
// DNFILNINCDI.DDHCBIPLLGF$$EFDDMENDCDI @ RVA 0x307362C

void DNFILNINCDI_DDHCBIPLLGF__EFDDMENDCDI(DNFILNINCDI_DDHCBIPLLGF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  
  if ((DAT_04565f90 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    DAT_04565f90 = 1;
  }
  pUVar6 = (__this->fields)._w_5__2;
  (__this->fields).__1__state = -1;
  if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar2 = &(pUVar3->vtable)._0_Equals + *piVar5;
        goto LAB_031736c8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pUVar6,System_IDisposable_TypeInfo,0);
LAB_031736c8:
                    /* WARNING: Could not recover jumptable at 0x031736d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,pVVar2->method);
  return;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x30736DC]
// DNFILNINCDI.DDHCBIPLLGF$$System.Collections.IEnumerator.Reset @ RVA 0x30736DC

void DNFILNINCDI_DDHCBIPLLGF__System_Collections_IEnumerator_Reset
               (DNFILNINCDI_DDHCBIPLLGF_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_DNFILNINCDI_DDHCBIPLLGF_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3073714]
// DNFILNINCDI.DDHCBIPLLGF$$System.Collections.IEnumerator.get_Current @ RVA 0x3073714

Il2CppObject *
DNFILNINCDI_DDHCBIPLLGF__System_Collections_IEnumerator_get_Current
          (DNFILNINCDI_DDHCBIPLLGF_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

