// CJFBGEEIPBA$$PCKHIBMJKJG @ RVA 0x3364958

NLFLMJPNOLF_o * CJFBGEEIPBA__PCKHIBMJKJG(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  EEGDOGKBLNG_o *pEVar4;
  int64_t iVar5;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar6;
  Il2CppObject *pIVar7;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  int64_t iVar8;
  NLFLMJPNOLF_o *pNVar9;
  MethodInfo *extraout_x1;
  int index;
  int index_00;
  OJEHKJHEBID_o *pOVar10;
  
  if ((DAT_04567aa7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04567aa7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar4 != (EEGDOGKBLNG_o *)0x0) {
    bVar3 = EEGDOGKBLNG__CLJIMCDAEKO(pEVar4,(MethodInfo *)0x0);
    if (!bVar3) {
      return (NLFLMJPNOLF_o *)0x0;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar4 != (EEGDOGKBLNG_o *)0x0) {
      iVar5 = EEGDOGKBLNG__APCMGOCHMGC(pEVar4,(MethodInfo *)0x0);
      pOVar10 = (__this->fields).FBILHKCKHEJ;
      if (pOVar10 == (OJEHKJHEBID_o *)0x0) {
        return (NLFLMJPNOLF_o *)0x0;
      }
      pGVar6 = (pOVar10->fields).MJIHCLLODMF;
      if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
        iVar1 = (pGVar6->fields).count;
        if (iVar1 < 1) {
          return (NLFLMJPNOLF_o *)0x0;
        }
        index = 0;
        do {
          pIVar7 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                              Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                             );
          if ((pIVar7 == (Il2CppObject *)0x0) ||
             (__this_00 = pIVar7[2].monitor,
             __this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
          iVar2 = (__this_00->fields).count;
          if (0 < iVar2) {
            index_00 = 0;
            while( true ) {
              iVar8 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                (__this_00,index_00,
                                 Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
              if (iVar5 == iVar8) {
                pGVar6 = (pOVar10->fields).MJIHCLLODMF;
                if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
                  pNVar9 = (NLFLMJPNOLF_o *)
                           Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                     ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index
                                      ,
                                      Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                                     );
                  return pNVar9;
                }
                goto LAB_03464afc;
              }
              index_00 = index_00 + 1;
              if (iVar2 == index_00) break;
              __this_00 = pIVar7[2].monitor;
              if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)
              goto LAB_03464afc;
            }
          }
          index = index + 1;
          if (index == iVar1) {
            return (NLFLMJPNOLF_o *)0x0;
          }
          pGVar6 = (pOVar10->fields).MJIHCLLODMF;
        } while (pGVar6 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
      }
    }
  }
LAB_03464afc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

