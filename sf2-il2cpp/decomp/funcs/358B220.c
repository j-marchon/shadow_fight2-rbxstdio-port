// EnterScreen$$Init @ RVA 0x358B220

void EnterScreen__Init(EnterScreen_o *__this,
                      System_Collections_Generic_List_KeyValuePair_string__int___o *FCOIPKFOGMM,
                      System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  bool bVar1;
  System_Action_o **ppSVar2;
  DG_Tweening_Sequence_o *s;
  Il2CppObject *__this_00;
  DG_Tweening_TweenCallback_o *pDVar3;
  DG_Tweening_Sequence_o *t;
  DG_Tweening_Sequence_o *s_00;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_o *method_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  System_Collections_Generic_KeyValuePair_object__int__o SVar6;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  void *pvStack_88;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  void *pvStack_68;
  
  method_03 = IELDNEAAPBE;
  if ((DAT_04568d3b & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_EnterScreen_KLPJJMFGIEE__);
    FUN_01bab630(&Method_EnterScreen_PCHKDCLPPLN__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_get_Current__
                );
    FUN_01bab630(&Method_EnterScreen_IENCLOKOKOB_GGHMAENCKCH__);
    FUN_01bab630(&EnterScreen_IENCLOKOKOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568d3b = 1;
  }
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pvStack_68 = (void *)0x0;
  local_80.fields._current = (Il2CppObject *)0x0;
  ppSVar2 = &(__this->fields).DNPHBCPFMPB;
  *ppSVar2 = IELDNEAAPBE;
  thunk_FUN_01c20e04(ppSVar2,IELDNEAAPBE);
  EnterScreen__SetVisible(__this,false,(MethodInfo *)method_03);
  EnterScreen__PIJGMPKNCHJ(__this,method_00);
  EnterScreen__IJAKFBFEJPD(__this,(__this->fields).MIN_OPACITY,method_01);
  pNVar5 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (FCOIPKFOGMM == (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0)
    goto LAB_0368b618;
    if (0 < (FCOIPKFOGMM->fields)._size) {
      pNVar5 = (__this->fields)._label;
      SVar6 = System_Collections_Generic_List<KeyValuePair<object,_int>>__get_Item
                        ((System_Collections_Generic_List_T__o *)FCOIPKFOGMM,0,
                         Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_get_Item__
                        );
      if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0368b618;
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (pNVar5,(System_String_o *)SVar6.fields.key,(MethodInfo *)0x0);
    }
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__AppendInterval(s,0.0,(MethodInfo *)0x0);
  if (FCOIPKFOGMM != (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0) {
    System_Collections_Generic_List<KeyValuePair<object,_int>>__GetEnumerator
              (&local_a0,(System_Collections_Generic_List_T__o *)FCOIPKFOGMM,
               Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_GetEnumerator__);
    local_80.fields._index = local_a0.fields._index;
    local_80.fields._version = local_a0.fields._version;
    local_80.fields._list = local_a0.fields._list;
    pvStack_68 = pvStack_88;
    local_80.fields._current = local_a0.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_int>>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<KeyValuePair<object,_int>>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_int>>_Dispose__
                  );
        t = EnterScreen__MuteMusicSequence(__this,method_02);
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo);
        }
        s_00 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append(s_00,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0)
        ;
        pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((__this->fields)._foreground,(__this->fields).MAX_OPACITY,
                            (__this->fields).fadeTime,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Join
                  (s_00,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
        pDVar3 = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__AppendCallback(s_00,pDVar3,(MethodInfo *)0x0);
        pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((__this->fields)._foreground,(__this->fields).MIN_OPACITY,
                            (__this->fields).expandTime,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (s_00,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append(s_00,(DG_Tweening_Tween_o *)s,(MethodInfo *)0x0)
        ;
        pDVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                           ((__this->fields)._foreground,(__this->fields).MAX_OPACITY,
                            (__this->fields).endTime,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (s_00,(DG_Tweening_Tween_o *)pDVar4,(MethodInfo *)0x0);
        pDVar3 = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__AppendCallback(s_00,pDVar3,(MethodInfo *)0x0);
        return;
      }
      __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EnterScreen_IENCLOKOKOB_TypeInfo);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Il2CppObject *)0x0) break;
      __this_00[2].klass = (Il2CppClass *)__this;
      thunk_FUN_01c20e04(__this_00 + 2,__this);
      __this_00[1].monitor = pvStack_68;
      __this_00[1].klass = (Il2CppClass *)local_80.fields._current;
      thunk_FUN_01c20e04(__this_00 + 1,0);
      pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(s,pDVar3,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval
                (s,(float)*(int *)&__this_00[1].monitor / 60.0,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0368b618:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

