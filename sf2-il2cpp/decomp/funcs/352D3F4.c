// Nekki.SF2.GUI.Dialogs.Raids.MessageItem$$get_ColorBG @ RVA 0x352D3F4

UnityEngine_Color_o
Nekki_SF2_GUI_Dialogs_Raids_MessageItem__get_ColorBG
          (Nekki_SF2_GUI_Dialogs_Raids_MessageItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o UVar4;
  
  if ((DAT_04568a38 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a38 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._background;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0362d46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UVar3.fields.r =
           (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                     (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
      UVar3.fields.g = (float)in_s1;
      UVar3.fields.a = (float)in_s3;
      UVar3.fields.b = (float)in_s2;
      return (UnityEngine_Color_o)UVar3.fields;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UVar4.fields.g = 1.0;
  UVar4.fields.r = 1.0;
  UVar4.fields.a = 1.0;
  UVar4.fields.b = 1.0;
  return (UnityEngine_Color_o)UVar4.fields;
}

