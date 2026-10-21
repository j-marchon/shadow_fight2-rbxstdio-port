// TypeDefIndex 2341
// Namespace: Nekki.SF2.GUI
// public class DebugUIModule : UIModule
// Fields:

// ===== public void Refresh()  [RVA 0x3322778]
// Nekki.SF2.GUI.DebugUIModule$$Refresh @ RVA 0x3322778

void Nekki_SF2_GUI_DebugUIModule__Refresh(Nekki_SF2_GUI_DebugUIModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  
                    /* catch() { ... } // from try @ 034227e4 with catch @ 03422788
                       catch() { ... } // from try @ 03422820 with catch @ 03422788
                       catch() { ... } // from try @ 03422920 with catch @ 03422788 */
  uVar2 = (*(__this->klass->vtable)._8_ACBLFBAIHPN.methodPtr)
                    (__this,(__this->klass->vtable)._8_ACBLFBAIHPN.method);
                    /* try { // try from 03422798 to 0352279f has its CatchHandler @ 034227f0 */
  if (((uVar2 & 1) != 0) &&
     (bVar1 = Nekki_SF2_GUI_UIModule__get_IsActive
                        ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0), !bVar1)) {
                    /* try { // try from 034227e0 to 035227e3 has its CatchHandler @ 034227ec */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034227d0 with catch @ 034227e4
                       try { // try from 034227e4 to 03522807 has its CatchHandler @ 03422788 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034227a8 with catch @ 034227e8
                        */
    Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 034227a8 to 035227bb has its CatchHandler @ 034227e8 */
  uVar2 = (*(__this->klass->vtable)._8_ACBLFBAIHPN.methodPtr)
                    (__this,(__this->klass->vtable)._8_ACBLFBAIHPN.method);
  if (((uVar2 & 1) == 0) &&
     (bVar1 = Nekki_SF2_GUI_UIModule__get_IsActive
                        ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 034227d0 to 035227db has its CatchHandler @ 034227e4 */
    Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x33227EC]
// Nekki.SF2.GUI.DebugUIModule$$.ctor @ RVA 0x33227EC

void Nekki_SF2_GUI_DebugUIModule___ctor(Nekki_SF2_GUI_DebugUIModule_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034227e0 with catch @ 034227ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03422798 with catch @ 034227f0
                        */
                    /* try { // try from 03422808 to 0352281f has its CatchHandler @ 03422918 */
  if ((DAT_04567855 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567855 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03422820 to 03522907 has its CatchHandler @ 03422788 */
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected virtual bool ACBLFBAIHPN()  [RVA 0x3322844]
// Nekki.SF2.GUI.DebugUIModule$$ACBLFBAIHPN @ RVA 0x3322844

bool Nekki_SF2_GUI_DebugUIModule__ACBLFBAIHPN
               (Nekki_SF2_GUI_DebugUIModule_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04567856 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_04567856 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugUI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045678dd == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
    DAT_045678dd = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugUI_TypeInfo,method);
  }
  if (Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->CNMHHKAMGPI != (Nekki_SF2_GUI_DebugUI_o *)0x0)
  {
    if (DAT_045673fe == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugUI_TypeInfo);
      DAT_045673fe = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    return Nekki_SF2_GUI_DebugUI_TypeInfo->static_fields->BDCDAEAJMLE;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03422908 to 03522917 has its CatchHandler @ 03422918 */
  FUN_01bab8c8();
}

