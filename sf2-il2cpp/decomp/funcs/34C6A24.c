// EINKKMIHCHI$$BGFEFMHKJLO @ RVA 0x34C6A24

void EINKKMIHCHI__BGFEFMHKJLO
               (EINKKMIHCHI_o *__this,System_String_o *OGPGLGPMEPD,double NMGMBECEPHC,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_string__double__o *pSVar2;
  Il2CppMethodPointer local_38;
  
  local_38 = (Il2CppMethodPointer)NMGMBECEPHC;
  if ((DAT_0456863e & 1) == 0) {
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&StringLiteral_3642);
    NMGMBECEPHC = (double)FUN_01bab630(&StringLiteral_512);
    DAT_0456863e = 1;
  }
  pSVar1 = System_Double__ToString(NMGMBECEPHC,(MethodInfo *)&stack0xffffffffffffffc8);
  pSVar1 = System_String__Concat
                     (StringLiteral_3642,OGPGLGPMEPD,StringLiteral_512,pSVar1,(MethodInfo *)0x0);
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar1,(MethodInfo *)0x0);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NHJCFGACFDF_TypeInfo->static_fields->DDPMFMMJNJF;
  if (pSVar2 != (System_Action_string__double__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              (local_38,(pSVar2->fields).super.super.method_code,OGPGLGPMEPD,
               (pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

