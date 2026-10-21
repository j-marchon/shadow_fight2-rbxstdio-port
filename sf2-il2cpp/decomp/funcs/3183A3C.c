// Nekki.SF2.GUI.Fight.VsScreen$$.ctor @ RVA 0x3183A3C

void Nekki_SF2_GUI_Fight_VsScreen___ctor(Nekki_SF2_GUI_Fight_VsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityEvent_o **ppUVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045669ce & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_045669ce = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).DALFPNPJBCO;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).NOHDCBBOPMJ;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
  (__this->fields).OOKEKJMFKPE = pSVar3;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

