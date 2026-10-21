// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$set_State @ RVA 0x3099FA0

void Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__set_State
               (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456610a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456610a = 1;
  }
  (__this->fields).ONCKKFAODHL = CJNHFNHJHPE;
  pNVar4 = (__this->fields)._buttonImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pNVar4 = (__this->fields)._buttonImage;
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      bVar3 = (__this->fields).ONCKKFAODHL != 0;
      lVar1 = 0x1d0;
      if (bVar3) {
        lVar1 = 0x1d8;
      }
      lVar2 = 0x1cc;
      if (bVar3) {
        lVar2 = 0x1d4;
      }
      value.fields.y = *(undefined4 *)((long)&__this->klass + lVar1);
      value.fields.x = *(undefined4 *)((long)&__this->klass + lVar2);
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

