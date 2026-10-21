// JMDPBFOCHHP.ENBCJNLAHAC$$.ctor @ RVA 0x2FFB134

void JMDPBFOCHHP_ENBCJNLAHAC___ctor(JMDPBFOCHHP_ENBCJNLAHAC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_22465);
    DAT_04565ad0 = 1;
    method = extraout_x1;
  }
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo,method);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).MJPMEGEPHCK.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).ICECFDIHPHN = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).DPNFGBFFNAJ = StringLiteral_22465;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_TypeInfo)
  ;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>__ctor__);
  ppSVar1 = &(__this->fields).LIJCIBIOOOH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).FPMPKOCHBEB = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).APCNIPADHAO = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

