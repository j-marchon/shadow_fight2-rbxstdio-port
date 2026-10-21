// TypeDefIndex 926
// Namespace: 
// [RequireComponent(typeof(ResolutionImage))]
// public class IconLabelButton : LabelButton
// Fields:
//   private ResolutionImage _icon; // 0x1F0

// ===== public ResolutionImage get_Icon()  [RVA 0x30A1214]
// IconLabelButton$$get_Icon @ RVA 0x30A1214

Nekki_SF2_GUI_ResolutionImage_o *
IconLabelButton__get_Icon(IconLabelButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._icon;
}


// ===== public override void set_Opacity(float CJNHFNHJHPE)  [RVA 0x30A121C]
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


// ===== public void .ctor()  [RVA 0x30A12BC]
// IconLabelButton$$.ctor @ RVA 0x30A12BC

void IconLabelButton___ctor(IconLabelButton_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_0456613f & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    DAT_0456613f = 1;
    method = extraout_x1;
  }
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LabelButton_TypeInfo,method);
  }
  LabelButton___ctor((LabelButton_o *)__this,(MethodInfo *)0x0);
  return;
}

