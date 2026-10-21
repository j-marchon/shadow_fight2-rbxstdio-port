// FDJKKAFIEFB$$ILLMMCPADOI @ RVA 0x35B3208

void FDJKKAFIEFB__ILLMMCPADOI(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  System_Predicate_T__o *match;
  DBNEEHGBCJD_o *pDVar1;
  MethodInfo *extraout_x1;
  DBNEEHGBCJD_o **ppDVar2;
  System_Collections_Generic_List_DBNEEHGBCJD__o *__this_00;
  
  if ((DAT_04568ea7 & 1) == 0) {
    FUN_01bab630(&Method_FDJKKAFIEFB_PHOGJJDCFEJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    FUN_01bab630(&System_Predicate<DBNEEHGBCJD>_TypeInfo);
    DAT_04568ea7 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DIKCNPKCGJP;
  match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo,method)
  ;
  System_Predicate<object>___ctor();
  if (__this_00 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
    pDVar1 = (DBNEEHGBCJD_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this_00,match,
                        Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    ppDVar2 = &(__this->fields)._ELDCPOBNFJJ_k__BackingField;
    *ppDVar2 = pDVar1;
    thunk_FUN_01c20e04(ppDVar2,pDVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

