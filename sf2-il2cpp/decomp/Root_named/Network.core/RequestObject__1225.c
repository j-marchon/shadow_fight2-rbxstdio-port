// Original name: Network.core.RequestObject  (obfuscated ONPHBGJDFBM)
// TypeDefIndex 1225
// Namespace: 
// public class RequestObject
// Fields:
//   private const float BBINJHMMCAP = 0.1;
//   public readonly string LKMJHMMBNAO; // 0x10
//   public readonly object KOANCCDDBDA; // 0x18
//   private Action<KEFHDOHHHML> BLNMHHKCCOD; // 0x20
//   private IEnumerator ENDCJNFPMCD; // 0x28

// ===== public void HCBAKFNPGDN(KEFHDOHHHML JPLEIGKMFDA)  [RVA 0x3132F48]
// RequestObject$$HCBAKFNPGDN @ RVA 0x3132F48

void RequestObject__HCBAKFNPGDN(RequestObject_o *__this,KEFHDOHHHML_o *JPLEIGKMFDA,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__o *pSVar1;
  
  pSVar1 = (__this->fields).BLNMHHKCCOD;
  if (pSVar1 != (System_Action_KEFHDOHHHML__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03232f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,JPLEIGKMFDA,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== public bool KCEBNCEKNJD(Action<KEFHDOHHHML> CPECAEHDDDB)  [RVA 0x3132F64]
// RequestObject$$KCEBNCEKNJD @ RVA 0x3132F64

bool RequestObject__KCEBNCEKNJD
               (RequestObject_o *__this,System_Action_KEFHDOHHHML__o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_045666e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Delegate>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Delegate>_TypeInfo);
    DAT_045666e2 = 1;
  }
  if (CPECAEHDDDB != (System_Action_KEFHDOHHHML__o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(CPECAEHDDDB->klass->vtable)._10_GetInvocationList.methodPtr)
                           (CPECAEHDDDB,(CPECAEHDDDB->klass->vtable)._10_GetInvocationList.method);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<Delegate>_TypeInfo);
    method_00 = Method_System_Collections_Generic_List<Delegate>__ctor__;
    System_Collections_Generic_List<object>___ctor
              (__this_00,collection,
               (MethodInfo_26E46A0 *)Method_System_Collections_Generic_List<Delegate>__ctor__);
    bVar1 = RequestObject__KCEBNCEKNJD(__this,(Il2CppObject *)__this_00,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DBBHAGMABOB(Action<KEFHDOHHHML> CJNHFNHJHPE)  [RVA 0x313311C]
// RequestObject$$DBBHAGMABOB @ RVA 0x313311C

void RequestObject__DBBHAGMABOB
               (RequestObject_o *__this,System_Action_KEFHDOHHHML__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_KEFHDOHHHML__o *pSVar5;
  System_Action_KEFHDOHHHML__o **ppSVar6;
  System_Action_KEFHDOHHHML__o *source;
  
  if ((DAT_045666e3 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    DAT_045666e3 = 1;
  }
  ppSVar6 = &(__this->fields).BLNMHHKCCOD;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<KEFHDOHHHML>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_KEFHDOHHHML__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void .ctor(string CELOLGNMKCG, Action<KEFHDOHHHML> BLMFLPJJMPF, object IMMNELPBGIF)  [RVA 0x31331CC]
// RequestObject$$.ctor @ RVA 0x31331CC

void RequestObject___ctor(RequestObject_o *__this,System_String_o *CELOLGNMKCG,
                       System_Action_KEFHDOHHHML__o *BLMFLPJJMPF,Il2CppObject *IMMNELPBGIF,
                       MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  Il2CppObject **ppIVar2;
  System_Action_KEFHDOHHHML__o **ppSVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).ENDCJNFPMCD;
                    /* try { // try from 032331f0 to 0333394f has its CatchHandler @ 032331f0
                       catch() { ... } // from try @ 032331f0 with catch @ 032331f0
                       catch() { ... } // from try @ 03233c7c with catch @ 032331f0
                       catch() { ... } // from try @ 03233d78 with catch @ 032331f0
                       catch() { ... } // from try @ 03233ed8 with catch @ 032331f0
                       catch() { ... } // from try @ 03233f00 with catch @ 032331f0
                       catch() { ... } // from try @ 03233f60 with catch @ 032331f0
                       catch() { ... } // from try @ 03234008 with catch @ 032331f0
                       catch() { ... } // from try @ 03234048 with catch @ 032331f0 */
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  (__this->fields).LKMJHMMBNAO = CELOLGNMKCG;
  thunk_FUN_01c20e04(&__this->fields,CELOLGNMKCG);
  ppIVar2 = &(__this->fields).KOANCCDDBDA;
  *ppIVar2 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppIVar2,IMMNELPBGIF);
  ppSVar3 = &(__this->fields).BLNMHHKCCOD;
  *ppSVar3 = BLMFLPJJMPF;
  thunk_FUN_01c20e04(ppSVar3,BLMFLPJJMPF);
  return;
}


// ===== private IEnumerator MIFNEMBFEME(Action JPBADEBNNLL, float GMMMKAPIGPA)  [RVA 0x313323C]
// RequestObject$$MIFNEMBFEME @ RVA 0x313323C

System_Collections_IEnumerator_o *
RequestObject__MIFNEMBFEME
          (RequestObject_o *__this,System_Action_o *JPBADEBNNLL,float GMMMKAPIGPA,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_045666e4 & 1) == 0) {
    FUN_01bab630(&RequestObject_HCDDHOMMEHE_TypeInfo);
    DAT_045666e4 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(RequestObject_HCDDHOMMEHE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].monitor = JPBADEBNNLL;
  thunk_FUN_01c20e04(&__this_00[2].monitor,JPBADEBNNLL);
  *(float *)&__this_00[2].klass = GMMMKAPIGPA;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void DCLABJGIAIG()  [RVA 0x31332E0]
// RequestObject$$DCLABJGIAIG @ RVA 0x31332E0

void RequestObject__DCLABJGIAIG(RequestObject_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045666e5 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045666e5 = 1;
  }
  ppSVar7 = &(__this->fields).ENDCJNFPMCD;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0323338c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0323338c:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void OCECLIFLFHK(Action JPBADEBNNLL, float IIKNBOMDFHP)  [RVA 0x31333B8]
// RequestObject$$OCECLIFLFHK @ RVA 0x31333B8

void RequestObject__OCECLIFLFHK
               (RequestObject_o *__this,System_Action_o *JPBADEBNNLL,float IIKNBOMDFHP,
               MethodInfo *method)

{
  ushort uVar1;
  RequestObject_o *__this_00;
  System_Collections_IEnumerator_o *pSVar2;
  VirtualInvokeData *pVVar3;
  System_Action_o *extraout_x1;
  System_Action_o *extraout_x1_00;
  System_Action_o *method_00;
  RequestObject_c *pOVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  
  method_00 = JPBADEBNNLL;
  if ((DAT_045666e6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_11276/*"RequestObject::StartTimeoutCoroutine: Should not create multiple timeouts on one object"*/);
    DAT_045666e6 = 1;
    method_00 = extraout_x1;
  }
  ppSVar7 = &(__this->fields).ENDCJNFPMCD;
  if (*ppSVar7 != (System_Collections_IEnumerator_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11276/*"RequestObject::StartTimeoutCoroutine: Should not create multiple timeouts on one object"*/,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  RequestObject__DCLABJGIAIG(__this,(MethodInfo *)method_00);
  __this_00 = (RequestObject_o *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar2 = RequestObject__MIFNEMBFEME(__this_00,JPBADEBNNLL,IIKNBOMDFHP,method);
  if (__this_00 == (RequestObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar4 = __this_00->klass;
  uVar1._0_1_ = (pOVar4->_2).rank;
  uVar1._1_1_ = (pOVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pOVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = &(pOVar4->vtable)._0_Equals + *piVar6;
        goto LAB_032334c0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(__this_00,PBAKFOBIHEG_TypeInfo,0);
LAB_032334c0:
  pSVar2 = (System_Collections_IEnumerator_o *)
           (*pVVar3->methodPtr)(__this_00,pSVar2,1,pVVar3->method);
  *ppSVar7 = pSVar2;
  thunk_FUN_01c20e04(ppSVar7,pSVar2);
  return;
}


// ===== private void MHAHGDGAAFA(Action<KEFHDOHHHML> CJNHFNHJHPE)  [RVA 0x31334F8]
// RequestObject$$MHAHGDGAAFA @ RVA 0x31334F8

void RequestObject__MHAHGDGAAFA
               (RequestObject_o *__this,System_Action_KEFHDOHHHML__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_KEFHDOHHHML__o *pSVar5;
  System_Action_KEFHDOHHHML__o **ppSVar6;
  System_Action_KEFHDOHHHML__o *a;
  
  if ((DAT_045666e7 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    DAT_045666e7 = 1;
  }
  ppSVar6 = &(__this->fields).BLNMHHKCCOD;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<KEFHDOHHHML>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_KEFHDOHHHML__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool KCEBNCEKNJD(List<Delegate> PLELINICIDD, int[] MLNEFBDGKEK)  [RVA 0x31335A8]
// RequestObject$$KCEBNCEKNJD @ RVA 0x31335A8

bool RequestObject__KCEBNCEKNJD
               (RequestObject_o *__this,System_Collections_Generic_List_Delegate__o *PLELINICIDD,
               System_Int32_array *MLNEFBDGKEK,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__c *pSVar1;
  bool bVar2;
  uint uVar3;
  System_Action_KEFHDOHHHML__o *pSVar4;
  long lVar5;
  MethodInfo *method_00;
  ulong uVar6;
  Il2CppObject *item;
  ulong uVar7;
  
  if ((DAT_045666e8 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Delegate>_IndexOf__);
    DAT_045666e8 = 1;
  }
  pSVar4 = (__this->fields).BLNMHHKCCOD;
  if (pSVar4 == (System_Action_KEFHDOHHHML__o *)0x0) {
    return true;
  }
  lVar5 = (*(pSVar4->klass->vtable)._10_GetInvocationList.methodPtr)
                    (pSVar4,(pSVar4->klass->vtable)._10_GetInvocationList.method);
  if (lVar5 == 0) {
LAB_03233718:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar7 = 0;
    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar7) {
LAB_0323371c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (PLELINICIDD == (System_Collections_Generic_List_Delegate__o *)0x0) goto LAB_03233718;
      item = *(Il2CppObject **)(lVar5 + 0x20 + uVar7 * 8);
      method_00 = Method_System_Collections_Generic_List<Delegate>_IndexOf__;
      uVar3 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)PLELINICIDD,item,
                         (MethodInfo_26E5A4C *)
                         Method_System_Collections_Generic_List<Delegate>_IndexOf__);
      pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
      if (-1 < (int)uVar3) {
        if (item == (Il2CppObject *)0x0) {
          pSVar4 = (System_Action_KEFHDOHHHML__o *)0x0;
        }
        else {
          pSVar4 = (System_Action_KEFHDOHHHML__o *)
                   thunk_FUN_01bda71c(item,System_Action<KEFHDOHHHML>_TypeInfo);
          if (pSVar4 == (System_Action_KEFHDOHHHML__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(item,pSVar1);
          }
        }
        RequestObject__DBBHAGMABOB(__this,pSVar4,method_00);
        if (MLNEFBDGKEK == (System_Int32_array *)0x0) goto LAB_03233718;
        if ((uint)MLNEFBDGKEK->max_length <= uVar3) goto LAB_0323371c;
        MLNEFBDGKEK->m_Items[uVar3] = MLNEFBDGKEK->m_Items[uVar3] + 1;
        break;
      }
      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  bVar2 = FDAHDCHADGJ__BDLEIEHBFAD<object>
                    ((System_Action_T__o *)(__this->fields).BLNMHHKCCOD,
                     Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
  return bVar2;
}


// ===== public bool KCEBNCEKNJD(object ANGBPBINHBL)  [RVA 0x3133004]
// RequestObject$$KCEBNCEKNJD @ RVA 0x3133004

bool RequestObject__KCEBNCEKNJD(RequestObject_o *__this,Il2CppObject *ANGBPBINHBL,MethodInfo *method)

{
  uint uVar1;
  System_Action_KEFHDOHHHML__c *pSVar2;
  bool bVar3;
  System_Action_KEFHDOHHHML__o *pSVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if ((DAT_045666e9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
    DAT_045666e9 = 1;
  }
  bVar3 = FDAHDCHADGJ__BDLEIEHBFAD<object>
                    ((System_Action_T__o *)(__this->fields).BLNMHHKCCOD,
                     Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
  if (!bVar3) {
    pSVar4 = (__this->fields).BLNMHHKCCOD;
    if (pSVar4 != (System_Action_KEFHDOHHHML__o *)0x0) {
      lVar5 = (*(pSVar4->klass->vtable)._10_GetInvocationList.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._10_GetInvocationList.method);
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            pSVar2 = System_Action<KEFHDOHHHML>_TypeInfo;
            if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            lVar6 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_03233108;
            if (*(Il2CppObject **)(lVar6 + 0x20) == ANGBPBINHBL) {
              pSVar4 = (System_Action_KEFHDOHHHML__o *)
                       thunk_FUN_01bda71c(lVar6,System_Action<KEFHDOHHHML>_TypeInfo);
              if (pSVar4 == (System_Action_KEFHDOHHHML__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(lVar6,pSVar2);
              }
              RequestObject__DBBHAGMABOB(__this,pSVar4,method);
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar1);
        }
        goto LAB_032330e8;
      }
    }
LAB_03233108:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_032330e8:
  bVar3 = FDAHDCHADGJ__BDLEIEHBFAD<object>
                    ((System_Action_T__o *)(__this->fields).BLNMHHKCCOD,
                     Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
  return bVar3;
}

