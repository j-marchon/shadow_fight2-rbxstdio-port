// Nekki.SF2.GUI.SimpleScroll$$OnDestroy @ RVA 0x302BDEC

void Nekki_SF2_GUI_SimpleScroll__OnDestroy(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04565cc3 & 1) == 0) {
    FUN_01bab630(&Util_TypeInfo);
    DAT_04565cc3 = 1;
    method = extraout_x1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    *(undefined1 *)&(__this->fields).LNAPCDLIOOE = 1;
    return;
  }
  Nekki_SF2_GUI_SimpleScroll__CCPABLFBFFA(__this,method);
  Nekki_SF2_GUI_SimpleScroll__ClearData(__this,method_00);
  *(undefined1 *)&(__this->fields).LNAPCDLIOOE = 1;
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

