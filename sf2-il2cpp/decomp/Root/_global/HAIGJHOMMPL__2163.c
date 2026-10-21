// TypeDefIndex 2163
// Namespace: 
// public class HAIGJHOMMPL : GOCLIOIANDK<HAIGJHOMMPL, HCOEEOMMEFL>, HCOEEOMMEFL, IDisposable
// Fields:
//   private readonly SerialDisposable AJLCLKJCEHA; // 0x10
//   private readonly ReactiveProperty<bool> DDKAEOMHAPH; // 0x18

// ===== public IObservable<Unit> IJGMKIKNLNP()  [RVA 0x32DAE48]
// HAIGJHOMMPL$$IJGMKIKNLNP @ RVA 0x32DAE48

System_IObservable_Unit__o * HAIGJHOMMPL__IJGMKIKNLNP(HAIGJHOMMPL_o *__this,MethodInfo *method)

{
  System_Func_bool__bool__o **ppSVar1;
  System_IObservable_T__o *source;
  System_IObservable_Unit__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  UniRx_ReactiveProperty_bool__o *source_00;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_045675ba & 1) == 0) {
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_AsUnitObservable<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_HAIGJHOMMPL_<>c_EEAGCPLFMCK__);
    FUN_01bab630(&HAIGJHOMMPL_<>c_TypeInfo);
    DAT_045675ba = 1;
    method = extraout_x1;
  }
  source_00 = (__this->fields).DDKAEOMHAPH;
  if ((HAIGJHOMMPL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HAIGJHOMMPL_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = HAIGJHOMMPL_<>c_TypeInfo->static_fields->__9__1_0;
  if (predicate == (System_Func_bool__bool__o *)0x0) {
    if ((HAIGJHOMMPL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HAIGJHOMMPL_<>c_TypeInfo,method);
    }
    predicate = (System_Func_bool__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
    System_Func<bool,_bool>___ctor();
    ppSVar1 = &HAIGJHOMMPL_<>c_TypeInfo->static_fields->__9__1_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
    method = extraout_x1_01;
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  source = UniRx_Observable__Where<bool>
                     ((System_IObservable_T__o *)source_00,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<bool>__);
  pSVar2 = UniRx_Observable__AsUnitObservable<bool>
                     (source,Method_UniRx_Observable_AsUnitObservable<bool>__);
  return pSVar2;
}


// ===== public void OMIKONPHMAP(string KJFHGIJLNPC, Action BLMFLPJJMPF)  [RVA 0x32DAF84]
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
    FUN_01bab630(&StringLiteral_11335/*"Restart:	create request\nCallInfo: "*/);
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
    JLNPKGGFFDD = System_String__Concat(StringLiteral_11335/*"Restart:	create request\nCallInfo: "*/,*ppSVar4,(MethodInfo *)0x0);
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


// ===== public void OAHINKDIKOH()  [RVA 0x32DB3A0]
// HAIGJHOMMPL$$OAHINKDIKOH @ RVA 0x32DB3A0

void HAIGJHOMMPL__OAHINKDIKOH(HAIGJHOMMPL_o *__this,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  Core_Network_ServerProvider_o *__this_02;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  GCIFMNHADDF_o *__this_03;
  NDPMLPGANCI_o *__this_04;
  AAPGCAPGBLG_o *__this_05;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_06;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675bc & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_JODGPLBHHIA__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_045675bc = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (JMDPBFOCHHP_o *)0x0) {
    JMDPBFOCHHP__HFCBMLPLEAN(__this_00,(MethodInfo *)0x0);
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__FHIODBIPGBG(__this_01,(MethodInfo *)0x0);
      __this_02 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
      if (__this_02 != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__StopLogin(__this_02,(MethodInfo *)0x0);
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__ClearStack
                    (pNVar2,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
          pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
            Nekki_SF2_Core_Quests_QuestsManager__ClearActions(pNVar2,(MethodInfo *)0x0);
            Nekki_SF2_Core_Quests_QuestsManager__Destroy((MethodInfo *)0x0);
            __this_03 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
            if (__this_03 != (GCIFMNHADDF_o *)0x0) {
              GCIFMNHADDF__DEAPPIKAHEP(__this_03,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications
                        ((MethodInfo *)0x0);
              __this_04 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
              if (__this_04 != (NDPMLPGANCI_o *)0x0) {
                NDPMLPGANCI__KJGGEPNHOBK(__this_04,(MethodInfo *)0x0);
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                MGNPHCAAEIO__DGLJCGNHLIG((MethodInfo *)0x0);
                NDPMLPGANCI__DGLJCGNHLIG((MethodInfo *)0x0);
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                NLPJLHOEAOE__DGLJCGNHLIG((MethodInfo *)0x0);
                Core_Network_ServerProvider__Reset((MethodInfo *)0x0);
                if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                LDHBHPILNMA__EIPFMFENGKA((MethodInfo *)0x0);
                if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar1 = OCMLPCKBHPN__GBNKDCDOECL((MethodInfo *)0x0);
                OCMLPCKBHPN__CCCOGGIBFNI((bool)(~bVar1 & 1),(MethodInfo *)0x0);
                if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                IOIKBGAJIGO__PCPILFKFNFJ((MethodInfo *)0x0);
                EHOFKBDKGBK<object,_object>__JODGPLBHHIA
                          (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_JODGPLBHHIA__);
                __this_05 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
                if (__this_05 != (AAPGCAPGBLG_o *)0x0) {
                  AAPGCAPGBLG__DGLJCGNHLIG(__this_05,(MethodInfo *)0x0);
                  bVar1 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__IsInstanceExists((MethodInfo *)0x0)
                  ;
                  if (!bVar1) {
                    return;
                  }
                  __this_06 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0)
                  ;
                  if (__this_06 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
                    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn
                              (__this_06,false,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Dispose()  [RVA 0x32DB5E8]
// HAIGJHOMMPL$$Dispose @ RVA 0x32DB5E8

void HAIGJHOMMPL__Dispose(HAIGJHOMMPL_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_bool__o *__this_01;
  
  if ((DAT_045675bd & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_Dispose__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>_Dispose__);
    DAT_045675bd = 1;
  }
  GOCLIOIANDK<object,_object>__Dispose
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_Dispose__);
  __this_00 = (__this->fields).AJLCLKJCEHA;
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).DDKAEOMHAPH;
  if (__this_01 != (UniRx_ReactiveProperty_bool__o *)0x0) {
    UniRx_ReactiveProperty<bool>__Dispose(__this_01,Method_UniRx_ReactiveProperty<bool>_Dispose__);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x32DB670]
// HAIGJHOMMPL$$.ctor @ RVA 0x32DB670

void HAIGJHOMMPL___ctor(HAIGJHOMMPL_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_bool__o *__this_01;
  UniRx_ReactiveProperty_bool__o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675be & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>__ctor__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<bool>_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_045675be = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).AJLCLKJCEHA = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_ReactiveProperty_bool__o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<bool>_TypeInfo);
  UniRx_ReactiveProperty<bool>___ctor(__this_01,Method_UniRx_ReactiveProperty<bool>__ctor__);
  ppUVar1 = &(__this->fields).DDKAEOMHAPH;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>__ctor__);
  return;
}

