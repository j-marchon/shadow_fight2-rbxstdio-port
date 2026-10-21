// CJFBGEEIPBA$$HOMIFFIACAC @ RVA 0x3365E74

bool CJFBGEEIPBA__HOMIFFIACAC(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  EEGDOGKBLNG_o *pEVar3;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  CJFBGEEIPBA_o *AOMBONOOJFP;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int index;
  OJEHKJHEBID_o *pOVar4;
  
  if ((DAT_04567ab8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04567ab8 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
    bVar2 = EEGDOGKBLNG__CLJIMCDAEKO(pEVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__APCMGOCHMGC(pEVar3,(MethodInfo *)0x0);
      pOVar4 = (__this->fields).FBILHKCKHEJ;
      if (pOVar4 == (OJEHKJHEBID_o *)0x0) {
        return false;
      }
      __this_00 = (pOVar4->fields).MJIHCLLODMF;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
        iVar1 = (__this_00->fields).count;
        if (iVar1 < 1) {
          return false;
        }
        index = 0;
        do {
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__;
          AOMBONOOJFP = (CJFBGEEIPBA_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index
                                   ,(MethodInfo_295F6AC *)
                                    Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                                  );
          bVar2 = CJFBGEEIPBA__JJCBOPEDCBA(AOMBONOOJFP,(NLFLMJPNOLF_o *)AOMBONOOJFP,method_00);
          if (bVar2) {
            return true;
          }
          if (iVar1 + -1 == index) {
            return false;
          }
          __this_00 = (pOVar4->fields).MJIHCLLODMF;
          index = index + 1;
        } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

