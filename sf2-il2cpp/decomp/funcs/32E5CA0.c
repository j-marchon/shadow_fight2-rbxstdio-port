// MMIIDELPHLP$$HNIHOIAMDPC @ RVA 0x32E5CA0

/* WARNING: Removing unreachable block (ram,0x033e6304) */
/* WARNING: Removing unreachable block (ram,0x033e63b8) */

void MMIIDELPHLP__HNIHOIAMDPC
               (MMIIDELPHLP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  MMIIDELPHLP_FJDJOEFFGNH_o *__this_00;
  MGNDHCBAPEN_int__int__o *pMVar9;
  System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *pSVar10;
  long lVar11;
  System_String_array *pSVar12;
  MMIIDELPHLP_FJDJOEFFGNH_array *pMVar13;
  ulong uVar14;
  int *piVar15;
  System_Collections_Generic_List_string__o *__this_01;
  float fVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar17;
  
  if ((DAT_0456760d & 1) == 0) {
    FUN_01bab630(&MMIIDELPHLP_FJDJOEFFGNH_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_5275);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_7634);
    FUN_01bab630(&StringLiteral_3451);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_13918);
    DAT_0456760d = 1;
  }
  pSVar10 = (__this->fields).BAFCLOIPEMA;
  if (pSVar10 != (System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *)0x0) {
    length = (pSVar10->fields)._size;
    (pSVar10->fields)._size = 0;
    (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
        (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                    (AHDGNOJPPIB,StringLiteral_7634,
                                     (AHDGNOJPPIB->klass->vtable)._51_get_Item.method),
        plVar3 != (long *)0x0)) &&
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210)),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar3;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033e5e74;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e5e74:
        uVar14 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar14 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) goto LAB_033e6010;
          lVar11 = *plVar3;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 == 0) goto LAB_033e5fe8;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_033e5fd0;
        }
        lVar11 = *plVar3;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_033e5ed4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e5ed4:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        __this_01 = (__this->fields).GLFJDDHEMNO;
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1,(MethodInfo *)0x0);
        lVar11 = Method_System_Collections_Generic_List<string>_Add__;
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = pSVar8;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar8,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  goto LAB_033e63b4;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_033e5fd0:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033e6004;
    }
  }
LAB_033e5fe8:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033e6004:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_033e6010:
  plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_5275,
                              (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if ((plVar3 != (long *)0x0) &&
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210)),
     plVar3 != (long *)0x0)) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar11 = *plVar3;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033e60dc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e60dc:
      uVar14 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar14 & 1) == 0) {
        plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
        if (plVar3 == (long *)0x0) goto LAB_033e62f8;
        lVar11 = *plVar3;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_033e62d0;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_033e62b8;
      }
      lVar11 = *plVar3;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_033e613c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e613c:
      JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
           ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JHMENEKPIBO);
        }
      }
      __this_00 = (MMIIDELPHLP_FJDJOEFFGNH_o *)thunk_FUN_01bda818(MMIIDELPHLP_FJDJOEFFGNH_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_2968,(MethodInfo *)0x0);
      pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1,(MethodInfo *)0x0);
      if (__this_00 == (MMIIDELPHLP_FJDJOEFFGNH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this_00->fields).BNGDONJEHMH = pSVar8;
      thunk_FUN_01c20e04();
      pMVar9 = GIAMPEGMNHE__GGPIBJJKMPK(JHMENEKPIBO,0,0,(MethodInfo *)0x0);
      if (pMVar9 == (MGNDHCBAPEN_int__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CVar17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((pMVar9->fields).PHPELPFMOII,(MethodInfo *)0x0);
      (__this_00->fields).AKPNOPAEKEF.fields = CVar17;
      CVar17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((pMVar9->fields).DOKHHBGJICA,(MethodInfo *)0x0);
      (__this_00->fields).HFBHMJBLLOI.fields = CVar17;
      lVar11 = Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_Add__;
      pSVar10 = (__this->fields).BAFCLOIPEMA;
      if (pSVar10 == (System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar13 = (pSVar10->fields)._items;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
      if (pMVar13 == (MMIIDELPHLP_FJDJOEFFGNH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar10->fields)._size;
      if (uVar2 < (uint)pMVar13->max_length) {
        (pSVar10->fields)._size = uVar2 + 1;
        pMVar13->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pMVar13->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_033e63b4;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_033e62b8:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033e62ec;
    }
  }
LAB_033e62d0:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033e62ec:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_033e62f8:
  plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_3451,
                              (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if ((plVar3 != (long *)0x0) &&
     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)),
     pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_13918,(MethodInfo *)0x0);
    fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.0,(MethodInfo *)0x0);
    (__this->fields).BCJHHLJGGKA = fVar16;
    return;
  }
LAB_033e63b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

