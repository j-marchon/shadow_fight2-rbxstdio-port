// Nekki.SF2.GUI.Common.HintCanvas$$ODPFCGPCMJJ @ RVA 0x32334E4

void Nekki_SF2_GUI_Common_HintCanvas__ODPFCGPCMJJ
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,int64_t HOKBHLPPCAH,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04566ffe & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_04566ffe = 1;
  }
  Nekki_SF2_GUI_Common_HintCanvas__PKEJAJKKOAN(__this,false,method);
  ppUVar1 = &(__this->fields).EMFLDKEFCLG;
  *ppUVar1 = (UnityEngine_GameObject_o *)0x0;
  thunk_FUN_01c20e04(ppUVar1,0);
  __this_00 = (__this->fields).MEKKEAIEELM;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

