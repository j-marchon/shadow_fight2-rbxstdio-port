// CFEANGJDHEE$$MLILINDNABO @ RVA 0x30AF1B4

UnityEngine_Color32_o CFEANGJDHEE__MLILINDNABO(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  UnityEngine_Color32_o UVar5;
  MethodInfo *extraout_x1;
  CFEANGJDHEE_StaticFields *pCVar6;
  
  if ((DAT_045661ca & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661ca = 1;
    method = extraout_x1;
  }
  if (((uint)BKFOLMBMFNP < 2) || (BKFOLMBMFNP == 4)) {
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
    }
    pCVar6 = (CFEANGJDHEE_StaticFields *)&CFEANGJDHEE_TypeInfo->static_fields->KFNIDCAJPEM;
  }
  else if (BKFOLMBMFNP == 2) {
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
    }
    pCVar6 = (CFEANGJDHEE_StaticFields *)
             &(CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.r;
  }
  else {
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
    }
    pCVar6 = CFEANGJDHEE_TypeInfo->static_fields;
  }
  uVar1 = *(uint8_t *)&(pCVar6->OCPJOMGAAKD).fields.rgba;
  uVar2 = *(uint8_t *)((long)&(pCVar6->OCPJOMGAAKD).fields.rgba + 1);
  uVar3 = *(uint8_t *)((long)&(pCVar6->OCPJOMGAAKD).fields.rgba + 2);
  uVar4 = *(uint8_t *)((long)&(pCVar6->OCPJOMGAAKD).fields.rgba + 3);
  UVar5.fields.rgba._3_1_ = uVar4;
  UVar5.fields.rgba._2_1_ = uVar3;
  UVar5.fields.rgba._1_1_ = uVar2;
  UVar5.fields.rgba._0_1_ = uVar1;
  UVar5.fields.r = 0;
  UVar5.fields.g = 0;
  UVar5.fields.b = 0;
  UVar5.fields.a = 0;
  return (UnityEngine_Color32_o)UVar5.fields;
}

