// Nekki.SF2.GUI.DebugModules.BuildInfoUI$$ACBLFBAIHPN @ RVA 0x354140C

bool Nekki_SF2_GUI_DebugModules_BuildInfoUI__ACBLFBAIHPN
               (Nekki_SF2_GUI_DebugModules_BuildInfoUI_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = Nekki_SF2_GUI_DebugUIModule__ACBLFBAIHPN
                    ((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
      DAT_04565e5a = '\x01';
    }
    uVar1 = KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB - 4;
    if (uVar1 < 7) {
      return (bool)((byte)(0x4b >> (ulong)(uVar1 & 0x1f)) & 1);
    }
  }
  return false;
}

