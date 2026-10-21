// NCNJEIBHGBH$$KIGNIOMCNAP @ RVA 0x32F32C0

/* WARNING: Type propagation algorithm not settling */

Nekki_SF2_GUI_Map_MapButton_o *
NCNJEIBHGBH__KIGNIOMCNAP
          (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  FKNCNNOOOIO_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Map_MapButton_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_String_o **ppSVar1;
  System_Nullable_Vector2__o __this_04;
  undefined8 local_50;
  float local_48;
  
  if ((DAT_04567678 & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&Method_NCNJEIBHGBH_DFBAIPNBPLB__);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12932);
    FUN_01bab630(&StringLiteral_18115);
    DAT_04567678 = 1;
  }
  __this_00 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
  FKNCNNOOOIO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (FKNCNNOOOIO_o *)0x0) {
    (__this_00->fields).JIJLBFGKNJK = StringLiteral_18115;
    thunk_FUN_01c20e04();
    ppSVar1 = &(__this_00->fields).KPDPJONADPJ;
    *ppSVar1 = StringLiteral_12932;
    thunk_FUN_01c20e04(ppSVar1);
    (__this_00->fields).OEFBIKEMBOF = true;
    local_48 = 0.0;
    local_50 = 0;
    __this_04.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
    __this_04.fields._0_8_ = &local_50;
    System_Nullable<Vector2>___ctor
              (__this_04,(UnityEngine_Vector2_o)0x42820000c2700000,(MethodInfo_27FC874 *)method);
    (__this_00->fields).OLBNFCKMBEL.fields.value.fields.y = local_48;
    (__this_00->fields).OLBNFCKMBEL.fields.hasValue = (bool_conflict)(undefined1)local_50;
    *(undefined3 *)&(__this_00->fields).OLBNFCKMBEL.fields.field_0x1 = local_50._1_3_;
    (__this_00->fields).OLBNFCKMBEL.fields.value.fields.x = (float)local_50._4_4_;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)KCAHJMFOIAG,
                           Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_02 = (Nekki_SF2_GUI_Map_MapButton_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_GetComponent<MapButton>__),
       __this_02 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0)) {
      Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(__this_02,__this_00,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

