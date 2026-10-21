// EPFMFHDGMCE$$.ctor @ RVA 0x3537150

void EPFMFHDGMCE___ctor(EPFMFHDGMCE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_00;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_01;
  System_Collections_Generic_List_EANNACPOJFA__o **ppSVar1;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_02;
  System_Collections_Generic_List_JLGNBOILFLN__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a96 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<EANNACPOJFA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_TypeInfo);
    DAT_04568a96 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>__ctor__);
  (__this->fields).IMFGEOBBNNA = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_EANNACPOJFA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EANNACPOJFA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
  ppSVar1 = &(__this->fields).JMPJKOKFJMN;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  __this_02 = (System_Collections_Generic_List_JLGNBOILFLN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
  ppSVar2 = &(__this->fields).GCHAMOPMNHF;
  *ppSVar2 = __this_02;
                    /* try { // try from 03637258 to 0373725f has its CatchHandler @ 036373a8 */
  thunk_FUN_01c20e04(ppSVar2,__this_02);
                    /* try { // try from 03637278 to 0373727f has its CatchHandler @ 0363739c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

