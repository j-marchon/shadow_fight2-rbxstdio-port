// SFButton$$OnClick @ RVA 0x34BBC3C

void SFButton__OnClick(SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
                      MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *PLPFOJADDML;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_045685da & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045685da = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    UnityEngine_UI_Button__OnPointerClick
              ((UnityEngine_UI_Button_o *)__this,MELGPLLNBGH,(MethodInfo *)0x0);
    local_24 = (__this->fields).ButtonId;
    PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    SFButton__CallEvent(__this,2,PLPFOJADDML,in_x3);
    SFButton__DFCBNJJOHDA(__this,(__this->fields)._glowTime,method_00);
  }
  return;
}

