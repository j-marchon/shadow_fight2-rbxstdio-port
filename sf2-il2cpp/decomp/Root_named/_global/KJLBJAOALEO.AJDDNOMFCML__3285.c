// TypeDefIndex 3285
// Namespace: 
// [CompilerGenerated]
// private sealed class KJLBJAOALEO.AJDDNOMFCML
// Fields:
//   public Action<ValueTuple<LevelPlayAdInfo, LevelPlayAdError>> h; // 0x10

// ===== internal void NCBJALAEJGI(LevelPlayAdInfo adInfo, LevelPlayAdError errorInfo)  [RVA 0x351CCC0]
// KJLBJAOALEO.AJDDNOMFCML$$NCBJALAEJGI @ RVA 0x351CCC0

void KJLBJAOALEO_AJDDNOMFCML__NCBJALAEJGI
               (KJLBJAOALEO_AJDDNOMFCML_o *__this,Unity_Services_LevelPlay_LevelPlayAdInfo_o *adInfo
               ,Unity_Services_LevelPlay_LevelPlayAdError_o *errorInfo,MethodInfo *method)

{
  MethodInfo_2BCF900 *in_x4;
  System_Action_ValueTuple_LevelPlayAdInfo__LevelPlayAdError___o *pSVar1;
  System_ValueTuple_object__object__o __this_00;
  Il2CppObject local_40;
  
  if ((DAT_04568998 & 1) == 0) {
    FUN_01bab630(&Method_System_ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>__ctor__);
    DAT_04568998 = 1;
  }
  pSVar1 = (__this->fields).h;
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (void *)0x0;
  __this_00.fields.Item2 = (Il2CppObject *)adInfo;
  __this_00.fields.Item1 = &local_40;
  System_ValueTuple<object,_object>___ctor
            (__this_00,(Il2CppObject *)errorInfo,
             Method_System_ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>__ctor__,in_x4);
  if (pSVar1 != (System_Action_ValueTuple_LevelPlayAdInfo__LevelPlayAdError___o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,local_40.klass,local_40.monitor,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x351CC50]
// KJLBJAOALEO.AJDDNOMFCML$$.ctor @ RVA 0x351CC50

void KJLBJAOALEO_AJDDNOMFCML___ctor(KJLBJAOALEO_AJDDNOMFCML_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

