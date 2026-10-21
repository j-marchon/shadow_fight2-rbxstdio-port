// NHBBOEHHEKG$$.ctor @ RVA 0x30567FC

void NHBBOEHHEKG___ctor(NHBBOEHHEKG_o *__this,System_String_o *AFKICLAFDKC,
                       System_String_o *OJFFGFPNOBM,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  CNDPAJOLKFN_o *pCVar2;
  CNDPAJOLKFN_o **ppCVar3;
  System_String_o *message;
  System_String_o **ppSVar4;
  MEHKKHFBNLM_o **ppMVar5;
  System_Collections_Generic_List_MEHKKHFBNLM__o **ppSVar6;
  
  if ((DAT_04565e68 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_8591);
    DAT_04565e68 = 1;
  }
                    /* try { // try from 03156894 to 0325698f has its CatchHandler @ 03156894
                       catch() { ... } // from try @ 03156894 with catch @ 03156894
                       catch() { ... } // from try @ 03156a64 with catch @ 03156894
                       catch() { ... } // from try @ 03156aa8 with catch @ 03156894
                       catch() { ... } // from try @ 03156bf0 with catch @ 03156894 */
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
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
  message = System_String__Concat(StringLiteral_8591,AFKICLAFDKC,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).KGLJICLJHEL;
  *ppSVar4 = AFKICLAFDKC;
  thunk_FUN_01c20e04(ppSVar4,AFKICLAFDKC);
  (__this->fields).PJKMBLALCBB = 0.0;
  (__this->fields).NMFKJBOAOLK = 0.0;
  (__this->fields).IDBMGJFGIJH = 0.0;
  (__this->fields).KKHNKBHNHGF = 0.0;
  (__this->fields).DAPHCPICAAC = 0.0;
  ppSVar4 = &(__this->fields).FNLFDPAJACB;
  *ppSVar4 = OJFFGFPNOBM;
  thunk_FUN_01c20e04(ppSVar4,OJFFGFPNOBM);
  ppMVar5 = &(__this->fields).CLFNHGGJHCA;
  *ppMVar5 = (MEHKKHFBNLM_o *)0x0;
  thunk_FUN_01c20e04(ppMVar5,0);
  ppSVar6 = &(__this->fields).JDLKPFCELNF;
  *ppSVar6 = (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0;
                    /* try { // try from 03156990 to 03256997 has its CatchHandler @ 03156a74 */
  thunk_FUN_01c20e04(ppSVar6,0);
  return;
}

