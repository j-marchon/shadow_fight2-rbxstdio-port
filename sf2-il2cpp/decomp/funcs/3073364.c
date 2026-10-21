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

