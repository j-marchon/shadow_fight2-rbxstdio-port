// IJCLCKIJJDH$$FGNINNOOCCL @ RVA 0x352F7C0

void IJCLCKIJJDH__FGNINNOOCCL(IJCLCKIJJDH_o *__this,bool IBEBJHMKFGE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *JLNPKGGFFDD;
  UniRx_CompositeDisposable_o *__this_00;
  System_Action_bool__o *pSVar2;
  float fVar3;
  System_Nullable_float__Fields local_60;
  undefined1 local_54 [4];
  
  if ((DAT_04568a50 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&StringLiteral_3759);
    FUN_01bab630(&StringLiteral_22402);
    DAT_04568a50 = 1;
  }
  local_54[0] = IBEBJHMKFGE;
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_54);
  JLNPKGGFFDD = System_String__Format
                          (StringLiteral_22402,StringLiteral_3759,pIVar1,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  (__this->fields).IDNEINHPBHH = false;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0362f8c8 to 0372f9c7 has its CatchHandler @ 0362f8c8
                       catch() { ... } // from try @ 0362f8c8 with catch @ 0362f8c8
                       catch() { ... } // from try @ 0362fac4 with catch @ 0362f8c8
                       catch() { ... } // from try @ 0362fb18 with catch @ 0362f8c8
                       catch() { ... } // from try @ 0362fb58 with catch @ 0362f8c8
                       catch() { ... } // from try @ 0362fb88 with catch @ 0362f8c8 */
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    local_60.hasValue = false;
    local_60._1_3_ = 0;
    local_60.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_60,fVar3 + *(float *)((long)&pIVar1[5].monitor + 4),
               Method_System_Nullable<float>__ctor__);
    pSVar2 = (__this->fields).KEHNIDBCJPF;
    (__this->fields).OGMPOBAGDMG.fields = local_60;
    if (pSVar2 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,IBEBJHMKFGE,
                 (pSVar2->fields).super.super.method);
    }
    __this_00 = (__this->fields).MEMOAFOBLCM;
    if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
      UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

