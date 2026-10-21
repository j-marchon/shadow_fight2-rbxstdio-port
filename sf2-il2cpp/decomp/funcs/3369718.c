// MDFGJKBMECA$$NHFNCHCKIJJ @ RVA 0x3369718

/* WARNING: Removing unreachable block (ram,0x03469b38) */

bool MDFGJKBMECA__NHFNCHCKIJJ
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Xml_XmlNode_o *LKILNGEECIJ,
               System_String_o *GAKKFJBNLFK,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int32_t iVar4;
  long *plVar5;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this;
  System_Collections_Generic_List_GEBHIBIEAJE__o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *str1;
  System_String_o *str0;
  System_String_o *str2;
  MethodInfo *in_x4;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int local_64;
  
  if ((DAT_04567ad7 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_set_Capacity__);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5628);
    FUN_01bab630(&StringLiteral_8120);
    FUN_01bab630(&StringLiteral_3673);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567ad7 = 1;
  }
  local_64 = 0;
  if (LKILNGEECIJ != (System_Xml_XmlNode_o *)0x0) {
    plVar5 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_5628,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
      return true;
    }
    if (BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) {
      __this = GBJGJEGPHKD__MPGCPFKOCOB(BCKBBGCOMJD,(MethodInfo *)0x0);
      pSVar6 = GBJGJEGPHKD__MPGCPFKOCOB(BCKBBGCOMJD,(MethodInfo *)0x0);
      if (pSVar6 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
        iVar1 = (pSVar6->fields)._size;
        plVar7 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
        if ((plVar7 != (long *)0x0) &&
           (iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
           __this != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
          System_Collections_Generic_List<object>__set_Capacity
                    ((System_Collections_Generic_List_object__o *)__this,iVar3 + iVar1,
                     Method_System_Collections_Generic_List<GEBHIBIEAJE>_set_Capacity__);
          plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
          if (plVar5 != (long *)0x0) {
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0))
            ;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_034698fc;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar8 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_034698fc:
              uVar10 = (*(code *)*puVar8)(plVar5,puVar8[1]);
              if ((uVar10 & 1) == 0) {
                plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
                if (plVar5 == (long *)0x0) {
                  return true;
                }
                lVar9 = *plVar5;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 == 0) goto LAB_03469ad0;
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_03469ab8;
              }
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_0346995c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar8 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0346995c:
              AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar5,puVar8[1]);
              if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar2) ||
                 ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB);
              }
              __this_00 = (System_Xml_XmlAttributeCollection_o *)
                          (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                    (AHDGNOJPPIB,
                                     (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
              if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (__this_00,StringLiteral_8120,(MethodInfo *)0x0);
              iVar4 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,1,(MethodInfo *)0x0);
              str1 = (System_String_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
              local_64 = 0;
              if (0 < iVar4) {
                do {
                  str0 = System_String__Concat(StringLiteral_1,str1,(MethodInfo *)0x0);
                  if (0 < local_64) {
                    str2 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    str0 = System_String__Concat(str0,StringLiteral_3673,str2,(MethodInfo *)0x0);
                  }
                  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  MDFGJKBMECA__KJGCIFFGPPO(BCKBBGCOMJD,AHDGNOJPPIB,str0,GAKKFJBNLFK,in_x4);
                  local_64 = local_64 + 1;
                } while (local_64 < iVar4);
              }
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03469ab8:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03469aec;
    }
  }
LAB_03469ad0:
  puVar8 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03469aec:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return true;
}

