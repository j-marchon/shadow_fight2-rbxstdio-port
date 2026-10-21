// MIJPCDHFBPA$$.ctor @ RVA 0x302411C

/* WARNING: Removing unreachable block (ram,0x031244b8) */

void MIJPCDHFBPA___ctor(MIJPCDHFBPA_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar5;
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar6;
  System_Xml_XmlNode_o *pSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  ANMHMMJOHJG_o *__this_00;
  long *plVar10;
  undefined8 *puVar11;
  System_Collections_IEnumerator_c *pSVar12;
  ANMHMMJOHJG_array *pAVar13;
  long lVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  MIJPCDHFBPA_Fields *pMVar18;
  
  if ((DAT_04565c7d & 1) == 0) {
    FUN_01bab630(&ANMHMMJOHJG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ANMHMMJOHJG>_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12805);
    FUN_01bab630(&StringLiteral_17342);
    DAT_04565c7d = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar5 = (System_Collections_Generic_List_ANMHMMJOHJG__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ANMHMMJOHJG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<ANMHMMJOHJG>__ctor__);
  pMVar18 = &__this->fields;
  pMVar18->_HFKPAOAKEHD_k__BackingField = pSVar5;
  thunk_FUN_01c20e04(pMVar18,pSVar5);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar6 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_17342,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar6 == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  pSVar7 = (System_Xml_XmlNode_o *)
           (*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                     (pSVar6,StringLiteral_12805,(pSVar6->klass->vtable)._51_get_Item.method);
  if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = System_Xml_XmlNode__GetEnumerator(pSVar7,(MethodInfo *)0x0);
  if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar12 = pSVar8->klass;
    uVar2._0_1_ = (pSVar12->_2).rank;
    uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar12->vtable + *piVar16;
          goto LAB_031242f0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_031242f0:
    uVar15 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if ((uVar15 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 == 0) goto LAB_03124458;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    pSVar12 = pSVar8->klass;
    uVar3._0_1_ = (pSVar12->_2).rank;
    uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar3;
    if (uVar15 != 0) {
      piVar16 = &((pSVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar12->vtable + (*piVar16 + 1);
          goto LAB_03124350;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_03124350:
    pSVar7 = (System_Xml_XmlNode_o *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
         ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar7);
      }
    }
    pSVar5 = pMVar18->_HFKPAOAKEHD_k__BackingField;
    __this_00 = (ANMHMMJOHJG_o *)thunk_FUN_01bda818(ANMHMMJOHJG_TypeInfo);
    ANMHMMJOHJG___ctor(__this_00,pSVar7,(MethodInfo *)0x0);
    lVar14 = Method_System_Collections_Generic_List<ANMHMMJOHJG>_Add__;
    if (pSVar5 == (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pAVar13 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pAVar13 == (ANMHMMJOHJG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar4 = (pSVar5->fields)._size;
    if (uVar4 < (uint)pAVar13->max_length) {
      (pSVar5->fields)._size = uVar4 + 1;
      pAVar13->m_Items[(int)uVar4] = __this_00;
      thunk_FUN_01c20e04(pAVar13->m_Items + (int)uVar4,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03124474;
    }
  }
LAB_03124458:
  puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_03124474:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}

