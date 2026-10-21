// OGOKJDDJEOE$$KPHMCGKMLEN @ RVA 0x323BAA0

UnityEngine_Material_o * OGOKJDDJEOE__KPHMCGKMLEN(OGOKJDDJEOE_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567061 & 1) == 0) {
    FUN_01bab630(&OGOKJDDJEOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Material>__);
    FUN_01bab630(&StringLiteral_8867);
    DAT_04567061 = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)OGOKJDDJEOE_TypeInfo->static_fields->BPFKIHDKBOO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (UnityEngine_Material_o *)
             UnityEngine_ResourcesAndBundles__Load<object>
                       (StringLiteral_8867,Method_UnityEngine_ResourcesAndBundles_Load<Material>__);
    OGOKJDDJEOE_TypeInfo->static_fields->BPFKIHDKBOO = pUVar2;
    thunk_FUN_01c20e04(OGOKJDDJEOE_TypeInfo->static_fields,pUVar2);
  }
  return OGOKJDDJEOE_TypeInfo->static_fields->BPFKIHDKBOO;
}

