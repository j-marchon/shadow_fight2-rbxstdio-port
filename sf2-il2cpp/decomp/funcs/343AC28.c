// HIKAFDOGMMH$$.ctor @ RVA 0x343AC28

void HIKAFDOGMMH___ctor(HIKAFDOGMMH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_string__string___o *pSVar1;
  System_String_o *EIJDDKJONFO;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  HIKAFDOGMMH_Fields *pHVar2;
  
  if ((DAT_045681cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_17341);
    DAT_045681cd = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                              ,method);
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar1,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
  pHVar2 = &__this->fields;
  pHVar2->OMPBOMHFJDN = pSVar1;
  thunk_FUN_01c20e04(pHVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = pHVar2->OMPBOMHFJDN;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  HIKAFDOGMMH__FENMKGOFPDM
            ((HIKAFDOGMMH_o *)EIJDDKJONFO,pSVar1,EIJDDKJONFO,StringLiteral_17341,in_x4);
  return;
}

