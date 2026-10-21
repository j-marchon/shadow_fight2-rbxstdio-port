// NCNJEIBHGBH$$JCDCJJMEAJA @ RVA 0x32F39A0

void NCNJEIBHGBH__JCDCJJMEAJA(NCNJEIBHGBH_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  Il2CppObject *item;
  MethodInfo *method_00;
  System_Action_FKNCNNOOOIO__o *pSVar2;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar3;
  
  if ((DAT_0456767e & 1) == 0) {
    FUN_01bab630(&Method_NCNJEIBHGBH_FKDNPHPNPMC_IAINPGKKEOE__);
    FUN_01bab630(&NCNJEIBHGBH_FKDNPHPNPMC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Remove__);
    FUN_01bab630(&System_Predicate<FKNCNNOOOIO>_TypeInfo);
    DAT_0456767e = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(NCNJEIBHGBH_FKDNPHPNPMC_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(pIVar1,KGLJICLJHEL);
    pSVar3 = (__this->fields).JODEDMLAIEG;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FKNCNNOOOIO>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar3 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__;
      item = System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)pSVar3,match,
                        (MethodInfo_26E5414 *)
                        Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__);
      if (item != (Il2CppObject *)0x0) {
        NCNJEIBHGBH__KKKGNGNJGCA(__this,(System_String_o *)pIVar1->klass,method_00);
        pSVar3 = (__this->fields).JODEDMLAIEG;
        if (pSVar3 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) goto LAB_033f3af8;
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar3,item,
                   Method_System_Collections_Generic_List<FKNCNNOOOIO>_Remove__);
        pSVar2 = (__this->fields).KLCCBGKNCBD;
        if (pSVar2 != (System_Action_FKNCNNOOOIO__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f3ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar2->fields).super.super.invoke_impl)
                    ((pSVar2->fields).super.super.method_code,item,
                     (pSVar2->fields).super.super.method);
          return;
        }
      }
      return;
    }
  }
LAB_033f3af8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

