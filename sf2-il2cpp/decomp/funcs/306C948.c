// GMGALNFPLPA$$NOKHGKKMCHA @ RVA 0x306C948

void GMGALNFPLPA__NOKHGKKMCHA(GMGALNFPLPA_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_SpriteRenderer_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  
  if ((DAT_04565f42 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f42 = 1;
  }
  pUVar3 = (__this->fields).ANFEBGMOGJD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).ANFEBGMOGJD;
    if ((pUVar3 == (UnityEngine_SpriteRenderer_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0316ca6c;
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields).OJJAMKDEMJJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).OJJAMKDEMJJ;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316ca6c;
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields).HGMMHCMHINJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).HGMMHCMHINJ;
  if ((__this_00 != (UnityEngine_Component_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_0316ca6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

