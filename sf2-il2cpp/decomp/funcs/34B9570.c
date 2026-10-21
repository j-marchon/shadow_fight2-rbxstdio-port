// GKLPDMLELJF$$Equals @ RVA 0x34B9570

bool GKLPDMLELJF__Equals(GKLPDMLELJF_o *__this,GKLPDMLELJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045685ad & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685ad = 1;
  }
  if (IBKIPBJJCPG != (GKLPDMLELJF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).FFOIEHLJLDA,(IBKIPBJJCPG->fields).FFOIEHLJLDA,
                             (MethodInfo *)0x0), !bVar1)) &&
        (bVar1 = System_String__op_Inequality
                           ((__this->fields).LLBEKLPKDHK,(IBKIPBJJCPG->fields).LLBEKLPKDHK,
                            (MethodInfo *)0x0), !bVar1)) &&
       (((__this->fields).PEBHLKLGDBM == (IBKIPBJJCPG->fields).PEBHLKLGDBM &&
        ((__this->fields).PFJPLCAIGJH == (IBKIPBJJCPG->fields).PFJPLCAIGJH)))) {
      if ((__this->fields).ADEIKPGDIPM.fields.value !=
          (IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.value) {
        return false;
      }
      if (((__this->fields).ADEIKPGDIPM.fields.hasValue == false) ==
          ((IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.hasValue != false)) {
        return false;
      }
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

