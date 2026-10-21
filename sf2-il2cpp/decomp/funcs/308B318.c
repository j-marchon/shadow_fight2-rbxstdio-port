// IEFEBEDLHNN$$.ctor @ RVA 0x308B318

/* WARNING: Type propagation algorithm not settling */

void IEFEBEDLHNN___ctor(IEFEBEDLHNN_o *__this,System_String_o *KGLJICLJHEL,
                       CNDPAJOLKFN_o *PAHIALNFELL,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  CNDPAJOLKFN_o *pCVar2;
  CNDPAJOLKFN_o **ppCVar3;
  System_String_o **ppSVar4;
  MethodInfo *method_00;
  UnityEngine_Vector3_o CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar5;
  undefined1 local_c8 [40];
  float local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_70;
  
  if ((DAT_04566055 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04566055 = 1;
  }
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).CNMHHKAMGPI;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).BJKKHONDAKP;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = CNDPAJOLKFN__ALBJPLAPOBO(PAHIALNFELL,(MethodInfo *)0x0);
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)&local_90,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  local_70.hiddenValue.fields.y = local_90.hiddenValue.fields.y;
  local_70.hiddenValue.fields.z = local_90.hiddenValue.fields.z;
  local_70.currentCryptoKey = local_90.currentCryptoKey;
  local_70.hiddenValue.fields.x = local_90.hiddenValue.fields.x;
  local_70.fakeValue.fields.z = local_90.fakeValue.fields.z;
  local_70.fakeValueActive = local_90.fakeValueActive;
  local_70.inited = local_90.inited;
  local_70._30_2_ = local_90._30_2_;
  pCVar2 = (__this->fields).CNMHHKAMGPI;
  pCVar1 = &(__this->fields).OGPJAABGEHE;
  *(undefined8 *)&(__this->fields).OGPJAABGEHE.fields.fakeValue.fields.z = local_90._24_8_;
  (pCVar1->fields).fakeValue.fields.x = local_90.fakeValue.fields.x;
  (pCVar1->fields).fakeValue.fields.y = local_90.fakeValue.fields.y;
  pCVar1 = &(__this->fields).OGPJAABGEHE;
  (pCVar1->fields).hiddenValue.fields.y = local_90.hiddenValue.fields.y;
  (pCVar1->fields).hiddenValue.fields.z = local_90.hiddenValue.fields.z;
  (__this->fields).OGPJAABGEHE.fields.currentCryptoKey = local_90.currentCryptoKey;
  (__this->fields).OGPJAABGEHE.fields.hiddenValue.fields.x = local_90.hiddenValue.fields.x;
  if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar2,PAHIALNFELL,(MethodInfo *)0x0);
    if (*ppCVar3 != (CNDPAJOLKFN_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      CNDPAJOLKFN__FOOHBJNHOKK(*ppCVar3,PAHIALNFELL,(MethodInfo *)0x0);
      ppSVar4 = &(__this->fields).NPFMOEOIEKM;
      *ppSVar4 = KGLJICLJHEL;
      thunk_FUN_01c20e04(ppSVar4,KGLJICLJHEL);
      (__this->fields).FLDBGCIKMKA = 0;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,0.0,
                 (MethodInfo *)0x0);
      local_a0 = local_90.fakeValue.fields.x;
      local_c8._32_4_ = local_90.hiddenValue.fields.y;
      local_c8._36_4_ = local_90.hiddenValue.fields.z;
      local_c8._24_4_ = local_90.currentCryptoKey;
      local_c8._28_4_ = local_90.hiddenValue.fields.x;
      *(float *)&(__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive =
           local_90.fakeValue.fields.x;
      (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_90.hiddenValue.fields.y;
      (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue =
           (float)local_90.hiddenValue.fields.z;
      (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey =
           local_90.currentCryptoKey;
      (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue =
           local_90.hiddenValue.fields.x;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_c8,0.0,(MethodInfo *)0x0
                );
      local_90.fakeValue.fields.x = (float)local_c8._16_4_;
      local_90.hiddenValue.fields.y = local_c8._8_4_;
      local_90.hiddenValue.fields.z = local_c8._12_4_;
      local_90.currentCryptoKey = local_c8._0_4_;
      local_90.hiddenValue.fields.x = local_c8._4_4_;
      (__this->fields).DNPEHJEILDN.fields.fakeValueActive = (bool_conflict)local_c8[0x10];
      (__this->fields).DNPEHJEILDN.fields.inited = (bool_conflict)local_c8[0x11];
      *(undefined2 *)&(__this->fields).DNPEHJEILDN.fields.field_0x12 = local_c8._18_2_;
      (__this->fields).DNPEHJEILDN.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_c8._8_4_;
      (__this->fields).DNPEHJEILDN.fields.fakeValue = (float)local_c8._12_4_;
      (__this->fields).DNPEHJEILDN.fields.currentCryptoKey = local_c8._0_4_;
      (__this->fields).DNPEHJEILDN.fields.hiddenValue = local_c8._4_4_;
      (__this->fields).DDMMFMCNPON = 0.0;
      (__this->fields).GAFCPEOANDD = (IEFEBEDLHNN_o *)0x0;
      thunk_FUN_01c20e04(&__this->fields,0);
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (__this->fields)._GBHELIILHOM_k__BackingField.fields = CVar5;
      (__this->fields).MCAILHLELHB = true;
      (__this->fields)._FFLODIDGPIO_k__BackingField = false;
      (__this->fields).NPICHBKFEBF = false;
      (__this->fields).BEGOLMJFLCG = false;
      (__this->fields)._FEONDPFFLFJ_k__BackingField = false;
      (__this->fields).ENFFPGHABFD = false;
      (__this->fields).EKMNMODEKKP = false;
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
      (__this->fields).MKNHLACCLLP.fields = CVar5;
      IEFEBEDLHNN__GNLPNKGBAFL(__this,0,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

