// OGOKJDDJEOE$$OGOOONHNKEI @ RVA 0x323B780

UnityEngine_Sprite_o * OGOKJDDJEOE__OGOOONHNKEI(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Sprite_o *pUVar2;
  UnityEngine_Sprite_o **ppUVar3;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456705e & 1) == 0) {
    FUN_01bab630(&OGOKJDDJEOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
    FUN_01bab630(&StringLiteral_12939);
    DAT_0456705e = 1;
  }
  x = (UnityEngine_Object_o *)OGOKJDDJEOE_TypeInfo->static_fields->NNPAAOKBHEH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (UnityEngine_Sprite_o *)
             UnityEngine_ResourcesAndBundles__Load<object>
                       (StringLiteral_12939,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
    ppUVar3 = &OGOKJDDJEOE_TypeInfo->static_fields->NNPAAOKBHEH;
    *ppUVar3 = pUVar2;
    thunk_FUN_01c20e04(ppUVar3,pUVar2);
  }
  return OGOKJDDJEOE_TypeInfo->static_fields->NNPAAOKBHEH;
}

