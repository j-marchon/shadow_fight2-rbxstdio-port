// IconLabelButton$$set_Opacity @ RVA 0x30A121C

void IconLabelButton__set_Opacity(IconLabelButton_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_0456613e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456613e = 1;
  }
  LabelButton__set_Opacity((LabelButton_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  x = (__this->fields)._icon;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._icon,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
  return;
}

