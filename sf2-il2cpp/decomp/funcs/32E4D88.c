// DOPEEDABNEK.<>c$$DNNODJGFLLH @ RVA 0x32E4D88

bool DOPEEDABNEK_<>c__DNNODJGFLLH
               (DOPEEDABNEK___c_o *__this,Core_Configs_Models_PackSettings_o *pack,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Core_Configs_Models_PackSettingsExtension__IsDownloaded(pack,(MethodInfo *)0x0);
  if (bVar1) {
    if (pack == (Core_Configs_Models_PackSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH
                      ((pack->fields)._ItemsPackLabel_k__BackingField,(MethodInfo *)0x0);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

