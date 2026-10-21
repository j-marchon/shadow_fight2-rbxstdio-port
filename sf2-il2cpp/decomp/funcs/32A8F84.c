// Core.Configs.Models.BuildSettingsExtension$$GetConfigUrl @ RVA 0x32A8F84

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetConfigUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
                    /* try { // try from 033a8f90 to 034a8f97 has its CatchHandler @ 033a92f4 */
    return (settings->fields)._ConfigUrl_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

