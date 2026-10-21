// CJFBGEEIPBA$$IGGCPEFPJPD @ RVA 0x3364D68

void CJFBGEEIPBA__IGGCPEFPJPD(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *FKJAGADBHEK,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar1;
  Il2CppObject *pIVar2;
  OJEHKJHEBID_o *pOVar3;
  int index;
  
  if ((DAT_04567aac & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_set_Item__);
    FUN_01bab630(&StringLiteral_4407);
    DAT_04567aac = 1;
  }
  pOVar3 = (__this->fields).FBILHKCKHEJ;
  if (pOVar3 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  index = 0;
  while (pGVar1 = (pOVar3->fields).MJIHCLLODMF,
        pGVar1 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
    if ((pGVar1->fields).count <= index) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_4407,(MethodInfo *)0x0);
      return;
    }
    pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,index,
                        Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    if ((pIVar2 == (Il2CppObject *)0x0) || (FKJAGADBHEK == (NLFLMJPNOLF_o *)0x0)) break;
    if (pIVar2[1].monitor == (void *)(FKJAGADBHEK->fields).OHMDCKEDOGH) {
      pOVar3 = (__this->fields).FBILHKCKHEJ;
      if ((pOVar3 != (OJEHKJHEBID_o *)0x0) &&
         (pGVar1 = (pOVar3->fields).MJIHCLLODMF,
         pGVar1 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)) {
        Google_Protobuf_Collections_RepeatedField<object>__set_Item
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,index,
                   (Il2CppObject *)FKJAGADBHEK,
                   Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_set_Item__);
        return;
      }
      break;
    }
    pOVar3 = (__this->fields).FBILHKCKHEJ;
    index = index + 1;
    if (pOVar3 == (OJEHKJHEBID_o *)0x0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

