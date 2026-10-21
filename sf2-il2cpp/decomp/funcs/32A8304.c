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
    FUN_01bab630(&StringLiteral_1399);
                    /* try { // try from 033a8350 to 034a836f has its CatchHandler @ 033a8844 */
    FUN_01bab630(&StringLiteral_2138);
    FUN_01bab630(&StringLiteral_2137);
    FUN_01bab630(&StringLiteral_1572);
                    /* try { // try from 033a8374 to 034a8383 has its CatchHandler @ 033a87b4 */
    FUN_01bab630(&StringLiteral_15777);
    FUN_01bab630(&StringLiteral_15779);
    FUN_01bab630(&StringLiteral_15803);
                    /* try { // try from 033a83a0 to 034a83a7 has its CatchHandler @ 033a87b0 */
    FUN_01bab630(&StringLiteral_2856);
    FUN_01bab630(&StringLiteral_1377);
                    /* try { // try from 033a83b0 to 034a83b7 has its CatchHandler @ 033a87a8 */
    DAT_04567416 = 1;
  }
                    /* try { // try from 033a83b8 to 034a83c3 has its CatchHandler @ 033a87a4 */
  local_3c = 0.0;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,0x13);
  if (values != (System_String_array *)0x0) {
                    /* try { // try from 033a83cc to 034a83d7 has its CatchHandler @ 033a87a0 */
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2856;
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
          values->m_Items[2] = StringLiteral_1399;
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
              values->m_Items[4] = StringLiteral_15779;
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
                  values->m_Items[6] = StringLiteral_1399;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  local_38 = (settings->fields)._FrequencyFactor_k__BackingField.fields;
                  pSVar1 = System_Single__ToString(local_38.x,method_02);
                    /* try { // try from 033a8520 to 034a8527 has its CatchHandler @ 033a8774 */
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar1;
                    thunk_FUN_01c20e04(values->m_Items + 7,pSVar1);
                    if (8 < (uint)values->max_length) {
                    /* try { // try from 033a8548 to 034a856b has its CatchHandler @ 033a8840 */
                      values->m_Items[8] = StringLiteral_15777;
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
                          values->m_Items[10] = StringLiteral_1399;
                          thunk_FUN_01c20e04(values->m_Items + 10);
                          local_38 = (settings->fields)._Diagonal_k__BackingField.fields;
                          pSVar1 = System_Single__ToString(local_38.x,method_02);
                          if (0xb < (uint)values->max_length) {
                    /* try { // try from 033a85d8 to 034a85df has its CatchHandler @ 033a8750 */
                            values->m_Items[0xb] = pSVar1;
                            thunk_FUN_01c20e04(values->m_Items + 0xb,pSVar1);
                    /* try { // try from 033a85f0 to 034a8633 has its CatchHandler @ 033a8838 */
                            if (0xc < (uint)values->max_length) {
                              values->m_Items[0xc] = StringLiteral_15803;
                              thunk_FUN_01c20e04();
                              if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              local_3c = EOAOCPLIKOI__MDNNMFAPAEG((MethodInfo *)0x0);
                    /* try { // try from 033a863c to 034a867b has its CatchHandler @ 033a8834 */
                              pSVar1 = System_Single__ToString
                                                 (local_3c,(System_String_o *)&local_3c,
                                                  StringLiteral_1572);
                              if (0xd < (uint)values->max_length) {
                                values->m_Items[0xd] = pSVar1;
                                thunk_FUN_01c20e04(values->m_Items + 0xd,pSVar1);
                                if (0xe < (uint)values->max_length) {
                    /* try { // try from 033a8688 to 034a86a3 has its CatchHandler @ 033a878c */
                                  values->m_Items[0xe] = StringLiteral_2137;
                                  thunk_FUN_01c20e04(values->m_Items + 0xe);
                                  local_3c = Core_Configs_Models_BuildSettingsExtension__EvaluateAmplitudeFactor
                                                       (settings,method_00);
                    /* try { // try from 033a86a4 to 034a86cf has its CatchHandler @ 033a8254 */
                                  pSVar1 = System_Single__ToString
                                                     (local_3c,(System_String_o *)&local_3c,
                                                      StringLiteral_1572);
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
                                      values->m_Items[0x10] = StringLiteral_2138;
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
                                                          StringLiteral_1572);
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
                                          values->m_Items[0x12] = StringLiteral_1377;
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

