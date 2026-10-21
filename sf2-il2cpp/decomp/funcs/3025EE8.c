// PKKLIJLIKGF$$.ctor @ RVA 0x3025EE8

void PKKLIJLIKGF___ctor(PKKLIJLIKGF_o *__this,System_String_o *LMPMHKIABOM,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  System_Collections_Generic_List_KeyValuePair_string__string___o *__this_01;
  System_Collections_Generic_List_KeyValuePair_string__string___o **ppSVar2;
  PKKLIJLIKGF_Fields *pPVar3;
  
  if ((DAT_04565c90 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565c90 = 1;
  }
  pPVar3 = &__this->fields;
  pPVar3->DEKCPPOJFEH = StringLiteral_1;
  thunk_FUN_01c20e04(pPVar3);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).IIBDCLHFNCD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                                );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_01,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
  ppSVar2 = &(__this->fields).NAPHDEGHDNP;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pPVar3->DEKCPPOJFEH = LMPMHKIABOM;
  thunk_FUN_01c20e04(pPVar3,LMPMHKIABOM);
  return;
}

