// Nekki.SF2.GUI.TableView$$.ctor @ RVA 0x30DAA48

void Nekki_SF2_GUI_TableView___ctor(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o **ppNVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_0456634e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TableView_SelectCellEvent_TypeInfo);
    DAT_0456634e = 1;
    method = extraout_x1;
  }
  (__this->fields).inertia = true;
  (__this->fields).decelerationRate = 0.135;
  (__this->fields).scrollToHighlighted = true;
  (__this->fields).elasticity = 0.1;
  (__this->fields).scrollSensitivity = 1.0;
  (__this->fields).AddMask = true;
  auVar2 = thunk_FUN_01bda818(Nekki_SF2_GUI_TableView_SelectCellEvent_TypeInfo,method);
  __this_00 = auVar2._0_8_;
  Nekki_SF2_GUI_TableView_SelectCellEvent___ctor(__this_00,auVar2._8_8_);
  ppNVar1 = &(__this->fields).onSelectCell;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

