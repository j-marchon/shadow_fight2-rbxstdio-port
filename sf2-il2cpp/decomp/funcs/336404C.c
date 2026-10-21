// CJFBGEEIPBA$$MDGNOGCEMDN @ RVA 0x336404C

void CJFBGEEIPBA__MDGNOGCEMDN(CJFBGEEIPBA_o *__this,int64_t OILECKFDMDB,MethodInfo *method)

{
  int iVar1;
  bool IOLOMIIIOPM;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar2;
  Il2CppObject *pIVar3;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *method_00;
  System_Action_long__o *pSVar4;
  int index;
  OJEHKJHEBID_o *pOVar5;
  
  if ((DAT_04567ac7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_RemoveAt__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04567ac7 = 1;
  }
  pOVar5 = (__this->fields).FBILHKCKHEJ;
  if (pOVar5 != (OJEHKJHEBID_o *)0x0) {
    pGVar2 = (pOVar5->fields).MJIHCLLODMF;
    if (pGVar2 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)
    goto LAB_03464190;
    iVar1 = (pGVar2->fields).count;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,index,
                            Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                           );
        if (pIVar3 == (Il2CppObject *)0x0) break;
        if (pIVar3[1].monitor == (void *)OILECKFDMDB) {
          pGVar2 = (pOVar5->fields).MJIHCLLODMF;
          if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
            Google_Protobuf_Collections_RepeatedField<object>__RemoveAt
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,index,
                       Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_RemoveAt__);
            goto LAB_03464120;
          }
          break;
        }
        if (iVar1 + -1 == index) goto LAB_03464120;
        pGVar2 = (pOVar5->fields).MJIHCLLODMF;
        index = index + 1;
      } while (pGVar2 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
      goto LAB_03464190;
    }
LAB_03464120:
    pSVar4 = (__this->fields).MLBNBCLLKEL;
    if (pSVar4 == (System_Action_long__o *)0x0) goto LAB_03464190;
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,OILECKFDMDB,
               (pSVar4->fields).super.super.method);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  IOLOMIIIOPM = CJFBGEEIPBA__EDBDHGCEMEA(__this,method_00);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__LIAFPDDOGIH(__this_00,IOLOMIIIOPM,true,(MethodInfo *)0x0);
    return;
  }
LAB_03464190:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

