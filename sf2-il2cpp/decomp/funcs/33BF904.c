// CUDLR.Server$$get_ColorWarning @ RVA 0x33BF904

UnityEngine_Color32_o CUDLR_Server__get_ColorWarning(CUDLR_Server_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  UnityEngine_Color32_o UVar5;
  MethodInfo *extraout_x1;
  CFEANGJDHEE_StaticFields *pCVar6;
  
  if ((DAT_04567dbc & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dbc = 1;
    method = extraout_x1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  pCVar6 = CFEANGJDHEE_TypeInfo->static_fields;
  uVar1 = (pCVar6->OCPJOMGAAKD).fields.r;
  uVar2 = (pCVar6->OCPJOMGAAKD).fields.g;
  uVar3 = (pCVar6->OCPJOMGAAKD).fields.b;
  uVar4 = (pCVar6->OCPJOMGAAKD).fields.a;
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

