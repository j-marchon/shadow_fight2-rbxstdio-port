// NFNBHPOJFNJ$$KLNMLOOCAAO @ RVA 0x3359D18

void NFNBHPOJFNJ__KLNMLOOCAAO(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  NFNBHPOJFNJ_o *__this_00;
  MethodInfo *method_01;
  System_String_o *DNOPBOLEJBC;
  System_Action_bool__string__object__string__o *GFNABKGEGJA;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  MethodInfo *in_x7;
  System_Text_StringBuilder_o *KOANCCDDBDA;
  
  if ((DAT_04567a71 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object,_string>_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_EKACCJMPGIH__);
    FUN_01bab630(&StringLiteral_20665);
    DAT_04567a71 = 1;
    method = extraout_x1;
  }
  if (((__this->fields).GBHILJJMGGK | 2U) == 2) {
    return;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  method_00 = (MethodInfo *)Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
  KOANCCDDBDA = (__this->fields).DGPKPHAHOJP;
  (__this->fields).BNFLGDFGHBL = (int64_t)method_00;
  __this_00 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA(method_00);
  NFNBHPOJFNJ__GDCHAJOJGBH(__this_00,KOANCCDDBDA,(System_String_o *)__this_00,in_x3);
  DNOPBOLEJBC = NFNBHPOJFNJ__OMENJAFAEAA(method_01);
  GFNABKGEGJA = (System_Action_bool__string__object__string__o *)
                thunk_FUN_01bda818(System_Action<bool,_string,_object,_string>_TypeInfo);
  System_Action<bool,_object,_object,_object>___ctor();
  NFNBHPOJFNJ__KLNMLOOCAAO
            (__this,DNOPBOLEJBC,&(__this->fields).LLMGMJNGKGL,GFNABKGEGJA,2000000,true,
             StringLiteral_20665,in_x7);
  return;
}

