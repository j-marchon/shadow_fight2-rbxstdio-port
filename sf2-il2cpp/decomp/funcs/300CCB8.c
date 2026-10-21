// Nekki.SF2.GUI.Common.MenuControls$$Update @ RVA 0x300CCB8

void Nekki_SF2_GUI_Common_MenuControls__Update
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields).ABBIIGOGPGF;
  if (fVar2 <= 0.0) {
    Nekki_SF2_GUI_Common_MenuControls__JHIHLJOGBDD(__this,method);
    Nekki_SF2_GUI_Common_MenuControls__AGMBOMIMNAC(__this,method_00);
    method_01 = extraout_x1_00;
  }
  else {
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).ABBIIGOGPGF = fVar2 - fVar1;
    method_01 = extraout_x1;
  }
  Nekki_SF2_GUI_Common_MenuControls__MBACEABHPLC(__this,method_01);
  Nekki_SF2_GUI_Common_MenuControls__LNAEFOJKLIM(__this,method_02);
  Nekki_SF2_GUI_Common_MenuControls__ICKIMMADNPK(__this,method_03);
  Nekki_SF2_GUI_Common_MenuControls__NPNPFBOPKIA(__this,method_04);
  return;
}

