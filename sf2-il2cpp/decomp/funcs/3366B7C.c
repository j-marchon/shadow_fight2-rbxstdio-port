// CJFBGEEIPBA$$OOPDPBAIFCJ @ RVA 0x3366B7C

NLFLMJPNOLF_o *
CJFBGEEIPBA__OOPDPBAIFCJ(CJFBGEEIPBA_o *__this,int32_t MOLGLNLBAIB,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  NLFLMJPNOLF_o *pNVar1;
  int index;
  OJEHKJHEBID_o *pOVar2;
  
  if ((DAT_04567ac2 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04567ac2 = 1;
  }
  pOVar2 = (__this->fields).FBILHKCKHEJ;
  if (pOVar2 == (OJEHKJHEBID_o *)0x0) {
    return (NLFLMJPNOLF_o *)0x0;
  }
  __this_00 = (pOVar2->fields).MJIHCLLODMF;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields).count <= index) {
        return (NLFLMJPNOLF_o *)0x0;
      }
      pNVar1 = (NLFLMJPNOLF_o *)
               Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                          Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
      if (pNVar1 == (NLFLMJPNOLF_o *)0x0) break;
      if ((pNVar1->fields).IILCHFKCEEH == MOLGLNLBAIB) {
        return pNVar1;
      }
      __this_00 = (pOVar2->fields).MJIHCLLODMF;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

