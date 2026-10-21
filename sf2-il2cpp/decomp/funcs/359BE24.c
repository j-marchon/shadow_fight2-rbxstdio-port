// Nekki.SF2.GUI.Profile.SubItem$$OEIIAJMHBFJ @ RVA 0x359BE24

void Nekki_SF2_GUI_Profile_SubItem__OEIIAJMHBFJ
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (__this->fields).GJFHNJFGBKE;
  fVar3 = (__this->fields).NAPGLBIIEJP;
  fVar4 = fVar2 - fVar3;
  if ((0.0 < fVar4) && (iVar1 = (__this->fields).FBJAKHPAFNO, 0 < iVar1)) {
    fVar4 = (fVar4 / (float)iVar1) * (float)(__this->fields).JDLICGHNBFC;
    fVar2 = fVar2 - fVar4;
    if ((__this->fields).FOIKKEEIOBP != false) {
      fVar2 = fVar3 + fVar4;
    }
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._icon,fVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}

