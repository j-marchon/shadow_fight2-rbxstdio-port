// MDFGJKBMECA$$LJNPDCKKONL @ RVA 0x33673B4

void MDFGJKBMECA__LJNPDCKKONL
               (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *KFAAOJOLHMC,
               System_Xml_XmlNode_o *AHDGNOJPPIB,bool IEHAOLHMHMG,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t value;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  MDFGJKBMECA_LGNCFOEJBDP_o *pMVar5;
  System_String_o *pSVar6;
  System_String_o *name;
  MGNDHCBAPEN_string__float__o *__this;
  MethodInfo *pMVar7;
  MGNDHCBAPEN_string__float__array *pMVar8;
  int GCMHMONNHII;
  float JGGJNLLANAE;
  
  if ((DAT_04567adb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_set_Capacity__)
    ;
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_float>_TypeInfo);
    FUN_01bab630(&StringLiteral_9551);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567adb = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9551,(MethodInfo *)0x0);
      value = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      if (0 < value) {
        if (KFAAOJOLHMC == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0)
        goto LAB_03467650;
        pMVar7 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_set_Capacity__;
        System_Collections_Generic_List<object>__set_Capacity
                  ((System_Collections_Generic_List_object__o *)KFAAOJOLHMC,value,
                   (MethodInfo_26E4930 *)
                   Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_set_Capacity__
                  );
        GCMHMONNHII = 0;
        do {
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo);
          }
          pMVar5 = MDFGJKBMECA_TypeInfo->static_fields->OLLGKNHHHFJ;
          if (pMVar5 == (MDFGJKBMECA_LGNCFOEJBDP_o *)0x0) goto LAB_03467650;
          GCMHMONNHII = GCMHMONNHII + 1;
          pSVar6 = MDFGJKBMECA_LGNCFOEJBDP__PPOILNKHDCK(pMVar5,GCMHMONNHII,pMVar7);
          if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03467650;
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,pSVar6,(MethodInfo *)0x0);
          pMVar7 = (MethodInfo *)0x0;
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
          JGGJNLLANAE = 0.0;
          if (IEHAOLHMHMG) {
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MDFGJKBMECA_TypeInfo);
            }
            pMVar5 = MDFGJKBMECA_TypeInfo->static_fields->OLLGKNHHHFJ;
            if ((pMVar5 == (MDFGJKBMECA_LGNCFOEJBDP_o *)0x0) ||
               (name = MDFGJKBMECA_LGNCFOEJBDP__INOFPDCPHNG(pMVar5,GCMHMONNHII,pMVar7),
               pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_03467650;
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,name,(MethodInfo *)0x0);
            JGGJNLLANAE = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
          }
          __this = (MGNDHCBAPEN_string__float__o *)
                   thunk_FUN_01bda818(MGNDHCBAPEN<string,_float>_TypeInfo);
          pMVar7 = Method_MGNDHCBAPEN<string,_float>__ctor__;
          MGNDHCBAPEN<object,_float>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this,(Il2CppObject *)pSVar6,JGGJNLLANAE,
                     (MethodInfo_27BB5C4 *)Method_MGNDHCBAPEN<string,_float>__ctor__);
          lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_Add__;
          pMVar8 = (KFAAOJOLHMC->fields)._items;
          (KFAAOJOLHMC->fields)._version = (KFAAOJOLHMC->fields)._version + 1;
          if (pMVar8 == (MGNDHCBAPEN_string__float__array *)0x0) goto LAB_03467650;
          uVar1 = (KFAAOJOLHMC->fields)._size;
          if (uVar1 < (uint)pMVar8->max_length) {
            (KFAAOJOLHMC->fields)._size = uVar1 + 1;
            pMVar8->m_Items[(int)uVar1] = __this;
            thunk_FUN_01c20e04(pMVar8->m_Items + (int)uVar1,__this);
          }
          else {
            pMVar7 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)KFAAOJOLHMC,
                       (Il2CppObject *)__this,(MethodInfo_26E4DAC *)pMVar7);
          }
        } while (value != GCMHMONNHII);
      }
      return;
    }
  }
LAB_03467650:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

