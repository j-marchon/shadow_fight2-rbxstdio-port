// Nekki.SF2.GUI.Shop.SidePanel$$OnValueChanged @ RVA 0x326B48C

void Nekki_SF2_GUI_Shop_SidePanel__OnValueChanged
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,UnityEngine_Vector2_o BJODBCJIGHH,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = BJODBCJIGHH.fields.x;
  fVar2 = (__this->fields).OCBEJPAILDH.fields.x;
  if ((fVar1 == 0.0) || (fVar1 < fVar2)) {
    (__this->fields).NCCEHMGJEAA = true;
  }
  if ((fVar1 == 1.0) || (fVar2 < fVar1)) {
    (__this->fields).NCCEHMGJEAA = false;
  }
  (__this->fields).OCBEJPAILDH.fields.x = fVar1;
  (__this->fields).OCBEJPAILDH.fields.y = BJODBCJIGHH.fields.y;
  return;
}

