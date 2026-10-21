// TypeDefIndex 2162
// Namespace: 
// [CompilerGenerated]
// private sealed class HAIGJHOMMPL.EHMANMMCGNH
// Fields:
//   public HAIGJHOMMPL <>4__this; // 0x10
//   public string callInfo; // 0x18
//   public Action callback; // 0x20

// ===== public void .ctor()  [RVA 0x32DB2BC]
// HAIGJHOMMPL.EHMANMMCGNH$$.ctor @ RVA 0x32DB2BC

void HAIGJHOMMPL_EHMANMMCGNH___ctor(HAIGJHOMMPL_EHMANMMCGNH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void MDEFMEBPAIF(Unit _)  [RVA 0x32DB7C4]
// HAIGJHOMMPL.EHMANMMCGNH$$MDEFMEBPAIF @ RVA 0x32DB7C4

void HAIGJHOMMPL_EHMANMMCGNH__MDEFMEBPAIF(long __this)

{
  Il2CppObject *ODHBNGEGFCJ;
  System_String_o *JLNPKGGFFDD;
  undefined8 extraout_x0;
  UniRx_ReactiveProperty_bool__o *__this_00;
  undefined8 extraout_x1;
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_045675c0 & 1) == 0) {
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>_set_Value__);
    FUN_01bab630(&StringLiteral_11336/*"Restart:	run\nCallInfo: "*/);
    DAT_045675c0 = 1;
  }
  ODHBNGEGFCJ = *(Il2CppObject **)(__this + 0x10);
  JLNPKGGFFDD = System_String__Concat
                          (StringLiteral_11336/*"Restart:	run\nCallInfo: "*/,*(System_String_o **)(__this + 0x18),
                           (MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA(ODHBNGEGFCJ,JLNPKGGFFDD,(MethodInfo *)0x0);
  auVar2._8_8_ = extraout_x1;
  auVar2._0_8_ = extraout_x0;
  lVar1 = *(long *)(__this + 0x20);
  if (lVar1 != 0) {
    auVar2 = (**(code **)(lVar1 + 0x18))
                       (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  if (*(long *)(__this + 0x10) != 0) {
    HAIGJHOMMPL__OAHINKDIKOH(auVar2._0_8_,auVar2._8_8_);
    SceneManagerSF__APMMIBJANFN((MethodInfo *)0x0);
    if (*(long *)(__this + 0x10) != 0) {
      __this_00 = *(UniRx_ReactiveProperty_bool__o **)(*(long *)(__this + 0x10) + 0x18);
      NDPMLPGANCI_TypeInfo->static_fields->EHFCPINCBGC = false;
      if (__this_00 != (UniRx_ReactiveProperty_bool__o *)0x0) {
        UniRx_ReactiveProperty<bool>__set_Value
                  (__this_00,false,Method_UniRx_ReactiveProperty<bool>_set_Value__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void FNOEBOKEKCL()  [RVA 0x32DB2C4]
// HAIGJHOMMPL.EHMANMMCGNH$$FNOEBOKEKCL @ RVA 0x32DB2C4

void HAIGJHOMMPL_EHMANMMCGNH__FNOEBOKEKCL(HAIGJHOMMPL_EHMANMMCGNH_o *__this,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  undefined8 extraout_x0;
  UniRx_ReactiveProperty_bool__o *__this_00;
  undefined8 extraout_x1;
  System_Action_o *pSVar1;
  HAIGJHOMMPL_o *pHVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_045675c0 & 1) == 0) {
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>_set_Value__);
    FUN_01bab630(&StringLiteral_11336/*"Restart:	run\nCallInfo: "*/);
    DAT_045675c0 = 1;
  }
  pHVar2 = (__this->fields).__4__this;
  JLNPKGGFFDD = System_String__Concat
                          (StringLiteral_11336/*"Restart:	run\nCallInfo: "*/,(__this->fields).callInfo,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)pHVar2,JLNPKGGFFDD,(MethodInfo *)0x0);
  auVar3._8_8_ = extraout_x1;
  auVar3._0_8_ = extraout_x0;
  pSVar1 = (__this->fields).callback;
  if (pSVar1 != (System_Action_o *)0x0) {
    auVar3 = (*(code *)(pSVar1->fields).super.super.invoke_impl)
                       ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method
                       );
  }
  if ((__this->fields).__4__this != (HAIGJHOMMPL_o *)0x0) {
    HAIGJHOMMPL__OAHINKDIKOH(auVar3._0_8_,auVar3._8_8_);
    SceneManagerSF__APMMIBJANFN((MethodInfo *)0x0);
    pHVar2 = (__this->fields).__4__this;
    if (pHVar2 != (HAIGJHOMMPL_o *)0x0) {
      __this_00 = (pHVar2->fields).DDKAEOMHAPH;
      NDPMLPGANCI_TypeInfo->static_fields->EHFCPINCBGC = false;
      if (__this_00 != (UniRx_ReactiveProperty_bool__o *)0x0) {
        UniRx_ReactiveProperty<bool>__set_Value
                  (__this_00,false,Method_UniRx_ReactiveProperty<bool>_set_Value__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

