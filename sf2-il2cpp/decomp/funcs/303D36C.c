// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$ACBLFBAIHPN @ RVA 0x303D36C

bool Nekki_SF2_GUI_DebugModules_ModelDebugUI__ACBLFBAIHPN
               (Nekki_SF2_GUI_DebugModules_ModelDebugUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  
                    /* try { // try from 0313d370 to 0323d373 has its CatchHandler @ 0313d3d0 */
                    /* try { // try from 0313d374 to 0323d3e7 has its CatchHandler @ 0313d134 */
  bVar2 = Nekki_SF2_GUI_DebugUIModule__ACBLFBAIHPN
                    ((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
      DAT_04565e5a = '\x01';
    }
    uVar1 = KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB - 3;
    if (uVar1 < 5) {
      return (bool)((byte)(0x1b >> (ulong)(uVar1 & 0x1f)) & 1);
    }
  }
                    /* catch() { ... } // from try @ 0313d370 with catch @ 0313d3d0 */
  return false;
}

