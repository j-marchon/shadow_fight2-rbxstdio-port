// JMDPBFOCHHP.FNILDHLJBBJ$$.ctor @ RVA 0x2FF9AFC

void JMDPBFOCHHP_FNILDHLJBBJ___ctor(JMDPBFOCHHP_FNILDHLJBBJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o **ppSVar1;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  System_Collections_Generic_List_DDMHMABAHHD__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ac4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_TypeInfo);
    DAT_04565ac4 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__ctor__);
  ppSVar1 = &(__this->fields).BAPMMGFEIDM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_DDMHMABAHHD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
  ppSVar2 = &(__this->fields).GFBNJPMOEKD;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

