// TypeDefIndex 2035
// Namespace: Core.Configs.Models
// [Extension]
// public static class BuildSettingsExtension
// Fields:

// ===== public static int GetTacticsCaching(BuildSettingsConfig config, int def = 0)  [RVA 0x32A80CC]
// Core.Configs.Models.BuildSettingsExtension$$GetTacticsCaching @ RVA 0x32A80CC

int32_t Core_Configs_Models_BuildSettingsExtension__GetTacticsCaching
                  (Core_Configs_Models_BuildSettingsConfig_o *config,int32_t def,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__int__o *dictionary;
  
                    /* try { // try from 033a80d4 to 034a80ef has its CatchHandler @ 033a7c34 */
  if ((DAT_04567412 & 1) == 0) {
                    /* try { // try from 033a80f0 to 034a80ff has its CatchHandler @ 033a8148 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_int>__
                );
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 033a8104 to 034a8107 has its CatchHandler @ 033a8124 */
    DAT_04567412 = 1;
  }
                    /* try { // try from 033a8108 to 034a810b has its CatchHandler @ 033a8120 */
  if (config != (Core_Configs_Models_BuildSettingsConfig_o *)0x0) {
                    /* try { // try from 033a810c to 034a810f has its CatchHandler @ 033a811c */
                    /* try { // try from 033a8110 to 034a8113 has its CatchHandler @ 033a8114 */
                    /* catch() { ... } // from try @ 033a8110 with catch @ 033a8114 */
                    /* catch() { ... } // from try @ 033a8060 with catch @ 033a8118 */
    dictionary = (config->fields)._TacticsCaching_k__BackingField;
                    /* catch() { ... } // from try @ 033a810c with catch @ 033a811c */
                    /* catch() { ... } // from try @ 033a8108 with catch @ 033a8120 */
                    /* catch() { ... } // from try @ 033a8104 with catch @ 033a8124 */
                    /* catch() { ... } // from try @ 033a806c with catch @ 033a8128 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033a8094 with catch @ 033a812c */
      thunk_FUN_01ba7564();
    }
    iVar1 = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033a8018 with catch @ 033a8138 */
                    /* catch() { ... } // from try @ 033a7ff8 with catch @ 033a813c */
                    /* catch() { ... } // from try @ 033a7fb0 with catch @ 033a8148
                       catch() { ... } // from try @ 033a80f0 with catch @ 033a8148 */
                    /* try { // try from 033a8150 to 034a8153 has its CatchHandler @ 033a8244 */
    iVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_int>
                      ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)dictionary,
                       iVar1,def,
                       Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_int>__
                      );
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033a8154 to 034a816b has its CatchHandler @ 033a7c34 */
  FUN_01bab8c8();
}


// ===== public static bool GetHideLanguageFlags(BuildSettingsConfig config, bool def = False)  [RVA 0x32A8158]
// Core.Configs.Models.BuildSettingsExtension$$GetHideLanguageFlags @ RVA 0x32A8158

