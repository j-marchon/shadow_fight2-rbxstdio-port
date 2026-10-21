// SFButton$$Awake @ RVA 0x34BAD70

void SFButton__Awake(SFButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t value;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  System_Nullable_Selectable_SelectionState__Fields local_28;
  
  if ((DAT_045685cb & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Selectable_SelectionState>__ctor__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_SFButton_CAPDHGIOBAK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045685cb = 1;
  }
  UnityEngine_UI_Selectable__Awake((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 == (UnityEngine_Events_UnityEvent_o *)0x0) {
LAB_035baeec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
    value = UnityEngine_UI_Selectable__get_currentSelectionState
                      ((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value = 0;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_28,value,
               Method_System_Nullable<Selectable_SelectionState>__ctor__);
    (__this->fields).NLGFKIHALIG.fields = local_28;
    pNVar2 = (__this->fields).FlashingImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).FlashingImage;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035baeec;
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    }
    pNVar2 = (__this->fields)._glowSprite;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      LJLLAKHOFFF__IFBBIDIEBEL
                ((UnityEngine_UI_Graphic_o *)(__this->fields)._glowSprite,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}

