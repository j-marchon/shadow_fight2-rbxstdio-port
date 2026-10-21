// TypeDefIndex 2993
// Namespace: 
// public class MFFKCPDBFPG : DOCABGGCCIL
// Fields:
//   public MFFKCPDBFPG.GDIIDMDOIDK BGHFADDGPAD; // 0x18
//   public List<DILGLGMKOFG> EEIGOFDOLKN; // 0x20

// ===== public void .ctor()  [RVA 0x34A49D4]
// MFFKCPDBFPG$$.ctor @ RVA 0x34A49D4

void MFFKCPDBFPG___ctor(MFFKCPDBFPG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_00;
  System_Collections_Generic_List_DILGLGMKOFG__o **ppSVar1;
  
  if ((DAT_045684e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
    DAT_045684e2 = 1;
  }
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (__this->fields).BGHFADDGPAD = 1;
  __this_00 = (System_Collections_Generic_List_DILGLGMKOFG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
  ppSVar1 = &(__this->fields).EEIGOFDOLKN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, ushort JDIHKNKFJMK, ushort EHEFEIEKHJO)  [RVA 0x34A4A64]
// MFFKCPDBFPG$$.ctor @ RVA 0x34A4A64

/* WARNING: Removing unreachable block (ram,0x035a5088) */
/* WARNING: Removing unreachable block (ram,0x035a524c) */

void MFFKCPDBFPG___ctor(MFFKCPDBFPG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,uint16_t JDIHKNKFJMK
                       ,uint16_t EHEFEIEKHJO,MethodInfo *method)

{
  int32_t FDGAGHPHOAF;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar4;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  DILGLGMKOFG_o *pDVar8;
  long *plVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  MGNDHCBAPEN_int__int__o *pMVar10;
  int32_t iVar11;
  long lVar12;
  DILGLGMKOFG_array *pDVar13;
  ulong uVar14;
  int *piVar15;
  System_Collections_Generic_List_DILGLGMKOFG__o **ppSVar16;
  
  if ((DAT_045684e3 & 1) == 0) {
    FUN_01bab630(&DILGLGMKOFG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12134/*"Silver"*/);
    FUN_01bab630(&StringLiteral_3569/*"Bronze"*/);
    FUN_01bab630(&StringLiteral_12185/*"Slot"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    DAT_045684e3 = 1;
  }
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.NOBEFHEECKJ = 5;
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_035a5244;
  LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                          (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
  pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
  (__this->fields).BGHFADDGPAD = 2;
  bVar3 = System_String__op_Equality(pSVar4,StringLiteral_3569/*"Bronze"*/,(MethodInfo *)0x0);
  if (bVar3) {
    iVar11 = 0;
LAB_035a4be0:
    (__this->fields).BGHFADDGPAD = iVar11;
  }
  else {
    bVar3 = System_String__op_Equality(pSVar4,StringLiteral_12134/*"Silver"*/,(MethodInfo *)0x0);
    if (bVar3) {
      iVar11 = 1;
      goto LAB_035a4be0;
    }
  }
  pSVar5 = (System_Collections_Generic_List_DILGLGMKOFG__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
  ppSVar16 = &(__this->fields).EEIGOFDOLKN;
  *ppSVar16 = pSVar5;
  thunk_FUN_01c20e04(ppSVar16,pSVar5);
  plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar12 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_035a4c8c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_035a4c8c:
      uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar14 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar12 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_035a5144;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_035a512c;
      }
      lVar12 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_035a4cf0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_035a4cf0:
      JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
         ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(JHMENEKPIBO);
      }
      pSVar4 = (System_String_o *)
               (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
      bVar3 = System_String__op_Equality(pSVar4,StringLiteral_12185/*"Slot"*/,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar5 = *ppSVar16;
        pDVar8 = (DILGLGMKOFG_o *)thunk_FUN_01bda818(DILGLGMKOFG_TypeInfo);
        DILGLGMKOFG___ctor(pDVar8,JHMENEKPIBO,JDIHKNKFJMK,EHEFEIEKHJO,-0x80000000,0x7fffffff,
                           (MethodInfo *)0x0);
        lVar12 = Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__;
        if (pSVar5 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pDVar13 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pDVar13 == (DILGLGMKOFG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pDVar13->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pDVar13->m_Items[(int)uVar2] = pDVar8;
          thunk_FUN_01c20e04(pDVar13->m_Items + (int)uVar2,pDVar8);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pDVar8,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        pSVar4 = (System_String_o *)
                 (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(pSVar4,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
        if (bVar3) {
          plVar9 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (JHMENEKPIBO,
                                      (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
LAB_035a4e38:
          lVar12 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_035a4e84;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_035a4e84:
          uVar14 = (*(code *)*puVar7)(plVar9,puVar7[1]);
          if ((uVar14 & 1) != 0) {
            lVar12 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_035a4ee4;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_035a4ee4:
            AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar9,puVar7[1]);
            if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
                 ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB_00);
              }
            }
            pMVar10 = GIAMPEGMNHE__GGPIBJJKMPK(JHMENEKPIBO,-0x80000000,0x7fffffff,(MethodInfo *)0x0)
            ;
            if (pMVar10 == (MGNDHCBAPEN_int__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar5 = *ppSVar16;
            iVar11 = (pMVar10->fields).PHPELPFMOII;
            FDGAGHPHOAF = (pMVar10->fields).DOKHHBGJICA;
            pDVar8 = (DILGLGMKOFG_o *)thunk_FUN_01bda818(DILGLGMKOFG_TypeInfo);
            DILGLGMKOFG___ctor(pDVar8,AHDGNOJPPIB_00,JDIHKNKFJMK,EHEFEIEKHJO,iVar11,FDGAGHPHOAF,
                               (MethodInfo *)0x0);
            lVar12 = Method_System_Collections_Generic_List<DILGLGMKOFG>_Add__;
            if (pSVar5 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pDVar13 = (pSVar5->fields)._items;
            (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
            if (pDVar13 == (DILGLGMKOFG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar5->fields)._size;
            if (uVar2 < (uint)pDVar13->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pDVar13->m_Items[(int)uVar2] = pDVar8;
              thunk_FUN_01c20e04(pDVar13->m_Items + (int)uVar2,pDVar8);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pDVar8,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                        );
            }
            goto LAB_035a4e38;
          }
          plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
          if (plVar9 != (long *)0x0) {
            lVar12 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_035a5078;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_035a5078:
            (*(code *)*puVar7)(plVar9,puVar7[1]);
          }
        }
      }
    } while( true );
  }
LAB_035a5244:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_035a512c:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_035a5160;
    }
  }
LAB_035a5144:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_035a5160:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

