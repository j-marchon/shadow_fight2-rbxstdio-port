// Nekki.SF2.GUI.Fight.EndPvpFightContent$$CreateLine @ RVA 0x312F9D0

MCNGELCOMNG_o *
Nekki_SF2_GUI_Fight_EndPvpFightContent__CreateLine
          (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,System_String_o *EHNFGMGKCHO,
          int64_t CJNHFNHJHPE,System_Nullable_Color__o *IOHGBEHDHDP,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ValueLine_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar1;
  System_Nullable_Color__Fields local_60;
  
  if ((DAT_045666be & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ValueLine>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045666be = 1;
  }
  pUVar1 = (__this->fields)._valueLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Fight_ValueLine_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar1,Method_UnityEngine_GameObject_GetComponent<ValueLine>__),
      __this_00 != (Nekki_SF2_GUI_Fight_ValueLine_o *)0x0)) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      local_60.value.fields.a = (IOHGBEHDHDP->fields).value.fields.a;
      local_60.value.fields.g = (IOHGBEHDHDP->fields).value.fields.g;
      local_60.value.fields.b = (IOHGBEHDHDP->fields).value.fields.b;
      local_60.hasValue = (IOHGBEHDHDP->fields).hasValue;
      local_60._1_3_ = *(undefined3 *)&(IOHGBEHDHDP->fields).field_0x1;
      local_60.value.fields.r = (IOHGBEHDHDP->fields).value.fields.r;
      Nekki_SF2_GUI_Fight_ValueLine__Init
                (__this_00,EHNFGMGKCHO,CJNHFNHJHPE,(System_Nullable_Color__o *)&local_60,
                 (MethodInfo *)0x0);
      return (MCNGELCOMNG_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

