// CJFBGEEIPBA$$ODGGLKIMFCE @ RVA 0x3364B00

void CJFBGEEIPBA__ODGGLKIMFCE(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  OJEHKJHEBID_o *pOVar3;
  System_Action_NLFLMJPNOLF__o *pSVar4;
  
  if ((DAT_04567aa8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04567aa8 = 1;
  }
  pOVar3 = (__this->fields).FBILHKCKHEJ;
  if (pOVar3 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  __this_00 = (pOVar3->fields).MJIHCLLODMF;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
    iVar1 = (__this_00->fields).count;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pSVar4 = (__this->fields).FJIFDGEPKBH;
      pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                          Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
      if (pSVar4 == (System_Action_NLFLMJPNOLF__o *)0x0) break;
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,pIVar2,(pSVar4->fields).super.super.method
                );
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (pOVar3->fields).MJIHCLLODMF;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

