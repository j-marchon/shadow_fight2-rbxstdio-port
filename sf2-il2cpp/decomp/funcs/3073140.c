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

