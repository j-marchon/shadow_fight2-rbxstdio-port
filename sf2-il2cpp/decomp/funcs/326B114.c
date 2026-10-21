// Nekki.SF2.GUI.Shop.SidePanel$$Awake @ RVA 0x326B114

void Nekki_SF2_GUI_Shop_SidePanel__Awake(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_UI_ScrollRect_o *__this_00;
  MethodInfo *in_x2;
  UnityEngine_Vector2_o value;
  
  Nekki_SF2_GUI_Shop_SidePanel__set_EnableScrolling(__this,(__this->fields)._EnableScrolling,in_x2);
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    bVar3 = (__this->fields)._EnableScrolling != false;
    lVar1 = 0x28;
    if (bVar3) {
      lVar1 = 0x30;
    }
    lVar2 = 0x2c;
    if (bVar3) {
      lVar2 = 0x34;
    }
    value.fields.x = *(float *)((long)&__this->klass + lVar1);
    value.fields.y = *(float *)((long)&__this->klass + lVar2);
    UnityEngine_UI_ScrollRect__set_normalizedPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

