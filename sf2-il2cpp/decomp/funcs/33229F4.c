// IAGNPGHOAIC$$BKCFPHNEONL @ RVA 0x33229F4

void IAGNPGHOAIC__BKCFPHNEONL(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_AssetBundle_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_AssetBundle_o **ppUVar4;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567858 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567858 = 1;
    method = extraout_x1;
  }
  ppUVar4 = &(__this->fields).IMJGDBPFCLJ;
  x = (UnityEngine_Object_o *)*ppUVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = IAGNPGHOAIC__DCLCMBBOGDD(__this,method_00);
    bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = IAGNPGHOAIC__DCLCMBBOGDD(__this,method_01);
      pUVar3 = UnityEngine_AssetBundle__LoadFromFile(pSVar2,(MethodInfo *)0x0);
      *ppUVar4 = pUVar3;
      thunk_FUN_01c20e04(ppUVar4);
    }
  }
  return;
}

