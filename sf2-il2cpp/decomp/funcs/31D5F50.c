// WideController$$OBJNGNDMDCL @ RVA 0x31D5F50

void WideController__OBJNGNDMDCL
               (UnityEngine_UI_Text_o *EHNFGMGKCHO,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04566ce4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_14641);
    DAT_04566ce4 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)EHNFGMGKCHO,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(OGPGLGPMEPD,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)(ulong)bVar1;
  pSVar3 = StringLiteral_1;
  if (!bVar1) {
    pSVar2 = System_String__Concat(StringLiteral_14641,OGPGLGPMEPD,(MethodInfo *)0x0);
    pSVar3 = pSVar2;
  }
  if (EHNFGMGKCHO == (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(pSVar2,pSVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x032d6034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(EHNFGMGKCHO->klass->vtable)._75_set_text.methodPtr)
            (EHNFGMGKCHO,pSVar3,(EHNFGMGKCHO->klass->vtable)._75_set_text.method);
  return;
}

