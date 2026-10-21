// MDFGJKBMECA$$ALKHMIFLGHH @ RVA 0x3367A34

void MDFGJKBMECA__ALKHMIFLGHH
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  IEFEBEDLHNN_o *FLGDFENHMKM;
  IEFEBEDLHNN_o *JEKJCJEOEBG;
  IEFEBEDLHNN_o *MGEDBHMONNP;
  BIDBHCDLLHH_o *__this;
  System_Collections_Generic_List_BIDBHCDLLHH__o *__this_00;
  HHLPEJCDCBH_o *__this_01;
  BIDBHCDLLHH_array *pBVar6;
  OLKKAIFGGAK_o *pOVar7;
  Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *pNVar8;
  
  if ((DAT_04567adc & 1) == 0) {
    FUN_01bab630(&BIDBHCDLLHH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BIDBHCDLLHH>_Add__);
    FUN_01bab630(&StringLiteral_9547);
    FUN_01bab630(&StringLiteral_9545);
    FUN_01bab630(&StringLiteral_9546);
    DAT_04567adc = 1;
  }
  if ((((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) &&
      (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar3,StringLiteral_9545,(MethodInfo *)0x0),
      pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) &&
     (pSVar5 = (System_String_o *)
               (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method),
     BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0)) {
    FLGDFENHMKM = GBJGJEGPHKD__OCJAHBKIFNO(BCKBBGCOMJD,pSVar5,(MethodInfo *)0x0);
    if (FLGDFENHMKM == (IEFEBEDLHNN_o *)0x0) {
      return;
    }
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
       (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_9546,(MethodInfo *)0x0),
       pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
      pSVar5 = (System_String_o *)
               (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
      JEKJCJEOEBG = GBJGJEGPHKD__OCJAHBKIFNO(BCKBBGCOMJD,pSVar5,(MethodInfo *)0x0);
      if (JEKJCJEOEBG == (IEFEBEDLHNN_o *)0x0) {
        return;
      }
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9547,(MethodInfo *)0x0),
         pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar5 = (System_String_o *)
                 (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
        MGEDBHMONNP = GBJGJEGPHKD__OCJAHBKIFNO(BCKBBGCOMJD,pSVar5,(MethodInfo *)0x0);
        if (MGEDBHMONNP == (IEFEBEDLHNN_o *)0x0) {
          return;
        }
        pSVar5 = (System_String_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        __this = (BIDBHCDLLHH_o *)thunk_FUN_01bda818(BIDBHCDLLHH_TypeInfo);
        BIDBHCDLLHH___ctor(__this,FLGDFENHMKM,JEKJCJEOEBG,MGEDBHMONNP,pSVar5,(MethodInfo *)0x0);
        __this_00 = GBJGJEGPHKD__MNOHLIHHCOI(BCKBBGCOMJD,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<BIDBHCDLLHH>_Add__;
        if (__this_00 != (System_Collections_Generic_List_BIDBHCDLLHH__o *)0x0) {
          pBVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pBVar6 != (BIDBHCDLLHH_array *)0x0) {
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pBVar6->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pBVar6->m_Items[(int)uVar1] = __this;
              thunk_FUN_01c20e04(pBVar6->m_Items + (int)uVar1,__this);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)__this,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pOVar7 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
            if (((pOVar7 != (OLKKAIFGGAK_o *)0x0) &&
                (pNVar8 = (pOVar7->fields).GDGLJMKPFOO,
                pNVar8 != (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *)0x0)) &&
               (__this_01 = (pNVar8->fields).KMFFEHGLKOC, __this_01 != (HHLPEJCDCBH_o *)0x0)) {
              HHLPEJCDCBH__ELFKPOFCCHF
                        (__this_01,FLGDFENHMKM,JEKJCJEOEBG,MGEDBHMONNP,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

