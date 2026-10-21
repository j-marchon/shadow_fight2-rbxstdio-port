// FPPKHNNABAD$$OPECGOMJLLP @ RVA 0x321F688

void FPPKHNNABAD__OPECGOMJLLP
               (FPPKHNNABAD_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  IBNHAGICAJF_o **ppIVar1;
  byte bVar2;
  uint uVar3;
  System_Action_c *pSVar4;
  IBNHAGICAJF_c *pIVar5;
  int32_t iVar6;
  int iVar7;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar8;
  long *plVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Action_o *pSVar10;
  IBNHAGICAJF_o *pIVar11;
  System_Delegate_o *pSVar12;
  long lVar13;
  System_Collections_Generic_List_IBNHAGICAJF__o *pSVar14;
  ACHLOMELAJE_o *__this_01;
  MEMHEPBAJJA_o *pMVar15;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  IBNHAGICAJF_array *pIVar16;
  MEMHEPBAJJA_o **ppMVar17;
  LCKCDEKNLOA_o *pLVar18;
  System_Action_o **ppSVar19;
  int DPJIDNBJIBG;
  System_Action_MEMHEPBAJJA__o **ppSVar20;
  System_Action_MEMHEPBAJJA__o *pSVar21;
  System_Action_MEMHEPBAJJA__c *pSVar22;
  
  if ((DAT_04566f28 & 1) == 0) {
    FUN_01bab630(&System_Action<MEMHEPBAJJA>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FPPKHNNABAD_EKJDIBEOCDF__);
    FUN_01bab630(&Method_FPPKHNNABAD_NBHELNKAKNN__);
    FUN_01bab630(&IBNHAGICAJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IBNHAGICAJF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IBNHAGICAJF>_TrimExcess__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8819);
    FUN_01bab630(&StringLiteral_10280);
    DAT_04566f28 = 1;
  }
  if (NPLGCIFGFOK == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  __this_00 = (System_Xml_XmlAttributeCollection_o *)
              (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                        (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_10280,(MethodInfo *)0x0);
    pSVar8 = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,StringLiteral_8819,(MethodInfo *)0x0);
    iVar6 = FPPKHNNABAD__KBMJOICLEHN(pSVar8,method_00);
    (__this->fields).FOLGBCADEPP = iVar6;
    plVar9 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
    if (plVar9 != (long *)0x0) {
      DPJIDNBJIBG = 0;
      ppIVar1 = &(__this->fields).PNLEGFKJAAC;
      do {
        iVar7 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        if (iVar7 <= DPJIDNBJIBG) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_01 != (ACHLOMELAJE_o *)0x0) {
            pMVar15 = ACHLOMELAJE__ECALNOBINKI
                                (__this_01,(__this->fields)._COIPKAKHDFP_k__BackingField,
                                 (MethodInfo *)0x0);
            ppMVar17 = &(__this->fields)._FIEEJDGCLKH_k__BackingField;
            *ppMVar17 = pMVar15;
            thunk_FUN_01c20e04(ppMVar17,pMVar15);
            pLVar18 = (__this->fields).LBCPFBBIBCL;
            if (pLVar18 != (LCKCDEKNLOA_o *)0x0) {
              ppSVar19 = &(pLVar18->fields).BHHLJDLBINB;
              pSVar10 = *ppSVar19;
              pSVar12 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              pSVar10 = (System_Action_o *)
                        System_Delegate__Combine
                                  ((System_Delegate_o *)pSVar10,pSVar12,(MethodInfo *)0x0);
              pSVar4 = System_Action_TypeInfo;
              if (pSVar10 == (System_Action_o *)0x0) {
                *ppSVar19 = (System_Action_o *)0x0;
              }
              else if ((pSVar10->klass != System_Action_TypeInfo) ||
                      (*ppSVar19 = pSVar10, pSVar10->klass != pSVar4)) goto LAB_0331fabc;
              thunk_FUN_01c20e04(ppSVar19,pSVar10);
              pLVar18 = (__this->fields).LBCPFBBIBCL;
              if (pLVar18 != (LCKCDEKNLOA_o *)0x0) {
                LCKCDEKNLOA__LEOHNCOCKCI(pLVar18,(MethodInfo *)0x0);
                pSVar14 = (__this->fields).HABPKHKCKLH;
                if (pSVar14 != (System_Collections_Generic_List_IBNHAGICAJF__o *)0x0) {
                  System_Collections_Generic_List<object>__TrimExcess
                            ((System_Collections_Generic_List_object__o *)pSVar14,
                             Method_System_Collections_Generic_List<IBNHAGICAJF>_TrimExcess__);
                  return;
                }
              }
            }
          }
          break;
        }
        plVar9 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (NPLGCIFGFOK,
                                    (NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
        if (plVar9 == (long *)0x0) break;
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar9 + 0x1c8))
                                (plVar9,DPJIDNBJIBG,*(undefined8 *)(*plVar9 + 0x1d0));
        if (DPJIDNBJIBG == 0) {
          pSVar10 = (System_Action_o *)
                    PFLBGCPNEIM__EOHMFJFFFIN
                              (5,(__this->fields)._COIPKAKHDFP_k__BackingField,__this,AHDGNOJPPIB,
                               (MethodInfo *)0x0);
          pIVar5 = IBNHAGICAJF_TypeInfo;
          if (pSVar10 == (System_Action_o *)0x0) {
            *ppIVar1 = (IBNHAGICAJF_o *)0x0;
          }
          else {
            bVar2 = (IBNHAGICAJF_TypeInfo->_2).naturalAligment;
            if (((pSVar10->klass->_2).naturalAligment < bVar2) ||
               ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)IBNHAGICAJF_TypeInfo)) {
LAB_0331fabc:
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar10);
            }
            *ppIVar1 = (IBNHAGICAJF_o *)pSVar10;
            if (((pSVar10->klass->_2).naturalAligment < bVar2) ||
               ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pIVar5))
            goto LAB_0331fabc;
          }
          thunk_FUN_01c20e04(ppIVar1,pSVar10);
          pIVar11 = (__this->fields).PNLEGFKJAAC;
          if (pIVar11 == (IBNHAGICAJF_o *)0x0) break;
          (pIVar11->fields).super.JPCLFPPBNNN = (__this->fields)._GPEFIOMJHNN_k__BackingField;
          thunk_FUN_01c20e04();
          pIVar11 = *ppIVar1;
          if (pIVar11 == (IBNHAGICAJF_o *)0x0) break;
          ppSVar20 = &(pIVar11->fields).super.EKJDIBEOCDF;
          pSVar21 = *ppSVar20;
          (pIVar11->fields).super.HLFBMBHOPMI = 0;
          (pIVar11->fields).super.EAJHGODFKID = (__this->fields).FOLGBCADEPP;
          pSVar12 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<MEMHEPBAJJA>_TypeInfo);
          System_Action<object>___ctor();
          pSVar12 = System_Delegate__Combine((System_Delegate_o *)pSVar21,pSVar12,(MethodInfo *)0x0)
          ;
          pSVar22 = System_Action<MEMHEPBAJJA>_TypeInfo;
          if (pSVar12 == (System_Delegate_o *)0x0) {
            lVar13 = 0;
            *ppSVar20 = (System_Action_MEMHEPBAJJA__o *)0x0;
          }
          else {
            pSVar21 = (System_Action_MEMHEPBAJJA__o *)
                      thunk_FUN_01bda71c(pSVar12,System_Action<MEMHEPBAJJA>_TypeInfo);
            if (pSVar21 == (System_Action_MEMHEPBAJJA__o *)0x0) {
LAB_0331fb30:
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar12,pSVar22);
            }
            *ppSVar20 = pSVar21;
            pSVar22 = System_Action<MEMHEPBAJJA>_TypeInfo;
            lVar13 = thunk_FUN_01bda71c(pSVar12,System_Action<MEMHEPBAJJA>_TypeInfo);
            if (lVar13 == 0) goto LAB_0331fb30;
          }
          thunk_FUN_01c20e04(ppSVar20,lVar13);
          lVar13 = Method_System_Collections_Generic_List<IBNHAGICAJF>_Add__;
          pSVar14 = (__this->fields).HABPKHKCKLH;
          if (pSVar14 == (System_Collections_Generic_List_IBNHAGICAJF__o *)0x0) break;
          pIVar11 = (__this->fields).PNLEGFKJAAC;
          pIVar16 = (pSVar14->fields)._items;
          (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
          if (pIVar16 == (IBNHAGICAJF_array *)0x0) break;
          uVar3 = (pSVar14->fields)._size;
          if (uVar3 < (uint)pIVar16->max_length) {
            (pSVar14->fields)._size = uVar3 + 1;
            pIVar16->m_Items[(int)uVar3] = pIVar11;
            thunk_FUN_01c20e04(pIVar16->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pIVar11,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) break;
        pSVar8 = (System_String_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        FPPKHNNABAD__IBDGPMDNGNG
                  (__this,pSVar8,AHDGNOJPPIB,(__this->fields).LBCPFBBIBCL,DPJIDNBJIBG,in_x5);
        DPJIDNBJIBG = DPJIDNBJIBG + 1;
        plVar9 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (NPLGCIFGFOK,
                                    (NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
      } while (plVar9 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

