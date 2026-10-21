// GMGALNFPLPA$$LDPAAFEFBCL @ RVA 0x306D2A4

void GMGALNFPLPA__LDPAAFEFBCL(GMGALNFPLPA_o *__this,int32_t COMPCBNGHIL,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  CocosAnimation_o *pCVar3;
  
  if ((DAT_04565f43 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f43 = 1;
  }
  pUVar2 = (__this->fields).ANFEBGMOGJD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).ANFEBGMOGJD;
    if (pUVar2 == (UnityEngine_SpriteRenderer_o *)0x0) goto LAB_0316d374;
    UnityEngine_SpriteRenderer__set_drawMode(pUVar2,COMPCBNGHIL,(MethodInfo *)0x0);
  }
  pCVar3 = (__this->fields).AKBKJNNOMOD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pCVar3 = (__this->fields).AKBKJNNOMOD;
  if (pCVar3 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetSpriteDrawMode(pCVar3,COMPCBNGHIL,(MethodInfo *)0x0);
    return;
  }
LAB_0316d374:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

