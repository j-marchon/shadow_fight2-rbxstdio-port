// PKKLIJLIKGF$$.ctor @ RVA 0x30256AC

void PKKLIJLIKGF___ctor(PKKLIJLIKGF_o *__this,PKKLIJLIKGF_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_KeyValuePair_string__string___o *pSVar2;
  System_String_o *pSVar3;
  System_Action_T__o *pSVar4;
  System_Collections_Generic_List_KeyValuePair_string__string___o **ppSVar5;
  PKKLIJLIKGF_Fields *pPVar6;
  System_Collections_Generic_List_string__o **ppSVar7;
  
  if ((DAT_04565c8c & 1) == 0) {
    FUN_01bab630(&System_Action<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_PKKLIJLIKGF_CJHLLKHEEHH__);
    FUN_01bab630(&Method_PKKLIJLIKGF_LCCHBPEFMJN__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565c8c = 1;
  }
  pPVar6 = &__this->fields;
  pPVar6->DEKCPPOJFEH = StringLiteral_1;
  thunk_FUN_01c20e04(pPVar6);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar7 = &(__this->fields).IIBDCLHFNCD;
  *ppSVar7 = pSVar1;
  thunk_FUN_01c20e04(ppSVar7,pSVar1);
  pSVar2 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                             );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar2,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
  ppSVar5 = &(__this->fields).NAPHDEGHDNP;
  *ppSVar5 = pSVar2;
  thunk_FUN_01c20e04(ppSVar5,pSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (PKKLIJLIKGF_o *)0x0) {
    (__this->fields)._OOKODJOMEKE_k__BackingField =
         (IBKIPBJJCPG->fields)._OOKODJOMEKE_k__BackingField;
    thunk_FUN_01c20e04();
    pSVar3 = System_String__Copy((IBKIPBJJCPG->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    (__this->fields).DEKCPPOJFEH = pSVar3;
    thunk_FUN_01c20e04(pPVar6,pSVar3);
    pSVar1 = (System_Collections_Generic_List_string__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar1,
               Method_System_Collections_Generic_List<string>__ctor__);
    (__this->fields).IIBDCLHFNCD = pSVar1;
    thunk_FUN_01c20e04(ppSVar7,pSVar1);
    pSVar1 = (IBKIPBJJCPG->fields).IIBDCLHFNCD;
    pSVar4 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)pSVar1,pSVar4,
                 Method_System_Collections_Generic_List<string>_ForEach__);
      pSVar2 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                                 );
      System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
                ((System_Collections_Generic_List_T__o *)pSVar2,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
      (__this->fields).NAPHDEGHDNP = pSVar2;
      thunk_FUN_01c20e04(ppSVar5,pSVar2);
      pSVar2 = (IBKIPBJJCPG->fields).NAPHDEGHDNP;
      pSVar4 = (System_Action_T__o *)
               thunk_FUN_01bda818(System_Action<KeyValuePair<string,_string>>_TypeInfo);
      System_Action<KeyValuePair<object,_object>>___ctor();
      if (pSVar2 != (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__ForEach
                  ((System_Collections_Generic_List_T__o *)pSVar2,pSVar4,
                   Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

