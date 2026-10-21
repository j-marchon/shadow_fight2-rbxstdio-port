// EnterScreen$$IJAKFBFEJPD @ RVA 0x358ADC8

void EnterScreen__IJAKFBFEJPD(EnterScreen_o *__this,float BCEJOJECHDA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar2;
  
  if ((DAT_04568d40 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d40 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._foreground;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._foreground;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
      pUVar2 = (__this->fields)._foreground;
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0368ae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                  (pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

