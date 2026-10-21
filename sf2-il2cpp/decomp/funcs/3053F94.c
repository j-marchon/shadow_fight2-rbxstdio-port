// NHBBOEHHEKG$$.ctor @ RVA 0x3053F94

void NHBBOEHHEKG___ctor(NHBBOEHHEKG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  CNDPAJOLKFN_o *pCVar2;
  CNDPAJOLKFN_o **ppCVar3;
  MEHKKHFBNLM_o **ppMVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MEHKKHFBNLM__o **ppSVar5;
  
  if ((DAT_04565e60 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565e60 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).OECKCNINPHL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).IFNNNFMACDH;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).OGNCBOHIMFJ;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (__this->fields).KGLJICLJHEL = MGNPHCAAEIO_TypeInfo->static_fields->IKFICENDNCL;
  thunk_FUN_01c20e04();
  ppMVar4 = &(__this->fields).CLFNHGGJHCA;
  *ppMVar4 = (MEHKKHFBNLM_o *)0x0;
  (__this->fields).PJKMBLALCBB = 0.0;
  (__this->fields).NMFKJBOAOLK = 0.0;
  (__this->fields).IDBMGJFGIJH = 0.0;
  (__this->fields).KKHNKBHNHGF = 0.0;
  (__this->fields).DAPHCPICAAC = 0.0;
  thunk_FUN_01c20e04(ppMVar4,0);
  ppSVar5 = &(__this->fields).JDLKPFCELNF;
  *ppSVar5 = (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0;
  thunk_FUN_01c20e04(ppSVar5,0);
  return;
}

