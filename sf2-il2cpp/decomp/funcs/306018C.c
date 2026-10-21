// ACHLOMELAJE$$CNEIEMLJKNB @ RVA 0x306018C

PAMEPBLOLPB_o *
ACHLOMELAJE__CNEIEMLJKNB(ACHLOMELAJE_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  uint uVar1;
  System_String_o *AFKICLAFDKC;
  System_Xml_XmlNode_o *pSVar2;
  long lVar3;
  System_Xml_XmlElement_o *pSVar4;
  PAMEPBLOLPB_o *__this_00;
  System_String_o *pSVar5;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_01;
  PAMEPBLOLPB_array *pPVar6;
  
  if ((DAT_04565ed4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_Add__);
    FUN_01bab630(&PAMEPBLOLPB_TypeInfo);
    FUN_01bab630(&StringLiteral_6379);
    FUN_01bab630(&StringLiteral_6310);
    DAT_04565ed4 = 1;
  }
  AFKICLAFDKC = StringLiteral_6379;
  pSVar5 = StringLiteral_6310;
  pSVar2 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    lVar3 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                      (pSVar2,StringLiteral_6379,(pSVar2->klass->vtable)._51_get_Item.method);
    pSVar2 = (__this->fields).super.HJKLIDCAEOE;
    if (lVar3 == 0) {
      pSVar4 = EIABCPKDEBD__BHPIHHJHELJ(pSVar2,AFKICLAFDKC,(MethodInfo *)0x0);
    }
    else {
      if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0316032c;
      pSVar4 = (System_Xml_XmlElement_o *)
               (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                         (pSVar2,AFKICLAFDKC,(pSVar2->klass->vtable)._51_get_Item.method);
    }
    pSVar4 = EIABCPKDEBD__BHPIHHJHELJ((System_Xml_XmlNode_o *)pSVar4,pSVar5,(MethodInfo *)0x0);
    __this_00 = (PAMEPBLOLPB_o *)thunk_FUN_01bda818(PAMEPBLOLPB_TypeInfo);
    PAMEPBLOLPB___ctor(__this_00,(System_Xml_XmlNode_o *)pSVar4,(MethodInfo *)0x0);
    if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
      pSVar5 = (System_String_o *)
               (*(DBIAAJNKHLH->klass->vtable)._3_ToString.methodPtr)
                         (DBIAAJNKHLH,(DBIAAJNKHLH->klass->vtable)._3_ToString.method);
      if (__this_00 != (PAMEPBLOLPB_o *)0x0) {
        PAMEPBLOLPB__EFGDFGAPFDN(__this_00,pSVar5,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<PAMEPBLOLPB>_Add__;
        __this_01 = (__this->fields).HDDNEKLMLMF;
        if (__this_01 != (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0) {
          pPVar6 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pPVar6 != (PAMEPBLOLPB_array *)0x0) {
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pPVar6->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pPVar6->m_Items[(int)uVar1] = __this_00;
              thunk_FUN_01c20e04(pPVar6->m_Items + (int)uVar1,__this_00);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)__this_00,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            return __this_00;
          }
        }
      }
    }
  }
LAB_0316032c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

