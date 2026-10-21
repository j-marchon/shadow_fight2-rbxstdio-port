// FIKENOMMMBH.OKMPNICILPN$$LMJMLGKAFND @ RVA 0x34E45E0

int32_t FIKENOMMMBH_OKMPNICILPN__LMJMLGKAFND(FIKENOMMMBH_OKMPNICILPN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_string__bool___o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456874f & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<KeyValuePair<string,_bool>>_get_Count__
                         );
    DAT_0456874f = 1;
  }
  pSVar1 = (__this->fields).INGEFFGPJPB;
  if (pSVar1 != (System_Collections_Generic_List_KeyValuePair_string__bool___o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

