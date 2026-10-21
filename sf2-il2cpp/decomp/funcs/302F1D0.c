// Nekki.SF2.GUI.SimpleScroll$$Update @ RVA 0x302F1D0

void Nekki_SF2_GUI_SimpleScroll__Update(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_04;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_05;
  short sVar2;
  
  if ((DAT_04565ce3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04565ce3 = 1;
    method = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE == '\0') {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_00);
      bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this,method_01);
      if (((bVar1) || (*(char *)&(__this->fields).KIANNGNDAFC != '\0')) ||
         (sVar2 = *(short *)&(__this->fields).NMIHOKCDLMP, 0 < sVar2)) {
        Nekki_SF2_GUI_SimpleScroll__PMAAPFAKLNJ(__this,method_02);
        sVar2 = *(short *)&(__this->fields).NMIHOKCDLMP;
      }
      *(short *)&(__this->fields).NMIHOKCDLMP = sVar2 + -1;
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                         Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
      if (bVar1) {
        Nekki_SF2_GUI_SimpleScroll__LILEFCCDGNB(__this,method_03);
        method_05 = extraout_x1_00;
      }
      else {
        Nekki_SF2_GUI_SimpleScroll__JJLHMNAMHIL(__this,method_03);
        Nekki_SF2_GUI_SimpleScroll__ECJKHJHFOAF(__this,method_04);
        method_05 = extraout_x1_01;
      }
      bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this,method_05);
      if ((bVar1) || (*(char *)&(__this->fields).KIANNGNDAFC != '\0')) {
        *(undefined8 *)&(__this->fields).IHIEPGHGHKH = 0;
      }
      else {
        *(long *)&(__this->fields).IHIEPGHGHKH = *(long *)&(__this->fields).IHIEPGHGHKH + 1;
      }
    }
  }
  return;
}

