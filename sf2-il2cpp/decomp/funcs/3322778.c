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

