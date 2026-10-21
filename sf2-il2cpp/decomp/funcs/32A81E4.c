// Core.Configs.Models.BuildSettingsExtension$$EvaluateAmplitudeFactor @ RVA 0x32A81E4

float Core_Configs_Models_BuildSettingsExtension__EvaluateAmplitudeFactor
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
  if ((DAT_04567414 & 1) == 0) {
                    /* try { // try from 033a8208 to 034a8217 has its CatchHandler @ 033a8234 */
    auVar2 = FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567414 = 1;
  }
                    /* try { // try from 033a8218 to 034a823b has its CatchHandler @ 033a8244 */
  if (settings != (Core_Configs_Models_ShakeScreenParamsSettings_o *)0x0) {
                    /* catch() { ... } // from try @ 033a816c with catch @ 033a8224 */
    MFENNGDJCMF = (settings->fields)._AmplitudeFactor_k__BackingField.fields.x;
    CHOCOAGNFDD = (settings->fields)._AmplitudeFactor_k__BackingField.fields.y;
    CIGIGIJOFMK = (settings->fields)._Diagonal_k__BackingField.fields.x;
    fVar1 = (settings->fields)._Diagonal_k__BackingField.fields.y;
                    /* catch() { ... } // from try @ 033a81a8 with catch @ 033a8234
                       catch() { ... } // from try @ 033a8208 with catch @ 033a8234 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033a823c to 034a8247 has its CatchHandler @ 033a7c34 */
    KEFILECBPMF = EOAOCPLIKOI__MDNNMFAPAEG((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033a8150 with catch @ 033a8244
                       catch() { ... } // from try @ 033a8188 with catch @ 033a8244
                       catch() { ... } // from try @ 033a8218 with catch @ 033a8244 */
                    /* try { // try from 033a8254 to 034a830f has its CatchHandler @ 033a8254
                       catch() { ... } // from try @ 033a8254 with catch @ 033a8254
                       catch() { ... } // from try @ 033a86a4 with catch @ 033a8254
                       catch() { ... } // from try @ 033a874c with catch @ 033a8254
                       catch() { ... } // from try @ 033a881c with catch @ 033a8254
                       catch() { ... } // from try @ 033a887c with catch @ 033a8254
                       catch() { ... } // from try @ 033a88cc with catch @ 033a8254 */
    fVar1 = Util__EGNDHMHOPCG(MFENNGDJCMF,CHOCOAGNFDD,CIGIGIJOFMK,fVar1,KEFILECBPMF,
                              (MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

