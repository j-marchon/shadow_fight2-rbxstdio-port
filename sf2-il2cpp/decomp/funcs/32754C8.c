// AJMOIOIBPGP$$KOOHANBJIIG @ RVA 0x32754C8

void AJMOIOIBPGP__KOOHANBJIIG(AJMOIOIBPGP_o *__this,CFEFALDOEMD_o *JNIBOOMFCEG,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_Predicate_T__o *match;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *method_00;
  System_String_o *CJNPBEJHHLF;
  System_Collections_Generic_List_OPNMPAJKDMI__o *__this_00;
  
  if ((DAT_0456723d & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_GDKPEBEFKJJ_IACBKBLLJLG__);
    FUN_01bab630(&AJMOIOIBPGP_GDKPEBEFKJJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<OPNMPAJKDMI>_TypeInfo);
    DAT_0456723d = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJMOIOIBPGP_GDKPEBEFKJJ_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (JNIBOOMFCEG != (CFEFALDOEMD_o *)0x0) {
    CJNPBEJHHLF = (JNIBOOMFCEG->fields)._CIEBCKIBJHL_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar3 = (Il2CppClass *)NLPJLHOEAOE__FEHJLBEGAPO(CJNPBEJHHLF,(MethodInfo *)0x0);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar2 + 1;
      pIVar2->klass = pIVar3;
      thunk_FUN_01c20e04(pIVar2,pIVar3);
      if ((pIVar2->klass == (Il2CppClass *)0x0) ||
         (bVar1 = JOOGMNNBBHI__DFOPHIKFMHM((HOOAAGABMBL_o *)pIVar2->klass,(MethodInfo *)0x0), !bVar1
         )) {
        return;
      }
      __this_00 = (__this->fields).KALGMNLLLNO;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<OPNMPAJKDMI>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__;
        NLFMDIGKNGP = (OPNMPAJKDMI_o *)
                      System_Collections_Generic_List<object>__Find
                                ((System_Collections_Generic_List_object__o *)__this_00,match,
                                 (MethodInfo_26E5414 *)
                                 Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
        AJMOIOIBPGP__KOOHANBJIIG(__this,NLFMDIGKNGP,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

