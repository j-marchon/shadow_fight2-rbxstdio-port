// DEKKGJNMFEB$$HNIHOIAMDPC @ RVA 0x322DB40

/* WARNING: Removing unreachable block (ram,0x0332e278) */
/* WARNING: Removing unreachable block (ram,0x0332dfa8) */

void DEKKGJNMFEB__HNIHOIAMDPC(DEKKGJNMFEB_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *pSVar8;
  GGCMECLCOMJ_o *__this_00;
  GGLKHCAIGDI_o *__this_01;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Collections_Generic_List_GGCMECLCOMJ__o *pSVar9;
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar10;
  long lVar11;
  GGCMECLCOMJ_array *pGVar12;
  GGLKHCAIGDI_array *pGVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04566fbd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0332db7c to 0342dba7 has its CatchHandler @ 0332dc90 */
    FUN_01bab630(&GGCMECLCOMJ_TypeInfo);
    FUN_01bab630(&GGLKHCAIGDI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_Clear__);
                    /* try { // try from 0332dbd8 to 0342dbeb has its CatchHandler @ 0332dc98 */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 0332dbec to 0342dc73 has its CatchHandler @ 0332da78 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_18323);
    FUN_01bab630(&StringLiteral_11108);
    FUN_01bab630(&StringLiteral_8880);
    FUN_01bab630(&StringLiteral_6544);
    FUN_01bab630(&StringLiteral_15468);
    FUN_01bab630(&StringLiteral_3116);
    DAT_04566fbd = 1;
  }
  pSVar9 = (__this->fields).CGDCBPHBFDE;
  if (pSVar9 != (System_Collections_Generic_List_GGCMECLCOMJ__o *)0x0) {
    iVar3 = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    pSVar10 = (__this->fields).OKIANCELJJF;
    if (pSVar10 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* try { // try from 0332dc74 to 0342dc7b has its CatchHandler @ 0332dc9c */
      iVar3 = (pSVar10->fields)._size;
                    /* try { // try from 0332dc7c to 0342dc7f has its CatchHandler @ 0332da78 */
                    /* try { // try from 0332dc80 to 0342dc83 has its CatchHandler @ 0332dc8c */
                    /* try { // try from 0332dc84 to 0342dcab has its CatchHandler @ 0332da78 */
      (pSVar10->fields)._size = 0;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332dc80 with catch @ 0332dc8c
                        */
      if (0 < iVar3) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332db7c with catch @ 0332dc90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332db20 with catch @ 0332dc94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332dbd8 with catch @ 0332dc98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332dc74 with catch @ 0332dc9c
                        */
        System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
                    /* try { // try from 0332dcac to 0342dcaf has its CatchHandler @ 0332dcc0 */
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0332dcac with catch @ 0332dcc0 */
                    /* try { // try from 0332dcc8 to 0342dd2f has its CatchHandler @ 0332dd44 */
      pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC
                         (EIJDDKJONFO,StringLiteral_18323,1,true,true,false,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlDocument_o *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_15468,(MethodInfo *)0x0);
        return;
      }
      plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar4,StringLiteral_6544,
                                  (pSVar4->klass->vtable)._51_get_Item.method);
                    /* try { // try from 0332dd30 to 0342dd3b has its CatchHandler @ 0332da78 */
      if (((plVar5 != (long *)0x0) &&
          (plVar6 = (long *)(**(code **)(*plVar5 + 0x468))
                                      (plVar5,StringLiteral_3116,*(undefined8 *)(*plVar5 + 0x470)),
          plVar6 != (long *)0x0)) &&
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210)),
         plVar6 != (long *)0x0)) {
                    /* try { // try from 0332dd3c to 0342dd43 has its CatchHandler @ 0332dd44 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0332dcc8 with catch @ 0332dd44
                       catch(type#2 @ 00000000) { ... } // from try @ 0332dd3c with catch @ 0332dd44
                        */
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar11 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0332ddc0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0332ddc0:
          uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar14 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
            if (plVar6 == (long *)0x0) goto LAB_0332df9c;
            lVar11 = *plVar6;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 == 0) goto LAB_0332df2c;
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_0332df14;
          }
          lVar11 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_0332de20;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0332de20:
          pSVar8 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (pSVar8 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
               ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar8);
            }
          }
          pSVar9 = (__this->fields).CGDCBPHBFDE;
          __this_00 = (GGCMECLCOMJ_o *)thunk_FUN_01bda818(GGCMECLCOMJ_TypeInfo);
          GGCMECLCOMJ___ctor(__this_00,pSVar8,(MethodInfo *)0x0);
          lVar11 = Method_System_Collections_Generic_List<GGCMECLCOMJ>_Add__;
          if (pSVar9 == (System_Collections_Generic_List_GGCMECLCOMJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pGVar12 = (pSVar9->fields)._items;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (pGVar12 == (GGCMECLCOMJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pGVar12->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pGVar12->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pGVar12->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
            ;
          }
        } while( true );
      }
    }
  }
  goto LAB_0332e274;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0332df14:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0332df90;
    }
  }
LAB_0332df2c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0332df90:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0332df9c:
  plVar6 = (long *)(**(code **)(*plVar5 + 0x468))
                             (plVar5,StringLiteral_11108,*(undefined8 *)(*plVar5 + 0x470));
  if ((plVar6 != (long *)0x0) &&
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210)),
     plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar11 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0332e064;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0332e064:
      uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar14 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
        if (plVar6 == (long *)0x0) goto LAB_0332e1f4;
        lVar11 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_0332e1cc;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0332e1b4;
      }
      lVar11 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0332e0c4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0332e0c4:
      pSVar8 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (pSVar8 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
           ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar8);
        }
      }
      pSVar10 = (__this->fields).OKIANCELJJF;
      __this_01 = (GGLKHCAIGDI_o *)thunk_FUN_01bda818(GGLKHCAIGDI_TypeInfo);
      GGLKHCAIGDI___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
      lVar11 = Method_System_Collections_Generic_List<GGLKHCAIGDI>_Add__;
      if (pSVar10 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pGVar13 = (pSVar10->fields)._items;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
      if (pGVar13 == (GGLKHCAIGDI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar10->fields)._size;
      if (uVar2 < (uint)pGVar13->max_length) {
        (pSVar10->fields)._size = uVar2 + 1;
        pGVar13->m_Items[(int)uVar2] = __this_01;
        thunk_FUN_01c20e04(pGVar13->m_Items + (int)uVar2,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_0332e274;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0332e1b4:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0332e1e8;
    }
  }
LAB_0332e1cc:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0332e1e8:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0332e1f4:
  __this_02 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  if (__this_02 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_02,StringLiteral_8880,(MethodInfo *)0x0);
    iVar3 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0x1e,(MethodInfo *)0x0);
    (__this->fields).CFFDDAOKBME = iVar3;
    return;
  }
LAB_0332e274:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