bool Core_Configs_Models_BuildSettingsExtension__GetHideLanguageFlags
               (Core_Configs_Models_BuildSettingsConfig_o *config,bool def,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__bool__o *dictionary;
  
                    /* try { // try from 033a816c to 034a816f has its CatchHandler @ 033a8224 */
  if ((DAT_04567413 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_bool>__
                );
                    /* try { // try from 033a8188 to 034a818f has its CatchHandler @ 033a8244 */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 033a8190 to 034a81a7 has its CatchHandler @ 033a7c34 */
    DAT_04567413 = 1;
  }
  if (config != (Core_Configs_Models_BuildSettingsConfig_o *)0x0) {
    dictionary = (config->fields)._HideLanguageFlags_k__BackingField;
                    /* try { // try from 033a81a8 to 034a81bf has its CatchHandler @ 033a8234 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033a81c0 to 034a8207 has its CatchHandler @ 033a7c34 */
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    bVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_bool>
                      ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)dictionary,
                       key,def,
                       Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_bool>__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float EvaluateAmplitudeFactor(ShakeScreenParamsSettings settings)  [RVA 0x32A81E4]
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


// ===== public static float EvaluateFrequencyFactor(ShakeScreenParamsSettings settings)  [RVA 0x32A8274]
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


// ===== public static string Log(ShakeScreenParamsSettings settings)  [RVA 0x32A8304]
// Core.Configs.Models.BuildSettingsExtension$$Log @ RVA 0x32A8304

System_String_o *
Core_Configs_Models_BuildSettingsExtension__Log
          (Core_Configs_Models_ShakeScreenParamsSettings_o *settings,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float local_3c;
  UnityEngine_Vector2_Fields local_38;
  
                    /* try { // try from 033a8310 to 034a8313 has its CatchHandler @ 033a8848 */
                    /* try { // try from 033a8328 to 034a8337 has its CatchHandler @ 033a882c */
  if ((DAT_04567416 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1399/*".."*/);
                    /* try { // try from 033a8350 to 034a836f has its CatchHandler @ 033a8844 */
    FUN_01bab630(&StringLiteral_2138/*"; currFreF "*/);
    FUN_01bab630(&StringLiteral_2137/*"; currAmpF "*/);
    FUN_01bab630(&StringLiteral_1572/*"0.00"*/);
                    /* try { // try from 033a8374 to 034a8383 has its CatchHandler @ 033a87b4 */
    FUN_01bab630(&StringLiteral_15777/*"] DiagF(cm)["*/);
    FUN_01bab630(&StringLiteral_15779/*"] FreqF["*/);
    FUN_01bab630(&StringLiteral_15803/*"];  currDiag(cm) "*/);
                    /* try { // try from 033a83a0 to 034a83a7 has its CatchHandler @ 033a87b0 */
    FUN_01bab630(&StringLiteral_2856/*"AmpF["*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
                    /* try { // try from 033a83b0 to 034a83b7 has its CatchHandler @ 033a87a8 */
    DAT_04567416 = 1;
  }
                    /* try { // try from 033a83b8 to 034a83c3 has its CatchHandler @ 033a87a4 */
  local_3c = 0.0;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,0x13);
  if (values != (System_String_array *)0x0) {
                    /* try { // try from 033a83cc to 034a83d7 has its CatchHandler @ 033a87a0 */
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2856/*"AmpF["*/;
      thunk_FUN_01c20e04();
                    /* try { // try from 033a83f0 to 034a83f7 has its CatchHandler @ 033a877c */
      if (settings == (Core_Configs_Models_ShakeScreenParamsSettings_o *)0x0) goto LAB_033a877c;
      local_38 = (settings->fields)._AmplitudeFactor_k__BackingField.fields;
                    /* try { // try from 033a8408 to 034a8413 has its CatchHandler @ 033a8778 */
      pSVar1 = System_Single__ToString(local_38.x,(MethodInfo *)&stack0xffffffffffffffc8);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar1;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
                    /* try { // try from 033a8434 to 034a843f has its CatchHandler @ 033a87c4 */
        if (2 < (uint)values->max_length) {
          method_02 = (MethodInfo *)((ulong)&stack0xffffffffffffffc8 | 4);
          values->m_Items[2] = StringLiteral_1399/*".."*/;
                    /* try { // try from 033a8450 to 034a8457 has its CatchHandler @ 033a8830 */
          thunk_FUN_01c20e04(values->m_Items + 2);
          local_38 = (settings->fields)._AmplitudeFactor_k__BackingField.fields;
          pSVar1 = System_Single__ToString(local_38.x,method_02);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
                    /* try { // try from 033a8484 to 034a8493 has its CatchHandler @ 033a87c0 */
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
                    /* try { // try from 033a849c to 034a84a3 has its CatchHandler @ 033a8794 */
              values->m_Items[4] = StringLiteral_15779/*"] FreqF["*/;
              thunk_FUN_01c20e04(values->m_Items + 4);
              local_38 = (settings->fields)._FrequencyFactor_k__BackingField.fields;
                    /* try { // try from 033a84c0 to 034a84c7 has its CatchHandler @ 033a8764 */
              pSVar1 = System_Single__ToString(local_38.x,(MethodInfo *)&stack0xffffffffffffffc8);
              if (5 < (uint)values->max_length) {
                    /* try { // try from 033a84d8 to 034a84e3 has its CatchHandler @ 033a8760 */
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04(values->m_Items + 5,pSVar1);
                if (6 < (uint)values->max_length) {
                    /* try { // try from 033a84f4 to 034a850f has its CatchHandler @ 033a8790 */
                  values->m_Items[6] = StringLiteral_1399/*".."*/;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  local_38 = (settings->fields)._FrequencyFactor_k__BackingField.fields;
                  pSVar1 = System_Single__ToString(local_38.x,method_02);
                    /* try { // try from 033a8520 to 034a8527 has its CatchHandler @ 033a8774 */
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar1;
                    thunk_FUN_01c20e04(values->m_Items + 7,pSVar1);
                    if (8 < (uint)values->max_length) {
                    /* try { // try from 033a8548 to 034a856b has its CatchHandler @ 033a8840 */
                      values->m_Items[8] = StringLiteral_15777/*"] DiagF(cm)["*/;
                      thunk_FUN_01c20e04(values->m_Items + 8);
                      local_38 = (settings->fields)._Diagonal_k__BackingField.fields;
                    /* try { // try from 033a8574 to 034a857b has its CatchHandler @ 033a8758 */
                      pSVar1 = System_Single__ToString
                                         (local_38.x,(MethodInfo *)&stack0xffffffffffffffc8);
                      if (9 < (uint)values->max_length) {
                        values->m_Items[9] = pSVar1;
                    /* try { // try from 033a858c to 034a85cf has its CatchHandler @ 033a883c */
                        thunk_FUN_01c20e04(values->m_Items + 9,pSVar1);
                        if (10 < (uint)values->max_length) {
                          values->m_Items[10] = StringLiteral_1399/*".."*/;
                          thunk_FUN_01c20e04(values->m_Items + 10);
                          local_38 = (settings->fields)._Diagonal_k__BackingField.fields;
                          pSVar1 = System_Single__ToString(local_38.x,method_02);
                          if (0xb < (uint)values->max_length) {
                    /* try { // try from 033a85d8 to 034a85df has its CatchHandler @ 033a8750 */
                            values->m_Items[0xb] = pSVar1;
                            thunk_FUN_01c20e04(values->m_Items + 0xb,pSVar1);
                    /* try { // try from 033a85f0 to 034a8633 has its CatchHandler @ 033a8838 */
                            if (0xc < (uint)values->max_length) {
                              values->m_Items[0xc] = StringLiteral_15803/*"];  currDiag(cm) "*/;
                              thunk_FUN_01c20e04();
                              if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              local_3c = EOAOCPLIKOI__MDNNMFAPAEG((MethodInfo *)0x0);
                    /* try { // try from 033a863c to 034a867b has its CatchHandler @ 033a8834 */
                              pSVar1 = System_Single__ToString
                                                 (local_3c,(System_String_o *)&local_3c,
                                                  StringLiteral_1572/*"0.00"*/);
                              if (0xd < (uint)values->max_length) {
                                values->m_Items[0xd] = pSVar1;
                                thunk_FUN_01c20e04(values->m_Items + 0xd,pSVar1);
                                if (0xe < (uint)values->max_length) {
                    /* try { // try from 033a8688 to 034a86a3 has its CatchHandler @ 033a878c */
                                  values->m_Items[0xe] = StringLiteral_2137/*"; currAmpF "*/;
                                  thunk_FUN_01c20e04(values->m_Items + 0xe);
                                  local_3c = Core_Configs_Models_BuildSettingsExtension__EvaluateAmplitudeFactor
                                                       (settings,method_00);
                    /* try { // try from 033a86a4 to 034a86cf has its CatchHandler @ 033a8254 */
                                  pSVar1 = System_Single__ToString
                                                     (local_3c,(System_String_o *)&local_3c,
                                                      StringLiteral_1572/*"0.00"*/);
                                  if (0xf < (uint)values->max_length) {
                                    values->m_Items[0xf] = pSVar1;
                                    thunk_FUN_01c20e04(values->m_Items + 0xf,pSVar1);
                    /* try { // try from 033a86d0 to 034a86d7 has its CatchHandler @ 033a8830 */
                    /* try { // try from 033a86d8 to 034a86db has its CatchHandler @ 033a8848 */
                                    if (0x10 < (uint)values->max_length) {
                    /* try { // try from 033a86dc to 034a86df has its CatchHandler @ 033a87bc */
                    /* try { // try from 033a86e0 to 034a86e3 has its CatchHandler @ 033a87b8 */
                    /* try { // try from 033a86e4 to 034a86e7 has its CatchHandler @ 033a87ac */
                    /* try { // try from 033a86e8 to 034a86eb has its CatchHandler @ 033a879c */
                    /* try { // try from 033a86ec to 034a86ef has its CatchHandler @ 033a8798 */
                                      values->m_Items[0x10] = StringLiteral_2138/*"; currFreF "*/;
                    /* try { // try from 033a86f0 to 034a86f3 has its CatchHandler @ 033a8770 */
                    /* try { // try from 033a86f4 to 034a86f7 has its CatchHandler @ 033a876c */
                                      thunk_FUN_01c20e04(values->m_Items + 0x10);
                    /* try { // try from 033a86f8 to 034a86fb has its CatchHandler @ 033a8768 */
                    /* try { // try from 033a86fc to 034a8703 has its CatchHandler @ 033a8840 */
                                      local_3c = Core_Configs_Models_BuildSettingsExtension__EvaluateFrequencyFactor
                                                           (settings,method_01);
                    /* try { // try from 033a8704 to 034a8707 has its CatchHandler @ 033a875c */
                    /* try { // try from 033a8708 to 034a870b has its CatchHandler @ 033a883c */
                    /* try { // try from 033a870c to 034a870f has its CatchHandler @ 033a8754 */
                    /* try { // try from 033a8710 to 034a8713 has its CatchHandler @ 033a8838 */
                                      pSVar1 = System_Single__ToString
                                                         (local_3c,(System_String_o *)&local_3c,
                                                          StringLiteral_1572/*"0.00"*/);
                    /* try { // try from 033a8714 to 034a8717 has its CatchHandler @ 033a874c */
                    /* try { // try from 033a8718 to 034a871b has its CatchHandler @ 033a8834 */
                    /* try { // try from 033a871c to 034a8727 has its CatchHandler @ 033a8840 */
                                      if (0x11 < (uint)values->max_length) {
                                        values->m_Items[0x11] = pSVar1;
                    /* try { // try from 033a8728 to 034a8733 has its CatchHandler @ 033a883c */
                                        thunk_FUN_01c20e04(values->m_Items + 0x11,pSVar1);
                    /* try { // try from 033a8734 to 034a873f has its CatchHandler @ 033a8838 */
                                        if (0x12 < (uint)values->max_length) {
                    /* try { // try from 033a8740 to 034a874b has its CatchHandler @ 033a8834 */
                    /* catch() { ... } // from try @ 033a8714 with catch @ 033a874c
                       try { // try from 033a874c to 034a87e3 has its CatchHandler @ 033a8254 */
                    /* catch() { ... } // from try @ 033a85d8 with catch @ 033a8750 */
                                          values->m_Items[0x12] = StringLiteral_1377/*"."*/;
                    /* catch() { ... } // from try @ 033a870c with catch @ 033a8754 */
                                          thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 033a8574 with catch @ 033a8758 */
                    /* catch() { ... } // from try @ 033a8704 with catch @ 033a875c */
                    /* catch() { ... } // from try @ 033a84d8 with catch @ 033a8760 */
                                          pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033a84c0 with catch @ 033a8764 */
                    /* catch() { ... } // from try @ 033a86f8 with catch @ 033a8768 */
                    /* catch() { ... } // from try @ 033a86f4 with catch @ 033a876c */
                    /* catch() { ... } // from try @ 033a86f0 with catch @ 033a8770 */
                    /* catch() { ... } // from try @ 033a8520 with catch @ 033a8774 */
                                          return pSVar1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033a8408 with catch @ 033a8778 */
    FUN_01bab8d0();
  }
LAB_033a877c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033a83f0 with catch @ 033a877c */
  FUN_01bab8c8();
}


// ===== public static bool GetPostAchievements(InternetSettings settings)  [RVA 0x32A8780]
// Core.Configs.Models.BuildSettingsExtension$$GetPostAchievements @ RVA 0x32A8780

bool Core_Configs_Models_BuildSettingsExtension__GetPostAchievements
               (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__bool__o *__this;
  bool local_14 [4];
  
                    /* catch() { ... } // from try @ 033a8688 with catch @ 033a878c */
                    /* catch() { ... } // from try @ 033a84f4 with catch @ 033a8790 */
                    /* catch() { ... } // from try @ 033a849c with catch @ 033a8794 */
  if ((DAT_04567417 & 1) == 0) {
                    /* catch() { ... } // from try @ 033a86ec with catch @ 033a8798 */
                    /* catch() { ... } // from try @ 033a86e8 with catch @ 033a879c */
                    /* catch() { ... } // from try @ 033a83cc with catch @ 033a87a0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_bool>__
                );
                    /* catch() { ... } // from try @ 033a83b8 with catch @ 033a87a4 */
                    /* catch() { ... } // from try @ 033a83b0 with catch @ 033a87a8 */
                    /* catch() { ... } // from try @ 033a86e4 with catch @ 033a87ac */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_bool>_TryGetValue__);
                    /* catch() { ... } // from try @ 033a83a0 with catch @ 033a87b0 */
                    /* catch() { ... } // from try @ 033a8374 with catch @ 033a87b4 */
                    /* catch() { ... } // from try @ 033a86e0 with catch @ 033a87b8 */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* catch() { ... } // from try @ 033a86dc with catch @ 033a87bc */
                    /* catch() { ... } // from try @ 033a8484 with catch @ 033a87c0 */
    DAT_04567417 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033a8434 with catch @ 033a87c4 */
  local_14[0] = false;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._PostAchievements_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a87e4 to 034a87e7 has its CatchHandler @ 033a881c */
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__bool__o *)0x0) {
                    /* try { // try from 033a8804 to 034a881b has its CatchHandler @ 033a88d4 */
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_bool>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         local_14,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_bool>_TryGetValue__
                        );
      if (bVar1) {
        bVar1 = local_14[0] != false;
                    /* catch() { ... } // from try @ 033a87e4 with catch @ 033a881c
                       try { // try from 033a881c to 034a8863 has its CatchHandler @ 033a8254 */
      }
      else {
                    /* catch() { ... } // from try @ 033a8328 with catch @ 033a882c */
                    /* catch() { ... } // from try @ 033a8450 with catch @ 033a8830
                       catch() { ... } // from try @ 033a86d0 with catch @ 033a8830 */
                    /* catch() { ... } // from try @ 033a863c with catch @ 033a8834
                       catch() { ... } // from try @ 033a8718 with catch @ 033a8834
                       catch() { ... } // from try @ 033a8740 with catch @ 033a8834 */
                    /* catch() { ... } // from try @ 033a85f0 with catch @ 033a8838
                       catch() { ... } // from try @ 033a8710 with catch @ 033a8838
                       catch() { ... } // from try @ 033a8734 with catch @ 033a8838 */
        bVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_bool>
                          ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                           (settings->fields)._PostAchievements_k__BackingField,7,
                           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_bool>__
                          );
      }
                    /* catch() { ... } // from try @ 033a858c with catch @ 033a883c
                       catch() { ... } // from try @ 033a8708 with catch @ 033a883c
                       catch() { ... } // from try @ 033a8728 with catch @ 033a883c */
                    /* catch() { ... } // from try @ 033a8548 with catch @ 033a8840
                       catch() { ... } // from try @ 033a86fc with catch @ 033a8840
                       catch() { ... } // from try @ 033a871c with catch @ 033a8840 */
                    /* catch() { ... } // from try @ 033a8350 with catch @ 033a8844 */
                    /* catch() { ... } // from try @ 033a8310 with catch @ 033a8848
                       catch() { ... } // from try @ 033a86d8 with catch @ 033a8848 */
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GetFBLikeUrl(InternetSettings settings)  [RVA 0x32A8850]
// Core.Configs.Models.BuildSettingsExtension$$GetFBLikeUrl @ RVA 0x32A8850

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetFBLikeUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
                    /* try { // try from 033a8864 to 034a887b has its CatchHandler @ 033a88c4 */
  if ((DAT_04567418 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
                    /* try { // try from 033a887c to 034a88b3 has its CatchHandler @ 033a8254 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567418 = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._FBLikeUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a88b4 to 034a88c3 has its CatchHandler @ 033a88c4 */
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
                    /* catch() { ... } // from try @ 033a8864 with catch @ 033a88c4
                       catch() { ... } // from try @ 033a88b4 with catch @ 033a88c4 */
                    /* try { // try from 033a88c8 to 034a88cb has its CatchHandler @ 033a88d4 */
                    /* try { // try from 033a88cc to 034a88d7 has its CatchHandler @ 033a8254 */
                    /* catch() { ... } // from try @ 033a8804 with catch @ 033a88d4
                       catch() { ... } // from try @ 033a88c8 with catch @ 033a88d4 */
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
      if (!bVar1) {
                    /* try { // try from 033a88ec to 034a89e3 has its CatchHandler @ 033a88ec
                       catch() { ... } // from try @ 033a88ec with catch @ 033a88ec
                       catch() { ... } // from try @ 033a8b44 with catch @ 033a88ec
                       catch() { ... } // from try @ 033a8bec with catch @ 033a88ec
                       catch() { ... } // from try @ 033a8bf4 with catch @ 033a88ec
                       catch() { ... } // from try @ 033a8cb4 with catch @ 033a88ec */
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._FBLikeUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GetFBLikeAltUrl(InternetSettings settings)  [RVA 0x32A8914]
// Core.Configs.Models.BuildSettingsExtension$$GetFBLikeAltUrl @ RVA 0x32A8914

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetFBLikeAltUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
  if ((DAT_04567419 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567419 = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._FBLikeAltUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
      if (!bVar1) {
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._FBLikeAltUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GetFBPostLink(InternetSettings settings)  [RVA 0x32A89D8]
// Core.Configs.Models.BuildSettingsExtension$$GetFBPostLink @ RVA 0x32A89D8

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetFBPostLink
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
                    /* try { // try from 033a89e4 to 034a8a0b has its CatchHandler @ 033a8c18 */
  if ((DAT_0456741a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_0456741a = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._FBPostLinkUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
                    /* try { // try from 033a8a40 to 034a8a6b has its CatchHandler @ 033a8c14 */
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
      if (!bVar1) {
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._FBPostLinkUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GetRateUrl(InternetSettings settings)  [RVA 0x32A8A9C]
// Core.Configs.Models.BuildSettingsExtension$$GetRateUrl @ RVA 0x32A8A9C

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetRateUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
                    /* try { // try from 033a8aa4 to 034a8ab3 has its CatchHandler @ 033a8c1c */
  if ((DAT_0456741b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
                    /* try { // try from 033a8ac0 to 034a8acb has its CatchHandler @ 033a8c04 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 033a8adc to 034a8ae3 has its CatchHandler @ 033a8c00 */
    DAT_0456741b = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._RateUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
                    /* try { // try from 033a8b20 to 034a8b43 has its CatchHandler @ 033a8c0c */
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
      if (!bVar1) {
                    /* try { // try from 033a8b44 to 034a8bd7 has its CatchHandler @ 033a88ec */
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._RateUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GetMusicStore(InternetSettings settings)  [RVA 0x32A8B60]
// Core.Configs.Models.BuildSettingsExtension$$GetMusicStore @ RVA 0x32A8B60

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetMusicStore
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  bool bVar1;
  int32_t key;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *__this;
  System_String_o *local_18;
  
  if ((DAT_0456741c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_0456741c = 1;
    method = extraout_x1;
  }
  local_18 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (settings->fields)._MusicStoreUrl_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    key = EOAOCPLIKOI__GEHFHFLEMPE((MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_MHLJKODNJCP__string__o *)0x0) {
                    /* try { // try from 033a8bd8 to 034a8bdf has its CatchHandler @ 033a8c10 */
                    /* try { // try from 033a8be0 to 034a8be3 has its CatchHandler @ 033a8c20 */
                    /* try { // try from 033a8be4 to 034a8be7 has its CatchHandler @ 033a8c08 */
                    /* try { // try from 033a8be8 to 034a8beb has its CatchHandler @ 033a8c20 */
                    /* try { // try from 033a8bec to 034a8bef has its CatchHandler @ 033a88ec */
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,
                         (Il2CppObject **)&local_18,
                         Method_System_Collections_Generic_Dictionary<MHLJKODNJCP,_string>_TryGetValue__
                        );
                    /* try { // try from 033a8bf0 to 034a8bf3 has its CatchHandler @ 033a8bfc */
      if (!bVar1) {
                    /* catch() { ... } // from try @ 033a8bf0 with catch @ 033a8bfc */
                    /* catch() { ... } // from try @ 033a8adc with catch @ 033a8c00 */
                    /* catch() { ... } // from try @ 033a8ac0 with catch @ 033a8c04 */
                    /* catch() { ... } // from try @ 033a8be4 with catch @ 033a8c08 */
                    /* catch() { ... } // from try @ 033a8b20 with catch @ 033a8c0c */
                    /* catch() { ... } // from try @ 033a8bd8 with catch @ 033a8c10 */
        local_18 = (System_String_o *)
                   System_Collections_Generic_CollectionExtensions__GetValueOrDefault<Int32Enum,_object>
                             ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                              (settings->fields)._MusicStoreUrl_k__BackingField,7,
                              Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<MHLJKODNJCP,_string>__
                             );
      }
                    /* catch() { ... } // from try @ 033a8a40 with catch @ 033a8c14 */
                    /* catch() { ... } // from try @ 033a89e4 with catch @ 033a8c18 */
                    /* catch() { ... } // from try @ 033a8aa4 with catch @ 033a8c1c */
      return local_18;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033a8be0 with catch @ 033a8c20
                       catch() { ... } // from try @ 033a8be8 with catch @ 033a8c20 */
  FUN_01bab8c8();
}


// ===== public static string GetSupportUrl(InternetSettings settings)  [RVA 0x32A8C24]
// Core.Configs.Models.BuildSettingsExtension$$GetSupportUrl @ RVA 0x32A8C24

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetSupportUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Generic_Dictionary_string__string__o *dictionary;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *local_38;
  
                    /* try { // try from 033a8c30 to 034a8c33 has its CatchHandler @ 033a8c44 */
  if ((DAT_0456741d & 1) == 0) {
                    /* catch() { ... } // from try @ 033a8c30 with catch @ 033a8c44 */
                    /* try { // try from 033a8c4c to 034a8cb3 has its CatchHandler @ 033a8cc8 */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_0456741d = 1;
  }
  local_38 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             (settings->fields)._SupportUrl_k__BackingField;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar4->klass;
      uVar1._0_1_ = (pIVar7->_2).rank;
      uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
                    /* try { // try from 033a8cb4 to 034a8cbf has its CatchHandler @ 033a88ec */
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 033a8cc0 to 034a8cc7 has its CatchHandler @ 033a8cc8 */
                    /* catch() { ... } // from try @ 033a8c4c with catch @ 033a8cc8
                       catch() { ... } // from try @ 033a8cc0 with catch @ 033a8cc8 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar7->vtable + (*piVar9 + 6);
            goto LAB_033a8cf8;
          }
                    /* try { // try from 033a8ccc to 034a8ecf has its CatchHandler @ 033a8ccc
                       catch() { ... } // from try @ 033a8ccc with catch @ 033a8ccc
                       catch() { ... } // from try @ 033a9144 with catch @ 033a8ccc
                       catch() { ... } // from try @ 033a92a4 with catch @ 033a8ccc
                       catch() { ... } // from try @ 033a92ac with catch @ 033a8ccc
                       catch() { ... } // from try @ 033a93a8 with catch @ 033a8ccc */
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,6);
LAB_033a8cf8:
      lVar6 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      if ((lVar6 != 0) && (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
         ) {
        bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                          (__this,*(Il2CppObject **)(lVar6 + 0x10),(Il2CppObject **)&local_38,
                           Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                          );
        if (!bVar3) {
          dictionary = (settings->fields)._SupportUrl_k__BackingField;
          pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_033a8dd0;
          pIVar7 = pIVar4->klass;
          uVar2._0_1_ = (pIVar7->_2).rank;
          uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar5 = pIVar7->vtable + (*piVar9 + 0xd);
                goto LAB_033a8d98;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xd);
LAB_033a8d98:
          pIVar4 = (Il2CppObject *)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
          local_38 = (System_String_o *)
                     System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object,_object>
                               ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                                dictionary,pIVar4,
                                Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_string>__
                               );
        }
        return local_38;
      }
    }
  }
LAB_033a8dd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GetEULAUrl(InternetSettings settings)  [RVA 0x32A8DD4]
// Core.Configs.Models.BuildSettingsExtension$$GetEULAUrl @ RVA 0x32A8DD4

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetEULAUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Generic_Dictionary_string__string__o *dictionary;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *local_38;
  
  if ((DAT_0456741e & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_0456741e = 1;
  }
  local_38 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             (settings->fields)._EULAUrl_k__BackingField;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar4->klass;
      uVar1._0_1_ = (pIVar7->_2).rank;
      uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar7->vtable + (*piVar9 + 6);
            goto LAB_033a8ea8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,6);
LAB_033a8ea8:
      lVar6 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      if ((lVar6 != 0) && (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
         ) {
                    /* try { // try from 033a8ed0 to 034a8ef7 has its CatchHandler @ 033a9308 */
        bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                          (__this,*(Il2CppObject **)(lVar6 + 0x10),(Il2CppObject **)&local_38,
                           Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                          );
        if (!bVar3) {
          dictionary = (settings->fields)._EULAUrl_k__BackingField;
          pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_033a8f80;
          pIVar7 = pIVar4->klass;
          uVar2._0_1_ = (pIVar7->_2).rank;
          uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar5 = pIVar7->vtable + (*piVar9 + 0xd);
                goto LAB_033a8f48;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
                    /* try { // try from 033a8f2c to 034a8f57 has its CatchHandler @ 033a9304 */
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xd);
LAB_033a8f48:
          pIVar4 = (Il2CppObject *)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
          local_38 = (System_String_o *)
                     System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object,_object>
                               ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                                dictionary,pIVar4,
                                Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_string>__
                               );
        }
        return local_38;
      }
    }
  }
LAB_033a8f80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GetConfigUrl(InternetSettings settings)  [RVA 0x32A8F84]
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

