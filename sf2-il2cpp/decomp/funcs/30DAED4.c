// Nekki.SF2.GUI.TableView$$PEBNCHIIKID @ RVA 0x30DAED4

void Nekki_SF2_GUI_TableView__PEBNCHIIKID
               (Nekki_SF2_GUI_TableView_o *__this,UnityEngine_Vector2_o HMAKEBHBDEI,
               MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0 - HMAKEBHBDEI.fields.y;
  if ((__this->fields).tableViewOrientation != 0) {
    fVar3 = HMAKEBHBDEI.fields.x;
  }
  fVar1 = Nekki_SF2_GUI_TableView__get_ContentSize(__this,method);
  fVar2 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
  (__this->fields).GMCDBHFHFGF = fVar1 * fVar3 + fVar2 * 0.5;
  (__this->fields).FNIBBMLOJIJ = true;
  return;
}

