// HJNDPNIMBBG$$JDHIIDFJMBM @ RVA 0x35C57B8

UnityEngine_Sprite_o * HJNDPNIMBBG__JDHIIDFJMBM(HJNDPNIMBBG_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Sprite_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Sprite_o **ppUVar3;
  UnityEngine_Object_o *exists;
  
  if ((DAT_04568f61 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f61 = 1;
    method = extraout_x1;
  }
  ppUVar3 = &(__this->fields).EDACJMBBGNF;
  exists = (UnityEngine_Object_o *)*ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = HJNDPNIMBBG__HEOBDIBNECE(__this,method_00);
    (__this->fields).EDACJMBBGNF = pUVar2;
    thunk_FUN_01c20e04(ppUVar3,pUVar2);
  }
  return *ppUVar3;
}

