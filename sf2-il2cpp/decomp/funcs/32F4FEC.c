// NCNJEIBHGBH$$.ctor @ RVA 0x32F4FEC

void NCNJEIBHGBH___ctor(NCNJEIBHGBH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FKNCNNOOOIO__o *__this_00;
  System_Collections_Generic_List_FKNCNNOOOIO__o **ppSVar1;
  LIDDCJFOOOI_o *pLVar2;
  LIDDCJFOOOI_o **ppLVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_string__o **ppSVar5;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  System_Collections_Generic_Dictionary_string__int__o **ppSVar6;
  System_Text_StringBuilder_o *__this_02;
  System_Text_StringBuilder_o **ppSVar7;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033f5020 to 034f502b has its CatchHandler @ 033f4b64 */
                    /* try { // try from 033f502c to 034f5033 has its CatchHandler @ 033f5034 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f4fb8 with catch @ 033f5034
                       catch(type#2 @ 00000000) { ... } // from try @ 033f502c with catch @ 033f5034
                        */
                    /* try { // try from 033f503c to 034f5167 has its CatchHandler @ 033f503c
                       catch() { ... } // from try @ 033f503c with catch @ 033f503c
                       catch() { ... } // from try @ 033f5344 with catch @ 033f503c
                       catch() { ... } // from try @ 033f5400 with catch @ 033f503c
                       catch() { ... } // from try @ 033f5408 with catch @ 033f503c
                       catch() { ... } // from try @ 033f5508 with catch @ 033f503c */
  if ((DAT_04567685 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    FUN_01bab630(&LIDDCJFOOOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04567685 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_FKNCNNOOOIO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FKNCNNOOOIO>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FKNCNNOOOIO>__ctor__);
  ppSVar1 = &(__this->fields).JODEDMLAIEG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pLVar2 = (LIDDCJFOOOI_o *)thunk_FUN_01bda818(LIDDCJFOOOI_TypeInfo);
  LIDDCJFOOOI___ctor(pLVar2,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).GNMGOPAABKE;
  *ppLVar3 = pLVar2;
  thunk_FUN_01c20e04(ppLVar3,pLVar2);
  pLVar2 = (LIDDCJFOOOI_o *)thunk_FUN_01bda818(LIDDCJFOOOI_TypeInfo);
  LIDDCJFOOOI___ctor(pLVar2,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).PFBKEFOBEDB;
  *ppLVar3 = pLVar2;
  thunk_FUN_01c20e04(ppLVar3,pLVar2);
  pSVar4 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar5 = &(__this->fields).DMLKGAKPCAB;
  *ppSVar5 = pSVar4;
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  pSVar4 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar5 = &(__this->fields).PAFEHLCLKEC;
  *ppSVar5 = pSVar4;
                    /* try { // try from 033f5168 to 034f518f has its CatchHandler @ 033f5448 */
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  ppSVar6 = &(__this->fields).CJKAPEOHOLL;
  *ppSVar6 = (System_Collections_Generic_Dictionary_string__int__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar6,__this_01);
  __this_02 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_02,(MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).LJLADKMLDEF;
  *ppSVar7 = __this_02;
  thunk_FUN_01c20e04(ppSVar7,__this_02);
                    /* try { // try from 033f51c4 to 034f51ef has its CatchHandler @ 033f5444 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

