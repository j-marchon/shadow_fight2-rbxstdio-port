// MMDDDDFHOLG$$.ctor @ RVA 0x33636C0

void MMDDDDFHOLG___ctor(MMDDDDFHOLG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__object__o **ppSVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_01;
  System_Collections_Generic_List_EHCCNKFIPPA__o **ppSVar2;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_02;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o **ppSVar3;
  NKPJLEMPIKD_GBBCKIANDCN_o *__this_03;
  NKPJLEMPIKD_GBBCKIANDCN_o **ppNVar4;
  MMDDDDFHOLG_CFAPCBMMJIP_o *__this_04;
  MMDDDDFHOLG_CFAPCBMMJIP_o **ppMVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a9a & 1) == 0) {
    FUN_01bab630(&MMDDDDFHOLG_CFAPCBMMJIP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&NKPJLEMPIKD_GBBCKIANDCN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EHCCNKFIPPA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<MMDDDDFHOLG_CFAPCBMMJIP>__ctor__);
    DAT_04567a9a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  ppSVar1 = &(__this->fields).KECADJKAJNG;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__object__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_EHCCNKFIPPA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EHCCNKFIPPA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>__ctor__);
  ppSVar2 = &(__this->fields).PNGAKAPODKB;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
  ppSVar3 = &(__this->fields).JOKDIFAIOKL;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  __this_03 = (NKPJLEMPIKD_GBBCKIANDCN_o *)thunk_FUN_01bda818(NKPJLEMPIKD_GBBCKIANDCN_TypeInfo);
  NKPJLEMPIKD_GBBCKIANDCN___ctor(__this_03,(MethodInfo *)0x0);
  ppNVar4 = &(__this->fields).CGDFGAMKHLE;
  *ppNVar4 = __this_03;
  thunk_FUN_01c20e04(ppNVar4,__this_03);
  __this_04 = (MMDDDDFHOLG_CFAPCBMMJIP_o *)thunk_FUN_01bda818(MMDDDDFHOLG_CFAPCBMMJIP_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  ppMVar5 = &(__this->fields).INJKHBBGKLH;
  *ppMVar5 = __this_04;
  thunk_FUN_01c20e04(ppMVar5,__this_04);
  OMLLDCIMLBB<object>___ctor
            ((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<MMDDDDFHOLG_CFAPCBMMJIP>__ctor__);
  return;
}

