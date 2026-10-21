// TypeDefIndex 1298
// Namespace: 
// public class OAFGMIGFHAD : QuestAction
// Fields:
//   private string JGFKHMMNJBA; // 0x68
//   private List<OAFGMIGFHAD.OOCCJAADPDK> OBHHHJLOHOE; // 0x70
//   private LCKCDEKNLOA IPOMGFKGCFL; // 0x78

// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x31541E4]
// OAFGMIGFHAD$$HNIHOIAMDPC @ RVA 0x31541E4

/* WARNING: Removing unreachable block (ram,0x03254698) */

void OAFGMIGFHAD__HNIHOIAMDPC
               (OAFGMIGFHAD_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  OAFGMIGFHAD_OOCCJAADPDK_o *__this_00;
  undefined8 uVar11;
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *__this_01;
  undefined8 *puVar12;
  undefined8 uVar13;
  System_Collections_IEnumerator_c *pSVar14;
  OAFGMIGFHAD_OOCCJAADPDK_array *pOVar15;
  long lVar16;
  ulong uVar17;
  int32_t *piVar18;
  int *piVar19;
  LCKCDEKNLOA_o *pLVar20;
  undefined1 auVar21 [16];
  
  if ((DAT_04566827 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_Add__);
    FUN_01bab630(&Method_OAFGMIGFHAD_NDJAJHFFPKP__);
    FUN_01bab630(&OAFGMIGFHAD_OOCCJAADPDK_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_5245/*"Default"*/);
    DAT_04566827 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if ((JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar5,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
  pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
  (__this->fields).JGFKHMMNJBA = pSVar7;
  thunk_FUN_01c20e04();
  pSVar8 = System_Xml_XmlNode__GetEnumerator(JHMENEKPIBO,(MethodInfo *)0x0);
  if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar14 = pSVar8->klass;
    uVar2._0_1_ = (pSVar14->_2).rank;
    uVar2._1_1_ = (pSVar14->_2).minimumAlignment;
    uVar17 = (ulong)uVar2;
    if (uVar17 != 0) {
      piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar14->vtable + *piVar18;
          goto LAB_03254384;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_03254384:
    uVar17 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if ((uVar17 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
      if (plVar10 == (long *)0x0) goto LAB_032545dc;
      lVar16 = *plVar10;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 == 0) goto LAB_032545b4;
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    pSVar14 = pSVar8->klass;
    uVar3._0_1_ = (pSVar14->_2).rank;
    uVar3._1_1_ = (pSVar14->_2).minimumAlignment;
    uVar17 = (ulong)uVar3;
    if (uVar17 != 0) {
      piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar9 = pSVar14->vtable + (*piVar18 + 1);
          goto LAB_032543e4;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_032543e4:
    plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar10);
    }
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
    if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
    if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
      auVar21 = thunk_FUN_01bda818(OAFGMIGFHAD_OOCCJAADPDK_TypeInfo);
      __this_00 = auVar21._0_8_;
      OAFGMIGFHAD_OOCCJAADPDK___ctor(__this_00,auVar21._8_8_);
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
      if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      if (__this_00 == (OAFGMIGFHAD_OOCCJAADPDK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this_00->fields).JAICMIMBIOA = pSVar7;
      thunk_FUN_01c20e04();
      pLVar20 = (__this_00->fields).NEIJJHEFLHP;
      uVar11 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      (*(__this->klass->vtable)._6_IEFEBMICIHN.methodPtr)
                (__this,plVar10,pLVar20,uVar11,(__this->klass->vtable)._6_IEFEBMICIHN.method);
      lVar16 = Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_Add__;
      __this_01 = (__this->fields).OBHHHJLOHOE;
      if (__this_01 == (System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pOVar15 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pOVar15 == (OAFGMIGFHAD_OOCCJAADPDK_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar4 = (__this_01->fields)._size;
      if (uVar4 < (uint)pOVar15->max_length) {
        (__this_01->fields)._size = uVar4 + 1;
        pOVar15->m_Items[(int)uVar4] = __this_00;
        thunk_FUN_01c20e04(pOVar15->m_Items + (int)uVar4,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_032545d0;
    }
  }
LAB_032545b4:
  puVar12 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_032545d0:
  (*(code *)*puVar12)(plVar10,puVar12[1]);
LAB_032545dc:
  uVar11 = (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                     (JHMENEKPIBO,StringLiteral_5245/*"Default"*/,
                      (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  pLVar20 = (__this->fields).IPOMGFKGCFL;
  uVar13 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
                    /* WARNING: Could not recover jumptable at 0x0325466c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._6_IEFEBMICIHN.methodPtr)
            (__this,uVar11,pLVar20,uVar13,(__this->klass->vtable)._6_IEFEBMICIHN.method);
  return;
}


// ===== private void NDJAJHFFPKP()  [RVA 0x3154810]
// OAFGMIGFHAD$$NDJAJHFFPKP @ RVA 0x3154810

void OAFGMIGFHAD__NDJAJHFFPKP(OAFGMIGFHAD_o *__this,MethodInfo *method)

{
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3154818]
// OAFGMIGFHAD$$.ctor @ RVA 0x3154818

void OAFGMIGFHAD___ctor(OAFGMIGFHAD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *__this_00;
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o **ppSVar1;
  LCKCDEKNLOA_o *__this_01;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566828 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_TypeInfo);
    DAT_04566828 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>__ctor__);
  ppSVar1 = &(__this->fields).OBHHHJLOHOE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(__this_01,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).IPOMGFKGCFL;
  *ppLVar2 = __this_01;
  thunk_FUN_01c20e04(ppLVar2,__this_01);
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31548D8]
// OAFGMIGFHAD$$MAHFCKJGBPP @ RVA 0x31548D8

void OAFGMIGFHAD__MAHFCKJGBPP(OAFGMIGFHAD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_String_o *b;
  LCKCDEKNLOA_o *__this_00;
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *__this_01;
  System_String_o *pSVar3;
  Il2CppClass *OOGPLJBADCD;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566829 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_GetEnumerator__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04566829 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).JGFKHMMNJBA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
  __this_01 = (__this->fields).OBHHHJLOHOE;
  if (__this_01 != (System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_MoveNext__
                             ), pIVar1 = local_70.fields._current, bVar2) {
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      OOGPLJBADCD = local_70.fields._current[1].klass;
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      b = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,(System_String_o *)OOGPLJBADCD,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar3,b,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar1[1].monitor != (LCKCDEKNLOA_o *)0x0) {
          LCKCDEKNLOA__MAHFCKJGBPP(pIVar1[1].monitor,AAJBIMFNMBB,(MethodInfo *)0x0);
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__
                    );
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__)
    ;
    __this_00 = (__this->fields).IPOMGFKGCFL;
    if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__MAHFCKJGBPP(__this_00,AAJBIMFNMBB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x3154B14]
// OAFGMIGFHAD$$PKIFMKGDJJN @ RVA 0x3154B14

void OAFGMIGFHAD__PKIFMKGDJJN(OAFGMIGFHAD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *__this_00;
  LCKCDEKNLOA_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456682a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_GetEnumerator__);
    DAT_0456682a = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  QuestAction__PKIFMKGDJJN((QuestAction_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).OBHHHJLOHOE;
  if (__this_00 != (System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_38.fields._current[1].monitor == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LCKCDEKNLOA__DMLKEJNDODN(local_38.fields._current[1].monitor,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__)
    ;
    __this_01 = (__this->fields).IPOMGFKGCFL;
    if (__this_01 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

