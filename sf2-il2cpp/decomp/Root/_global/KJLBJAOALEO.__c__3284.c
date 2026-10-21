// TypeDefIndex 3284
// Namespace: 
// [Serializable]
// private sealed class KJLBJAOALEO.<>c
// Fields:
//   public static readonly KJLBJAOALEO.<>c <>9; // 0x0
//   public static Func<Action<ValueTuple<LevelPlayAdInfo, LevelPlayAdError>>, Action<LevelPlayAdInfo, LevelPlayAdError>> <>9__3_8; // 0x8
//   public static Func<Action<ValueTuple<LevelPlayAdInfo, LevelPlayReward>>, Action<LevelPlayAdInfo, LevelPlayReward>> <>9__3_11; // 0x10

// ===== internal Action<LevelPlayAdInfo, LevelPlayReward> AKLCBIPLFOO(Action<ValueTuple<LevelPlayAdInfo, LevelPlayReward>> h)  [RVA 0x351CAC8]
// KJLBJAOALEO.<>c$$AKLCBIPLFOO @ RVA 0x351CAC8

System_Action_LevelPlayAdInfo__LevelPlayReward__o *
KJLBJAOALEO_<>c__AKLCBIPLFOO
          (KJLBJAOALEO___c_o *__this,
          System_Action_ValueTuple_LevelPlayAdInfo__LevelPlayReward___o *h,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_LevelPlayAdInfo__LevelPlayReward__o *pSVar1;
  
  if ((DAT_04568995 & 1) == 0) {
    FUN_01bab630(&System_Action<LevelPlayAdInfo,_LevelPlayReward>_TypeInfo);
    FUN_01bab630(&Method_KJLBJAOALEO_INOJFHGMEIB_OKFIAAKDMNA__);
    FUN_01bab630(&KJLBJAOALEO_INOJFHGMEIB_TypeInfo);
    DAT_04568995 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KJLBJAOALEO_INOJFHGMEIB_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)h;
    thunk_FUN_01c20e04(__this_00 + 1,h);
    pSVar1 = (System_Action_LevelPlayAdInfo__LevelPlayReward__o *)
             thunk_FUN_01bda818(System_Action<LevelPlayAdInfo,_LevelPlayReward>_TypeInfo);
    System_Action<object,_object>___ctor();
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x351CB8C]
// KJLBJAOALEO.<>c$$.ctor @ RVA 0x351CB8C

void KJLBJAOALEO_<>c___ctor(KJLBJAOALEO___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal Action<LevelPlayAdInfo, LevelPlayAdError> DACCEKBJBBC(Action<ValueTuple<LevelPlayAdInfo, LevelPlayAdError>> h)  [RVA 0x351CB94]
// KJLBJAOALEO.<>c$$DACCEKBJBBC @ RVA 0x351CB94

System_Action_LevelPlayAdInfo__LevelPlayAdError__o *
KJLBJAOALEO_<>c__DACCEKBJBBC
          (KJLBJAOALEO___c_o *__this,
          System_Action_ValueTuple_LevelPlayAdInfo__LevelPlayAdError___o *h,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_LevelPlayAdInfo__LevelPlayAdError__o *pSVar1;
  
  if ((DAT_04568996 & 1) == 0) {
    FUN_01bab630(&Method_KJLBJAOALEO_AJDDNOMFCML_NCBJALAEJGI__);
    FUN_01bab630(&KJLBJAOALEO_AJDDNOMFCML_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo);
    DAT_04568996 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KJLBJAOALEO_AJDDNOMFCML_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)h;
    thunk_FUN_01c20e04(__this_00 + 1,h);
    pSVar1 = (System_Action_LevelPlayAdInfo__LevelPlayAdError__o *)
             thunk_FUN_01bda818(System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo);
    System_Action<object,_object>___ctor();
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x351CC58]
// KJLBJAOALEO.<>c$$.cctor @ RVA 0x351CC58

void KJLBJAOALEO_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568997 & 1) == 0) {
    FUN_01bab630(&KJLBJAOALEO_<>c_TypeInfo);
                    /* try { // try from 0361cc80 to 0371cddb has its CatchHandler @ 0361cc80
                       catch() { ... } // from try @ 0361cc80 with catch @ 0361cc80
                       catch() { ... } // from try @ 0361ce14 with catch @ 0361cc80
                       catch() { ... } // from try @ 0361ced4 with catch @ 0361cc80
                       catch() { ... } // from try @ 0361cf00 with catch @ 0361cc80
                       catch() { ... } // from try @ 0361cf40 with catch @ 0361cc80 */
    DAT_04568997 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KJLBJAOALEO_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  KJLBJAOALEO_<>c_TypeInfo->static_fields->__9 = (KJLBJAOALEO___c_o *)__this;
  thunk_FUN_01c20e04(KJLBJAOALEO_<>c_TypeInfo->static_fields,__this);
  return;
}

