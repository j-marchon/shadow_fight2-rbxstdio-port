// AJMOIOIBPGP$$HFHBIDELOIC @ RVA 0x3275DE8

bool AJMOIOIBPGP__HFHBIDELOIC(AJMOIOIBPGP_o *__this,System_String_o *CBIADCOKAIP,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  System_Collections_Generic_List_OPNMPAJKDMI__o *__this_00;
  
  if ((DAT_04567244 & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_EBBIKOIIJGN_DCPNIIHGIAK__);
    FUN_01bab630(&AJMOIOIBPGP_EBBIKOIIJGN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Find__);
    FUN_01bab630(&System_Predicate<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&StringLiteral_853);
    FUN_01bab630(&StringLiteral_3625);
    DAT_04567244 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJMOIOIBPGP_EBBIKOIIJGN_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)CBIADCOKAIP;
    thunk_FUN_01c20e04(pIVar2,CBIADCOKAIP);
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
        bVar1 = AJMOIOIBPGP__HFHBIDELOIC(__this,NLFMDIGKNGP,method_00);
        return bVar1;
      }
      JLNPKGGFFDD = System_String__Concat
                              (StringLiteral_3625,(System_String_o *)pIVar2->klass,StringLiteral_853
                               ,(MethodInfo *)0x0);
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

