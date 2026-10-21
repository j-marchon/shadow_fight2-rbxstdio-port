// NFGLEDADCGL$$FIGJPOMPAON @ RVA 0x316B364

void NFGLEDADCGL__FIGJPOMPAON(NFGLEDADCGL_o *__this,HEFOANCOHDC_o *CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  PJKHAJKEHEL_o *pPVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar3;
  
  if ((DAT_045668f5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    FUN_01bab630(&Method_NFGLEDADCGL_NDBMHJDBGEB_LEKDAOFBGHP__);
    FUN_01bab630(&NFGLEDADCGL_NDBMHJDBGEB_TypeInfo);
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    DAT_045668f5 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(NFGLEDADCGL_NDBMHJDBGEB_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = (Il2CppClass *)CJNHFNHJHPE;
    thunk_FUN_01c20e04(pIVar1,CJNHFNHJHPE);
    pPVar2 = (__this->fields).MFLNIMCFPDK;
    if ((pPVar2 == (PJKHAJKEHEL_o *)0x0) || (pIVar1->klass == (Il2CppClass *)0x0)) {
      return;
    }
    pSVar3 = (pPVar2->fields).EHDILMGPDDN;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar3 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)pSVar3,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
      if (pIVar1 == (Il2CppObject *)0x0) {
        return;
      }
      pPVar2 = (__this->fields).MFLNIMCFPDK;
      if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
         (pSVar3 = (pPVar2->fields).EHDILMGPDDN,
         pSVar3 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar3,pIVar1,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

