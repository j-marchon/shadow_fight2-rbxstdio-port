// Nekki.SF2.GUI.Fight.EndPvpFightContent$$NPLHLODNNCJ @ RVA 0x3130BD0

void Nekki_SF2_GUI_Fight_EndPvpFightContent__NPLHLODNNCJ
               (System_Nullable_Color__o *__return_storage_ptr__,
               Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,int32_t OBFEMPGJJFD,
               MethodInfo *method)

{
  UnityEngine_Color_array *pUVar1;
  System_Nullable_Color__Fields local_38;
  
  if ((DAT_045666c4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>__ctor__);
    DAT_045666c4 = 1;
  }
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value.fields.r = 0.0;
  local_38.value.fields.g = 0.0;
  local_38.value.fields.b = 0.0;
  local_38.value.fields.a = 0.0;
  if (OBFEMPGJJFD != -1) {
    if ((Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar1 = Nekki_SF2_GUI_Fight_EndPvpFightContent_TypeInfo->static_fields->MDOPFPPIGPC;
    if (pUVar1 == (UnityEngine_Color_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((uint)pUVar1->max_length <= (uint)OBFEMPGJJFD) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    System_Nullable<Color>___ctor
              ((System_Nullable_Color__o *)&local_38,
               (UnityEngine_Color_o)pUVar1->m_Items[OBFEMPGJJFD].fields,
               Method_System_Nullable<Color>__ctor__);
  }
  (__return_storage_ptr__->fields).value.fields.a = local_38.value.fields.a;
  (__return_storage_ptr__->fields).value.fields.g = local_38.value.fields.g;
  (__return_storage_ptr__->fields).value.fields.b = local_38.value.fields.b;
  (__return_storage_ptr__->fields).hasValue = local_38.hasValue;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = local_38._1_3_;
  (__return_storage_ptr__->fields).value.fields.r = local_38.value.fields.r;
  return;
}

