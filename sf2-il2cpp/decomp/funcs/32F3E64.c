// NCNJEIBHGBH$$HNIHOIAMDPC @ RVA 0x32F3E64

void NCNJEIBHGBH__HNIHOIAMDPC
               (NCNJEIBHGBH_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,LAMJOHEKJNJ_o *IDMHBKIMEGE,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  int iVar3;
  System_Xml_XmlNode_o *pSVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  NCNJEIBHGBH_o *__this_01;
  FKNCNNOOOIO_o *item;
  System_Xml_XmlNode_o *pSVar6;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar8;
  FKNCNNOOOIO_array *pFVar9;
  
  pMVar7 = (MethodInfo *)IDMHBKIMEGE;
  if ((DAT_04567681 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Clear__);
    FUN_01bab630(&StringLiteral_13814);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567681 = 1;
  }
  NCNJEIBHGBH__FLCMDHADNCN(__this,JHMENEKPIBO,pMVar7);
  pSVar8 = (__this->fields).JODEDMLAIEG;
  if (pSVar8 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
       (plVar5 = (long *)(*(pSVar4->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable)._13_get_ChildNodes.method),
       plVar5 != (long *)0x0)) {
      iVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      while( true ) {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
        pSVar4 = (__this->fields).DMLGJFCNNJF;
        if ((((pSVar4 == (System_Xml_XmlNode_o *)0x0) ||
             (plVar5 = (long *)(*(pSVar4->klass->vtable)._13_get_ChildNodes.methodPtr)
                                         (pSVar4,(pSVar4->klass->vtable)._13_get_ChildNodes.method),
             plVar5 == (long *)0x0)) ||
            (pSVar4 = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar5 + 0x1c8))(plVar5,iVar3,*(undefined8 *)(*plVar5 + 0x1d0)),
            pSVar4 == (System_Xml_XmlNode_o *)0x0)) ||
           (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                        (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                  (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method),
           __this_00 == (System_Xml_XmlAttributeCollection_o *)0x0)) break;
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_13814,(MethodInfo *)0x0);
        KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        if (IDMHBKIMEGE == (LAMJOHEKJNJ_o *)0x0) break;
        pMVar7 = (MethodInfo *)0x0;
        __this_01 = (NCNJEIBHGBH_o *)
                    LAMJOHEKJNJ__FENHANFAIND(IDMHBKIMEGE,KGLJICLJHEL,(MethodInfo *)0x0);
        if (__this_01 == (NCNJEIBHGBH_o *)0x0) {
          pSVar6 = (__this->fields).DMLGJFCNNJF;
          if (pSVar6 == (System_Xml_XmlNode_o *)0x0) break;
          (*(pSVar6->klass->vtable)._25_RemoveChild.methodPtr)
                    (pSVar6,pSVar4,(pSVar6->klass->vtable)._25_RemoveChild.method);
        }
        else {
          item = NCNJEIBHGBH__LAAGFLEJBGP(__this_01,pSVar4,pMVar7);
          lVar2 = Method_System_Collections_Generic_List<FKNCNNOOOIO>_Add__;
          pSVar8 = (__this->fields).JODEDMLAIEG;
          if (pSVar8 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) break;
          pFVar9 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pFVar9 == (FKNCNNOOOIO_array *)0x0) break;
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pFVar9->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pFVar9->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

