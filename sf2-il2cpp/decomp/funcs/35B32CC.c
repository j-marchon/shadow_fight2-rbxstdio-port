// FDJKKAFIEFB$$GCNGEONPCGF @ RVA 0x35B32CC

bool FDJKKAFIEFB__GCNGEONPCGF
               (FDJKKAFIEFB_o *__this,System_String_o *DDMGAEHAGMN,DBNEEHGBCJD_o **NFDKMBAGHPD,
               MethodInfo *method)

{
  bool bVar1;
  FDJKKAFIEFB_KDBBHOMLGBN_o *__this_00;
  FDJKKAFIEFB_o **ppFVar2;
  System_Predicate_T__o *pSVar3;
  DBNEEHGBCJD_o *pDVar4;
  FDJKKAFIEFB_o *__this_01;
  Il2CppObject *__this_02;
  KMBNFNCDDBP_o *__this_03;
  Il2CppClass *pIVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_DBNEEHGBCJD__o *pSVar6;
  FDJKKAFIEFB_KDBBHOMLGBN_Fields *pFVar7;
  
  method_01 = (MethodInfo *)NFDKMBAGHPD;
  if ((DAT_04568ea6 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_FDJKKAFIEFB_KDBBHOMLGBN_GDMDHKHHADB__);
    FUN_01bab630(&FDJKKAFIEFB_KDBBHOMLGBN_TypeInfo);
    FUN_01bab630(&Method_FDJKKAFIEFB_LMFFOOFIHAP_PGPHHMNEABO__);
    FUN_01bab630(&FDJKKAFIEFB_LMFFOOFIHAP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    FUN_01bab630(&System_Predicate<DBNEEHGBCJD>_TypeInfo);
    DAT_04568ea6 = 1;
  }
  __this_00 = (FDJKKAFIEFB_KDBBHOMLGBN_o *)thunk_FUN_01bda818(FDJKKAFIEFB_KDBBHOMLGBN_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (FDJKKAFIEFB_KDBBHOMLGBN_o *)0x0) goto LAB_036b354c;
  pFVar7 = &__this_00->fields;
  pFVar7->languageName = DDMGAEHAGMN;
  thunk_FUN_01c20e04(pFVar7,DDMGAEHAGMN);
  ppFVar2 = &(__this_00->fields).__4__this;
  *ppFVar2 = __this;
  thunk_FUN_01c20e04(ppFVar2,__this);
  *NFDKMBAGHPD = (DBNEEHGBCJD_o *)0x0;
  thunk_FUN_01c20e04(NFDKMBAGHPD,0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pFVar7->languageName,(MethodInfo *)0x0);
  __this_01 = (FDJKKAFIEFB_o *)(ulong)bVar1;
  if (!bVar1) {
    pSVar6 = (__this->fields).DIKCNPKCGJP;
    pSVar3 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar6 == (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) goto LAB_036b354c;
    method_01 = Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__;
    pDVar4 = (DBNEEHGBCJD_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)pSVar6,pSVar3,
                        (MethodInfo_26E5414 *)
                        Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    *NFDKMBAGHPD = pDVar4;
    __this_01 = (FDJKKAFIEFB_o *)thunk_FUN_01c20e04(NFDKMBAGHPD,pDVar4);
  }
  pDVar4 = *NFDKMBAGHPD;
  if (pDVar4 == (DBNEEHGBCJD_o *)0x0) {
    __this_02 = (Il2CppObject *)thunk_FUN_01bda818(FDJKKAFIEFB_LMFFOOFIHAP_TypeInfo);
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_03 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if ((__this_03 == (KMBNFNCDDBP_o *)0x0) ||
       (pIVar5 = (Il2CppClass *)KMBNFNCDDBP__MLHLAKMLJNI(__this_03,(MethodInfo *)0x0),
       __this_02 == (Il2CppObject *)0x0)) {
LAB_036b354c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02[1].klass = pIVar5;
    thunk_FUN_01c20e04();
    pSVar6 = (__this->fields).DIKCNPKCGJP;
    pSVar3 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar6 == (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) goto LAB_036b354c;
    method_01 = Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__;
    pDVar4 = (DBNEEHGBCJD_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)pSVar6,pSVar3,
                        (MethodInfo_26E5414 *)
                        Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    *NFDKMBAGHPD = pDVar4;
    __this_01 = (FDJKKAFIEFB_o *)thunk_FUN_01c20e04(NFDKMBAGHPD,pDVar4);
    pDVar4 = *NFDKMBAGHPD;
    method_00 = (MethodInfo *)0x0;
    if (pDVar4 != (DBNEEHGBCJD_o *)0x0) goto LAB_036b350c;
  }
  else {
LAB_036b350c:
    bVar1 = FDJKKAFIEFB__GCGNFLHOGPA(__this_01,pDVar4,method_01);
    method_00 = extraout_x1;
    if (bVar1) goto LAB_036b352c;
  }
  pDVar4 = FDJKKAFIEFB_KDBBHOMLGBN__AOKIOPIEODA(__this_00,method_00);
  *NFDKMBAGHPD = pDVar4;
  thunk_FUN_01c20e04(NFDKMBAGHPD,pDVar4);
LAB_036b352c:
  return *NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0;
}

