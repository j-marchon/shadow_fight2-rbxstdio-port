// HAIGJHOMMPL$$OMIKONPHMAP @ RVA 0x32DAF84

void HAIGJHOMMPL__OMIKONPHMAP
               (HAIGJHOMMPL_o *__this,System_String_o *KJFHGIJLNPC,System_Action_o *BLMFLPJJMPF,
               MethodInfo *method)

{
  bool bVar1;
  HAIGJHOMMPL_EHMANMMCGNH_o *__this_00;
  System_Action_o **ppSVar2;
  System_String_o *JLNPKGGFFDD;
  UniRx_ReactiveProperty_bool__o *__this_01;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UniRx_SerialDisposable_o *__this_02;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_o *pNVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045675bb & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_HAIGJHOMMPL_EHMANMMCGNH_MDEFMEBPAIF__);
    FUN_01bab630(&HAIGJHOMMPL_EHMANMMCGNH_TypeInfo);
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>_set_Value__);
    FUN_01bab630(&StringLiteral_11335);
    DAT_045675bb = 1;
  }
  __this_00 = (HAIGJHOMMPL_EHMANMMCGNH_o *)thunk_FUN_01bda818(HAIGJHOMMPL_EHMANMMCGNH_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (HAIGJHOMMPL_EHMANMMCGNH_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    ppSVar4 = &(__this_00->fields).callInfo;
    *ppSVar4 = KJFHGIJLNPC;
    thunk_FUN_01c20e04(ppSVar4,KJFHGIJLNPC);
    ppSVar2 = &(__this_00->fields).callback;
    *ppSVar2 = BLMFLPJJMPF;
    thunk_FUN_01c20e04(ppSVar2,BLMFLPJJMPF);
    JLNPKGGFFDD = System_String__Concat(StringLiteral_11335,*ppSVar4,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    __this_01 = (__this->fields).DDKAEOMHAPH;
    NDPMLPGANCI_TypeInfo->static_fields->EHFCPINCBGC = true;
    if (__this_01 != (UniRx_ReactiveProperty_bool__o *)0x0) {
      UniRx_ReactiveProperty<bool>__set_Value
                (__this_01,true,Method_UniRx_ReactiveProperty<bool>_set_Value__);
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456720a == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
        DAT_0456720a = '\x01';
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
               _JPNBHEPPPNP_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if (!bVar1) {
LAB_033db2a0:
        HAIGJHOMMPL_EHMANMMCGNH__FNOEBOKEKCL(__this_00,method_00);
        return;
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456720a == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
        DAT_0456720a = '\x01';
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
               _JPNBHEPPPNP_k__BackingField;
      if (pNVar3 != (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) {
        bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(pNVar3,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
        if (!bVar1) goto LAB_033db2a0;
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_0456720a == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
          DAT_0456720a = '\x01';
        }
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                 _JPNBHEPPPNP_k__BackingField;
        if (pNVar3 != (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) {
          Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleButton(pNVar3,(MethodInfo *)0x0);
          __this_02 = (__this->fields).AJLCLKJCEHA;
          if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          source = UniRx_Observable__NextFrame(0,(MethodInfo *)0x0);
          onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
          System_Action<Unit>___ctor();
          value = UniRx_ObservableExtensions__Subscribe<Unit>
                            ((System_IObservable_T__o *)source,onNext,
                             Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
          if (__this_02 != (UniRx_SerialDisposable_o *)0x0) {
            UniRx_SerialDisposable__set_Disposable(__this_02,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

