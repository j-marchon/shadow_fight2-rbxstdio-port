// Nekki.SF2.GUI.Map.ContentToggle$$JDPMKEABGPA @ RVA 0x33B2794

void Nekki_SF2_GUI_Map_ContentToggle__JDPMKEABGPA
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  bool bVar1;
  KCEKMOECEJK_o **ppKVar2;
  UnityEngine_Events_UnityAction_o *call;
  DG_Tweening_Sequence_o *pDVar3;
  System_Collections_Generic_List_object__o *__this_00;
  DG_Tweening_Core_DOGetter_float__o *DPFAFGCKEJH;
  DG_Tweening_Core_DOSetter_float__o *ABLMELPONIJ;
  DG_Tweening_Core_DOGetter_float__o *AHKPHMEGKPH;
  DG_Tweening_Core_DOSetter_float__o *EBDJIEAJIGK;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  UnityEngine_UI_Button_o *pUVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  DG_Tweening_Sequence_o **ppDVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  
  if ((DAT_04567d55 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_CJEDDOINFEI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_FDOLPOJBFHG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_HINHHFAOHAN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_PBMELDDANJH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentToggle_PKMGPAANLGD__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_GetEnumerator__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567d55 = 1;
    method = extraout_x1;
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_Map_ContentToggle__CCPABLFBFFA(__this,method);
  ppKVar2 = &(__this->fields).BBODGCMLKFP;
  *ppKVar2 = (KCEKMOECEJK_o *)0x0;
  thunk_FUN_01c20e04(ppKVar2,0);
  ppKVar2 = &(__this->fields).BPPDIBOOOLP;
  *ppKVar2 = (KCEKMOECEJK_o *)0x0;
  thunk_FUN_01c20e04(ppKVar2,0);
  pUVar4 = (__this->fields).TogglePanel;
  if (pUVar4 != (UnityEngine_UI_Button_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar4->fields).m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar3 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      ppDVar5 = &(__this->fields).BPOLHFBDIMK;
      *ppDVar5 = pDVar3;
      thunk_FUN_01c20e04(ppDVar5,pDVar3);
      Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF(__this,method_00);
      __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).MAPPKOGKCBA;
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,__this_00,
                   Method_System_Collections_Generic_List<KCEKMOECEJK>_GetEnumerator__);
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_78,
                                  Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_MoveNext__
                                 ), bVar1) {
          pDVar3 = *ppDVar5;
          DPFAFGCKEJH = (DG_Tweening_Core_DOGetter_float__o *)
                        thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
          DG_Tweening_Core_DOGetter<float>___ctor();
          ABLMELPONIJ = (DG_Tweening_Core_DOSetter_float__o *)
                        thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
          DG_Tweening_Core_DOSetter<float>___ctor();
          AHKPHMEGKPH = (DG_Tweening_Core_DOGetter_float__o *)
                        thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
          DG_Tweening_Core_DOGetter<float>___ctor();
          EBDJIEAJIGK = (DG_Tweening_Core_DOSetter_float__o *)
                        thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
          DG_Tweening_Core_DOSetter<float>___ctor();
          Nekki_SF2_GUI_Map_ContentToggle__JOICELFGBLC
                    (__this,pDVar3,DPFAFGCKEJH,ABLMELPONIJ,AHKPHMEGKPH,EBDJIEAJIGK,in_x6);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_78,
                   Method_System_Collections_Generic_List_Enumerator<KCEKMOECEJK>_Dispose__);
        DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                  ((Il2CppObject *)*ppDVar5,-1,0,
                   Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
        DG_Tweening_TweenExtensions__Restart
                  ((DG_Tweening_Tween_o *)*ppDVar5,true,-1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

