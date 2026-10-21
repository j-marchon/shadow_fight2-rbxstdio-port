// LHOMEBJDFLD$$AOGEKFNDJEA @ RVA 0x3022F0C

void LHOMEBJDFLD__AOGEKFNDJEA(LHOMEBJDFLD_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  PGICCMFLDPI_o *__this_00;
  MethodInfo *method_00;
  int64_t iVar2;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  System_Nullable_float__Fields local_38;
  
  if ((DAT_04565c6b & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_LHOMEBJDFLD_PNIKPDDINKE__);
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&StringLiteral_20209);
    DAT_04565c6b = 1;
  }
  ppSVar1 = &(__this->fields).JBGNDDGMAAL;
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
  PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
  iVar2 = LHOMEBJDFLD__LNHHOGGMMMK(method_00);
  if (__this_00 != (PGICCMFLDPI_o *)0x0) {
    (__this_00->fields).GDKPGIBMFPA = iVar2;
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value = 0.0;
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_38,10000.0,Method_System_Nullable<float>__ctor__);
    KKLJIDJBFEI__JHOMBFLNHPP
              (StringLiteral_20209,(Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,
               (Il2CppObject *)0x0,(System_Nullable_float__o)local_38,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

