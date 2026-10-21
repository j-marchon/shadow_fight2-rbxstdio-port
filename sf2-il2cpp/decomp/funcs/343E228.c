// OPNMPAJKDMI$$BNNIDPDMOIL @ RVA 0x343E228

bool OPNMPAJKDMI__BNNIDPDMOIL(OPNMPAJKDMI_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  HOOAAGABMBL_o *pHVar2;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_01;
  
  if ((DAT_045681fe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_TrueForAll__);
    FUN_01bab630(&Method_OPNMPAJKDMI_MNFOBMOOCLN_FNCKNONJKIK__);
    FUN_01bab630(&OPNMPAJKDMI_MNFOBMOOCLN_TypeInfo);
    FUN_01bab630(&System_Predicate<LEGDPJHPEOB>_TypeInfo);
    DAT_045681fe = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OPNMPAJKDMI_MNFOBMOOCLN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)OKBIKHHKOEN;
    thunk_FUN_01c20e04(__this_00 + 1,OKBIKHHKOEN);
    pHVar2 = (__this->fields)._BODPEKDENEG_k__BackingField;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      __this_01 = (pHVar2->fields)._KCELOPNOAEM_k__BackingField;
      if (__this_01 != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
        match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<LEGDPJHPEOB>_TypeInfo);
                    /* try { // try from 0353e2f0 to 0363e38b has its CatchHandler @ 0353e2f0
                       catch() { ... } // from try @ 0353e2f0 with catch @ 0353e2f0
                       catch() { ... } // from try @ 0353e3f0 with catch @ 0353e2f0
                       catch() { ... } // from try @ 0353e418 with catch @ 0353e2f0
                       catch() { ... } // from try @ 0353e444 with catch @ 0353e2f0
                       catch() { ... } // from try @ 0353e48c with catch @ 0353e2f0 */
        System_Predicate<object>___ctor();
        bVar1 = System_Collections_Generic_List<object>__TrueForAll
                          ((System_Collections_Generic_List_object__o *)__this_01,match,
                           Method_System_Collections_Generic_List<LEGDPJHPEOB>_TrueForAll__);
        return bVar1;
      }
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

