// TypeDefIndex 806
// Namespace: 
// public class DNFILNINCDI
// Fields:

// ===== private static IEnumerator HKMAJIACHCN(string CJFAPGEEPLM, WWWForm OFOIILMAIPG, TimeSpan MINHPKOPAIE, Action AENHHCABJBP, Action<string> KMLNNMBIHLB, CancellationToken NPAAFDINGAB)  [RVA 0x3073140]
// DNFILNINCDI$$HKMAJIACHCN @ RVA 0x3073140

System_Collections_IEnumerator_o *
DNFILNINCDI__HKMAJIACHCN
          (System_String_o *CJFAPGEEPLM,UnityEngine_WWWForm_o *OFOIILMAIPG,
          System_TimeSpan_o MINHPKOPAIE,System_Action_o *AENHHCABJBP,
          System_Action_string__o *KMLNNMBIHLB,System_Threading_CancellationToken_o NPAAFDINGAB,
          MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565f8d & 1) == 0) {
    FUN_01bab630(&DNFILNINCDI_DDHCBIPLLGF_TypeInfo);
    DAT_04565f8d = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(DNFILNINCDI_DDHCBIPLLGF_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  __this[2].klass = (Il2CppClass *)CJFAPGEEPLM;
  thunk_FUN_01c20e04(__this + 2,CJFAPGEEPLM);
  __this[2].monitor = OFOIILMAIPG;
  thunk_FUN_01c20e04(&__this[2].monitor,OFOIILMAIPG);
  __this[3].klass = (Il2CppClass *)MINHPKOPAIE.fields._ticks;
  __this[4].monitor = AENHHCABJBP;
  thunk_FUN_01c20e04(&__this[4].monitor,AENHHCABJBP);
  __this[4].klass = (Il2CppClass *)KMLNNMBIHLB;
  thunk_FUN_01c20e04(__this + 4,KMLNNMBIHLB);
  __this[3].monitor = (void *)NPAAFDINGAB.fields._source;
  thunk_FUN_01c20e04(&__this[3].monitor,0);
  return (System_Collections_IEnumerator_o *)__this;
}


// ===== public void .ctor()  [RVA 0x3073244]
// DNFILNINCDI$$.ctor @ RVA 0x3073244

void DNFILNINCDI___ctor(DNFILNINCDI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static void JDJHKOMMHKP(string CJFAPGEEPLM, WWWForm OFOIILMAIPG, TimeSpan MINHPKOPAIE, Action AENHHCABJBP, Action<string> KMLNNMBIHLB, CancellationToken NPAAFDINGAB)  [RVA 0x307324C]
// DNFILNINCDI$$JDJHKOMMHKP @ RVA 0x307324C

void DNFILNINCDI__JDJHKOMMHKP
               (System_String_o *CJFAPGEEPLM,UnityEngine_WWWForm_o *OFOIILMAIPG,
               System_TimeSpan_o MINHPKOPAIE,System_Action_o *AENHHCABJBP,
               System_Action_string__o *KMLNNMBIHLB,System_Threading_CancellationToken_o NPAAFDINGAB
               ,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04565f8e & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565f8e = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = DNFILNINCDI__HKMAJIACHCN
                     (CJFAPGEEPLM,OFOIILMAIPG,MINHPKOPAIE,AENHHCABJBP,KMLNNMBIHLB,NPAAFDINGAB,method
                     );
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_03173318;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_03173318:
                    /* WARNING: Could not recover jumptable at 0x03173338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  return;
}

