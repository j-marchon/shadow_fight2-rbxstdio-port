// Nekki.SF2.GUI.DebugModules.FPSMeter$$PIHLOHKHHMB @ RVA 0x333DAC4

void Nekki_SF2_GUI_DebugModules_FPSMeter__PIHLOHKHHMB
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  Nekki_SF2_GUI_DebugModules_FPSMeter_c *pNVar8;
  Nekki_SF2_GUI_DebugModules_FPSMeter_StaticFields *pNVar9;
  UnityEngine_UI_Text_o *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  
  if ((DAT_04567979 & 1) == 0) {
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_6173);
    DAT_04567979 = 1;
  }
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  iVar1 = (__this->fields).ECHBLKHJOLH;
  fVar11 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  fVar13 = (__this->fields).HMLKMGIMLCH;
  (__this->fields).BGHKLPJMCPC = (__this->fields)._UpdateInterval;
  iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields).ECHBLKHJOLH = iVar3;
  fVar12 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).HMLKMGIMLCH = fVar12;
  if (DAT_045679c0 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c0 = '\x01';
  }
  Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_JHOFDCHHEPF_k__BackingField =
       (float)(iVar2 - iVar1) / (fVar11 - fVar13);
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  iVar1 = (__this->fields).KLILALOJBCJ;
  fVar11 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  fVar12 = (__this->fields).HFAEDJEOAFP;
  if (DAT_045679c1 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c1 = '\x01';
  }
  pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_HFLINEMELAF_k__BackingField =
       (float)(iVar2 - iVar1) / (fVar11 - fVar12);
  if (DAT_045679c2 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c2 = '\x01';
    pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  }
  pNVar9 = pNVar8->static_fields;
  fVar11 = pNVar9->_JHOFDCHHEPF_k__BackingField;
  if (DAT_045679c3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c3 = '\x01';
    pNVar9 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
    pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  }
  if (fVar11 < pNVar9->_HOAGAALGFNP_k__BackingField) {
    if (DAT_045679c2 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c2 = '\x01';
      pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
    }
    pNVar9 = pNVar8->static_fields;
    fVar11 = pNVar9->_JHOFDCHHEPF_k__BackingField;
    if (DAT_045679c4 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c4 = '\x01';
      pNVar9 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
      pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
    }
    pNVar9->_HOAGAALGFNP_k__BackingField = fVar11;
  }
  if (DAT_045679c2 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c2 = '\x01';
    pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  }
  pNVar9 = pNVar8->static_fields;
  fVar11 = pNVar9->_JHOFDCHHEPF_k__BackingField;
  if (DAT_045679c5 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c5 = '\x01';
    pNVar9 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
    pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  }
  if (pNVar9->_DCHILBEKFMP_k__BackingField < fVar11) {
    if (DAT_045679c2 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c2 = '\x01';
      pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
    }
    pNVar9 = pNVar8->static_fields;
    fVar11 = pNVar9->_JHOFDCHHEPF_k__BackingField;
    if (DAT_045679c6 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c6 = '\x01';
      pNVar9 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
    }
    pNVar9->_DCHILBEKFMP_k__BackingField = fVar11;
  }
  pUVar10 = (__this->fields)._Label;
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (DAT_045679c2 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c2 = '\x01';
  }
  local_44 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->
             _JHOFDCHHEPF_k__BackingField;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_44);
  if (args == (System_Object_array *)0x0) {
LAB_0343df7c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
LAB_0343df70:
    uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar7,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar4;
    thunk_FUN_01c20e04(args->m_Items,pIVar4);
    if (DAT_045679c7 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c7 = '\x01';
    }
    local_48 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->
               _HFLINEMELAF_k__BackingField;
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_48);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
    goto LAB_0343df70;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar4;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
      if (DAT_045679c3 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
        DAT_045679c3 = '\x01';
      }
      local_54 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->
                 _HOAGAALGFNP_k__BackingField;
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_54);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
      goto LAB_0343df70;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
        if (DAT_045679c5 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
          DAT_045679c5 = '\x01';
        }
        local_58 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->
                   _DCHILBEKFMP_k__BackingField;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_58);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        goto LAB_0343df70;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar4);
          pSVar6 = System_String__Format(StringLiteral_6173,args,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                      (pUVar10,pSVar6,(pUVar10->klass->vtable)._75_set_text.method);
            return;
          }
          goto LAB_0343df7c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

