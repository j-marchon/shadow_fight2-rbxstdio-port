// GPKDMPJJEOO$$Equals @ RVA 0x319DA60

bool GPKDMPJJEOO__Equals(GPKDMPJJEOO_o *__this,GPKDMPJJEOO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_MapField_string__string__o *__this_00;
  
  if ((DAT_04566ac4 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_Equals__);
    DAT_04566ac4 = 1;
  }
  if (IBKIPBJJCPG != (GPKDMPJJEOO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields).PPDLPBMONBL;
      if (__this_00 == (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_MapField<object,_object>__Equals
                        ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_00,
                         (Google_Protobuf_Collections_MapField_TKey__TValue__o *)
                         (IBKIPBJJCPG->fields).PPDLPBMONBL,
                         Method_Google_Protobuf_Collections_MapField<string,_string>_Equals__);
      if (bVar1) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}

