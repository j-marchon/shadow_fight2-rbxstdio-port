// PCEDNFLCPPF$$ONDIAIFDBAG @ RVA 0x33285D8

void PCEDNFLCPPF__ONDIAIFDBAG(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  SimpleJSON_JSONArray_o *pSVar1;
  SimpleJSON_JSONObject_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678ab & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    DAT_045678ab = 1;
    method = extraout_x1;
  }
  pSVar1 = PCEDNFLCPPF__DNLODALMDGM(__this,method);
  __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
  SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (pSVar1 != (SimpleJSON_JSONArray_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03428650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar1->klass->vtable)._21_Add.methodPtr)
              (pSVar1,__this_00,(pSVar1->klass->vtable)._21_Add.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

