// EINKKMIHCHI.HEGCHDGDMHD$$IDGJKNDJFBD @ RVA 0x34C8348

void EINKKMIHCHI_HEGCHDGDMHD__IDGJKNDJFBD
               (EINKKMIHCHI_HEGCHDGDMHD_o *__this,int32_t status,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *JLNPKGGFFDD;
  System_Action_bool__o *pSVar1;
  EINKKMIHCHI_o *pEVar2;
  int32_t local_34;
  
  if ((DAT_0456864e & 1) == 0) {
    FUN_01bab630(&HDBCDLKEHLD_NFNCDDAFPIM_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&StringLiteral_3645);
    DAT_0456864e = 1;
  }
  pEVar2 = (__this->fields).__4__this;
  local_34 = status;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(HDBCDLKEHLD_NFNCDDAFPIM_TypeInfo,&local_34);
  JLNPKGGFFDD = System_String__Format(StringLiteral_3645,arg0,(MethodInfo *)0x0);
  if (pEVar2 != (EINKKMIHCHI_o *)0x0) {
    NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)pEVar2,JLNPKGGFFDD,(MethodInfo *)0x0);
    if ((status == 0 & ((__this->fields).isSignedIn ^ 0xffU)) != 0) {
      pEVar2 = (__this->fields).__4__this;
      if (pEVar2 == (EINKKMIHCHI_o *)0x0) goto LAB_035c8480;
      (*(pEVar2->klass->vtable)._6_FOGOMNAOMBD.methodPtr)
                (pEVar2,(pEVar2->klass->vtable)._6_FOGOMNAOMBD.method);
    }
    if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI;
    if (pSVar1 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,status == 0,
                 (pSVar1->fields).super.super.method);
      pSVar1 = (__this->fields).callback;
      if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* try { // try from 035c8464 to 036c846b has its CatchHandler @ 035c870c */
        (*(code *)(pSVar1->fields).super.super.invoke_impl)
                  ((pSVar1->fields).super.super.method_code,status == 0,
                   (pSVar1->fields).super.super.method);
      }
      return;
    }
  }
LAB_035c8480:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035c8480 to 036c8483 has its CatchHandler @ 035c8708 */
  FUN_01bab8c8();
}

