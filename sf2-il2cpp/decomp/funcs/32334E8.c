// Nekki.SF2.GUI.Common.HintCanvas$$.ctor @ RVA 0x32334E8

void Nekki_SF2_GUI_Common_HintCanvas___ctor
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_SerialDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ff7 & 1) == 0) {
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_04566ff7 = 1;
    method = extraout_x1;
  }
  (__this->fields)._timeToHide = 5.0;
  (__this->fields)._hintBoxWidth = 700.0;
  (__this->fields)._hintBoxHeight = 200.0;
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).MEKKEAIEELM;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

