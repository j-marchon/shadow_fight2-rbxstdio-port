// AJNNHGGLGIF$$GAJGEHFDCJE @ RVA 0x35AD668

void AJNNHGGLGIF__GAJGEHFDCJE
               (AJNNHGGLGIF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t item;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  ulong uVar6;
  System_Collections_Generic_List_int__o *__this_01;
  System_Int32_array *pSVar7;
  ulong uVar8;
  
  if ((DAT_04568e64 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&StringLiteral_11431);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568e64 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_11431,(MethodInfo *)0x0);
      bVar3 = EIABCPKDEBD__OBECCOPBADO(LBJNDMNEJJB,(MethodInfo *)0x0);
      if (!bVar3) {
        (__this->fields).AIPKOAMHBBP = false;
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        if ((pSVar4 == (System_String_o *)0x0) ||
           (pSVar5 = System_String__Split(pSVar4,0x7c,0,(MethodInfo *)0x0),
           pSVar5 == (System_String_array *)0x0)) goto LAB_036ad80c;
        if (0 < (int)pSVar5->max_length) {
          uVar8 = 0;
          uVar6 = pSVar5->max_length & 0xffffffff;
          do {
            if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar4 = pSVar5->m_Items[uVar8];
            if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            item = System_Convert__ToInt32(pSVar4,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<int>_Add__;
            __this_01 = (__this->fields).BPPCPHCDICD;
            if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036ad80c;
            pSVar7 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pSVar7 == (System_Int32_array *)0x0) goto LAB_036ad80c;
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pSVar7->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pSVar7->m_Items[(int)uVar1] = item;
            }
            else {
              System_Collections_Generic_List<int>__AddWithResize
                        (__this_01,item,
                         *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            uVar1 = (uint)pSVar5->max_length;
            uVar6 = (ulong)uVar1;
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)(int)uVar1);
        }
      }
      return;
    }
  }
LAB_036ad80c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

