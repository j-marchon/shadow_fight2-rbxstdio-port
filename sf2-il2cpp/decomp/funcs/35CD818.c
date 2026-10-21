// Nekki.SF2.GUI.BaseScrollContent$$LJOHHCIMHJP @ RVA 0x35CD818

void Nekki_SF2_GUI_BaseScrollContent__LJOHHCIMHJP
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *__this_00;
  
  if ((DAT_04568fb7 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
    DAT_04568fb7 = 1;
  }
  __this_00 = (__this->fields).onClickItem;
  if (__this_00 != (Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *)0x0) {
                    /* try { // try from 036cd864 to 037cd8fb has its CatchHandler @ 036cd864
                       catch() { ... } // from try @ 036cd864 with catch @ 036cd864
                       catch() { ... } // from try @ 036cd924 with catch @ 036cd864
                       catch() { ... } // from try @ 036cd960 with catch @ 036cd864
                       catch() { ... } // from try @ 036cd988 with catch @ 036cd864
                       catch() { ... } // from try @ 036cd9c0 with catch @ 036cd864 */
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)IKKAMAMLIKA,
               Method_UnityEngine_Events_UnityEvent<BaseScrollItem>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

