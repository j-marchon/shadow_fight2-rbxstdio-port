// SFButton$$OnPointerDown @ RVA 0x34BB908

void SFButton__OnPointerDown
               (SFButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *MELGPLLNBGH,
               MethodInfo *method)

{
  Il2CppObject *PLPFOJADDML;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_045685d7 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045685d7 = 1;
  }
  UnityEngine_UI_Selectable__OnPointerDown
            ((UnityEngine_UI_Selectable_o *)__this,MELGPLLNBGH,(MethodInfo *)0x0);
  local_24 = (__this->fields).ButtonId;
  PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  SFButton__CallEvent(__this,0,PLPFOJADDML,in_x3);
  return;
}

