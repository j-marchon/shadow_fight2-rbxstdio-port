// NHJCFGACFDF$$.cctor @ RVA 0x333A794

void NHJCFGACFDF___cctor(MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  System_Action_IAchievement____o *pSVar2;
  System_Action_IAchievement____o **ppSVar3;
  System_Action_bool__o **ppSVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__double__o *pSVar7;
  System_Action_string__double__o **ppSVar8;
  System_Action_string__byte____o *pSVar9;
  System_Action_string__byte____o **ppSVar10;
  
  if ((DAT_04567968 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&System_Action<string,_byte[]>_TypeInfo);
    FUN_01bab630(&System_Action<string,_double>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_BHLJILCJIHB__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_BNNBENJGDHK__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_EFEENBBNEKG__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_FDOFKENOADH__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_IHLPPLAONIC__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_MGINCINJFJI__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_NHLMJACAFGJ__);
    FUN_01bab630(&NHJCFGACFDF_<>c_TypeInfo);
    DAT_04567968 = 1;
  }
  if ((NHJCFGACFDF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar1;
  thunk_FUN_01c20e04(NHJCFGACFDF_TypeInfo->static_fields,pSVar1);
  pSVar2 = (System_Action_IAchievement____o *)
           thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar3 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar1 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->HHENPENBNLD;
  *ppSVar4 = pSVar1;
  thunk_FUN_01c20e04(ppSVar4,pSVar1);
  pSVar5 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->EDCABNJMIHN;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar7 = (System_Action_string__double__o *)
           thunk_FUN_01bda818(System_Action<string,_double>_TypeInfo);
                    /* try { // try from 0343a9ec to 0353ab3b has its CatchHandler @ 0343a9ec
                       catch() { ... } // from try @ 0343a9ec with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343abf0 with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343ac14 with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343ac80 with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343acb4 with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343ace8 with catch @ 0343a9ec */
  System_Action<object,_double>___ctor();
  ppSVar8 = &NHJCFGACFDF_TypeInfo->static_fields->DDPMFMMJNJF;
  *ppSVar8 = pSVar7;
  thunk_FUN_01c20e04(ppSVar8,pSVar7);
  pSVar5 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar9 = (System_Action_string__byte____o *)
           thunk_FUN_01bda818(System_Action<string,_byte[]>_TypeInfo);
  System_Action<object,_object>___ctor();
  ppSVar10 = &NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
  *ppSVar10 = pSVar9;
  thunk_FUN_01c20e04(ppSVar10,pSVar9);
  return;
}

