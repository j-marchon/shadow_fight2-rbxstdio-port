// Core.Configs.Models.BuildSettingsExtension$$EvaluateFrequencyFactor @ RVA 0x32A8274

float Core_Configs_Models_BuildSettingsExtension__EvaluateFrequencyFactor
                (Core_Configs_Models_ShakeScreenParamsSettings_o *settings,MethodInfo *method)

{
  float KEFILECBPMF;
  float fVar1;
  float CIGIGIJOFMK;
  float CHOCOAGNFDD;
  float MFENNGDJCMF;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = settings;
  if ((DAT_04567415 & 1) == 0) {
    auVar2 = FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567415 = 1;
  }
  if (settings != (Core_Configs_Models_ShakeScreenParamsSettings_o *)0x0) {
    MFENNGDJCMF = (settings->fields)._FrequencyFactor_k__BackingField.fields.x;
    CHOCOAGNFDD = (settings->fields)._FrequencyFactor_k__BackingField.fields.y;
    CIGIGIJOFMK = (settings->fields)._Diagonal_k__BackingField.fields.x;
    fVar1 = (settings->fields)._Diagonal_k__BackingField.fields.y;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    KEFILECBPMF = EOAOCPLIKOI__MDNNMFAPAEG((MethodInfo *)0x0);
    fVar1 = Util__EGNDHMHOPCG(MFENNGDJCMF,CHOCOAGNFDD,CIGIGIJOFMK,fVar1,KEFILECBPMF,
                              (MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

