// AJMOIOIBPGP$$DKPJKIDCHKE @ RVA 0x3276728

void AJMOIOIBPGP__DKPJKIDCHKE(AJMOIOIBPGP_o *__this,System_String_o *DGMHNKGDAIL,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  System_Collections_Generic_List_OPNMPAJKDMI__o *__this_00;
  
  if ((DAT_0456724a & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_CMFHDJEKJOD_BAOHMIBMIDG__);
    FUN_01bab630(&AJMOIOIBPGP_CMFHDJEKJOD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
    FUN_01bab630(&System_Predicate<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&StringLiteral_9804);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_4311);
    DAT_0456724a = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJMOIOIBPGP_CMFHDJEKJOD_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)DGMHNKGDAIL;
    thunk_FUN_01c20e04(pIVar2,DGMHNKGDAIL);
    if (pIVar2->klass != (Il2CppClass *)0x0) {
      bVar1 = System_String__StartsWith
                        ((System_String_o *)pIVar2->klass,StringLiteral_9804,(MethodInfo *)0x0);
      if (!bVar1) {
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
        if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
          AJMOIOIBPGP__BCLJHFNMAID(__this,NLFMDIGKNGP,method_00);
          return;
        }
        JLNPKGGFFDD = System_String__Concat
                                (StringLiteral_4311,(System_String_o *)pIVar2->klass,
                                 StringLiteral_802,(MethodInfo *)0x0);
        KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

