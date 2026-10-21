// GGAFBEMCEIN$$FGNINNOOCCL @ RVA 0x301C3D4

void GGAFBEMCEIN__FGNINNOOCCL(GGAFBEMCEIN_o *__this,bool OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_bool__o *pSVar2;
  System_Action_bool__o **ppSVar3;
  
  if ((DAT_04565c17 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15476);
    DAT_04565c17 = 1;
  }
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_15476,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  ppSVar3 = &(__this->fields).JBNMABKLMAH;
  pSVar2 = *ppSVar3;
  if (pSVar2 != (System_Action_bool__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,OOGPLJBADCD,
               (pSVar2->fields).super.super.method);
  }
  *ppSVar3 = (System_Action_bool__o *)0x0;
  thunk_FUN_01c20e04(ppSVar3,0);
  return;
}

